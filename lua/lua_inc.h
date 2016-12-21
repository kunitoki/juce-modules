//=============================================================================
/*
** $Id: lua.h,v 1.285 2013/03/15 13:04:22 roberto Exp $
** Lua - A Scripting Language
** Lua.org, PUC-Rio, Brazil (http://www.lua.org)
** See Copyright Notice at the end of this file
*/

#ifndef __JUCE_LUA_MODULE_GLOBAL_INCLUDE_HEADER_H__
#define __JUCE_LUA_MODULE_GLOBAL_INCLUDE_HEADER_H__

//=============================================================================

// default lua library and extensions

#if JUCELUA_BUILD_VERSION_51
  #include "lua-5.1.5/src/lua.h"
  #include "lua-5.1.5/src/lualib.h"
  #include "lua-5.1.5/src/lauxlib.h"
#elif JUCELUA_BUILD_VERSION_52
  #include "lua-5.2.4/src/lua.h"
  #include "lua-5.2.4/src/lualib.h"
  #include "lua-5.2.4/src/lauxlib.h"
#elif JUCELUA_BUILD_VERSION_53
  #include "lua-5.3.2/src/lua.h"
  #include "lua-5.3.2/src/lualib.h"
  #include "lua-5.3.2/src/lauxlib.h"
#endif

#endif // __JUCE_LUA_MODULE_GLOBAL_INCLUDE_HEADER_H__
