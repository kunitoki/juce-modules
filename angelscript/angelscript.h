/*
 AngelCode Scripting Library
 Copyright (c) 2003-2012 Andreas Jonsson
 
 This software is provided 'as-is', without any express or implied
 warranty. In no event will the authors be held liable for any
 damages arising from the use of this software.
 
 Permission is granted to anyone to use this software for any
 purpose, including commercial applications, and to alter it and
 redistribute it freely, subject to the following restrictions:
 
 1. The origin of this software must not be misrepresented; you
 must not claim that you wrote the original software. If you use
 this software in a product, an acknowledgment in the product
 documentation would be appreciated but is not required.
 
 2. Altered source versions must be plainly marked as such, and
 must not be misrepresented as being the original software.
 
 3. This notice may not be removed or altered from any source
 distribution.
 
 The original version of this library can be located at:
 http://www.angelcode.com/angelscript/
 
 Andreas Jonsson
 andreas@angelcode.com
*/

/*******************************************************************************

 BEGIN_JUCE_MODULE_DECLARATION

  ID:               angelscript
  vendor:           angelcode
  version:          2.27.0
  name:             The AngelCode Scripting Library
  description:      The AngelCode Scripting Library, or AngelScript as it is also known, is an extremely flexible cross-platform scripting library designed to allow applications to extend their functionality through external scripts.
  website:          http://www.angelcode.com/angelscript/
  license:          zlib

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#include "sdk/angelscript/include/angelscript.h"
// #include "jit/as_jit.h"
#include "sdk/add_on/autowrapper/aswrappedcall.h"
#include "sdk/add_on/contextmgr/contextmgr.h"
#include "sdk/add_on/debugger/debugger.h"
#include "sdk/add_on/scriptany/scriptany.h"
#include "sdk/add_on/scriptarray/scriptarray.h"
#include "sdk/add_on/scriptbuilder/scriptbuilder.h"
#include "sdk/add_on/scriptdictionary/scriptdictionary.h"
#include "sdk/add_on/scriptfile/scriptfile.h"
#include "sdk/add_on/scripthandle/scripthandle.h"
// #include "sdk/add_on/scripthelper/scripthelper.h"
#include "sdk/add_on/scriptmath/scriptmath.h"
#include "sdk/add_on/scriptmath/scriptmathcomplex.h"
#include "sdk/add_on/scriptstdstring/scriptstdstring.h"
#include "sdk/add_on/serializer/serializer.h"
#include "sdk/add_on/weakref/weakref.h"
