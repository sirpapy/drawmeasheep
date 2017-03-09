# -*- python -*-
#                           Package   : omniidl
# poa.py                    Created on: 1999/11/4
#			    Author    : David Scott (djs)
#
#    Copyright (C) 2003-2011 Apasphere Ltd
#    Copyright (C) 1999 AT&T Laboratories Cambridge
#
#  This file is part of omniidl.
#
#  omniidl is free software; you can redistribute it and/or modify it
#  under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#  General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
#  02111-1307, USA.
#
# Description:

"""Produce the main header POA definitions for the C++ backend"""

from omniidl_be.cxx import id, config, ast
from omniidl_be.cxx.header import tie, template

import sys
self = sys.modules[__name__]

stream = None

def init(_stream):
    global stream, __nested
    __nested = 0
    stream = _stream
    return self


def POA_prefix():
    if not self.__nested:
        return "POA_"
    return ""


# Control arrives here
#
def visitAST(node):
    self.__completedModules = {}
    for n in node.declarations():
        if ast.shouldGenerateCodeForDecl(n):
            n.accept(self)

def visitModule(node):
    if node in self.__completedModules:
        return
    self.__completedModules[node] = 1
    
    name = id.mapID(node.identifier())

    if not config.state['Fragment']:
        stream.out(template.POA_module_begin,
                   name = name,
                   POA_prefix = POA_prefix())
        stream.inc_indent()

    nested = self.__nested
    self.__nested = 1
    for n in node.definitions():
        n.accept(self)

    # Splice the continuations together if splice-modules flag is set
    # (This might be unnecessary as there (seems to be) no relationship
    #  between things in the POA module- they all point back into the main
    #  module?)
    if config.state['Splice Modules']:
        for c in node.continuations():
            for n in c.definitions():
                n.accept(self)
            self.__completedModules[c] = 1

    self.__nested = nested

    if not config.state['Fragment']:
        stream.dec_indent()
        stream.out(template.POA_module_end)
    return

def visitInterface(node):
    if node.local():
        # No POA class for local interfaces
        return

    iname = id.mapID(node.identifier())
    environment = id.lookup(node)
    scopedName = id.Name(node.scopedName())
    impl_scopedName = scopedName.prefix("_impl_")
    scopedID = scopedName.fullyQualify()
    impl_scopedID = impl_scopedName.fullyQualify()

    POA_name = POA_prefix() + iname

    # deal with inheritance
    inherits = []
    for i in map(ast.remove_ast_typedefs, node.inherits()):
        name = id.Name(i.scopedName())
        i_POA_name = name.unambiguous(environment)

        if name.relName(environment) == None:
            # we need to fully qualify from the root
            i_POA_name = "::POA_" + name.fullyQualify(environment)
            
        elif name.relName(environment) == i.scopedName():
            # fully qualified (but not from root) POA name has a POA_ on the
            # front
            i_POA_name = "POA_" + i_POA_name
            
        inherits.append("public virtual " + i_POA_name)

    # Note that RefCountServantBase is a mixin class specified by the
    # implementor, not generated by the idl compiler.
    if node.inherits() == []:
        inherits.append("public virtual ::PortableServer::ServantBase")

    inherits_str = ",\n  ".join(inherits)

    # build the normal POA class first
    stream.out(template.POA_interface,
               POA_name = POA_name,
               scopedID = scopedID,
               impl_scopedID = impl_scopedID,
               inherits = inherits_str)

    if config.state['Normal Tie']:
        # Normal tie templates, inline (so already in relevant POA_
        # module)
        poa_name = ""
        if len(scopedName.fullName()) == 1:
            poa_name = "POA_"
        poa_name = poa_name + scopedName.simple()
        tie_name = poa_name + "_tie"

        tie.write_template(tie_name, poa_name, node, stream)

    return

def visitTypedef(node):
    pass
def visitEnum(node):
    pass
def visitStruct(node):
    pass
def visitStructForward(node):
    pass
def visitUnion(node):
    pass
def visitUnionForward(node):
    pass
def visitForward(node):
    pass
def visitConst(node):
    pass
def visitDeclarator(node):
    pass
def visitMember(node):
    pass
def visitException(node):
    pass

def visitValue(node):
    from omniidl_be.cxx import value
    v = value.getValueType(node)

    v.poa_module_decls(stream, self)

def visitValueForward(node):
    from omniidl_be.cxx import value
    v = value.getValueType(node)

    v.poa_module_decls(stream, self)

def visitValueAbs(node):
    from omniidl_be.cxx import value
    v = value.getValueType(node)

    v.poa_module_decls(stream, self)

def visitValueBox(node):
    from omniidl_be.cxx import value
    v = value.getValueType(node)

    v.poa_module_decls(stream, self)
