//=============================================================================
/*
** $Id: lua.h,v 1.285 2013/03/15 13:04:22 roberto Exp $
** Lua - A Scripting Language
** Lua.org, PUC-Rio, Brazil (http://www.lua.org)
** See Copyright Notice at the end of this file
*/

/*******************************************************************************

 BEGIN_JUCE_MODULE_DECLARATION

  ID:               lua
  vendor:           jucetice
  version:          1.0.0
  name:             Lua is a powerful, fast, lightweight, embeddable scripting language. (Supports 5.1.5 and 5.2.4)
  description:      Lua combines simple procedural syntax with powerful data description constructs based on associative arrays and extensible semantics.
  website:          http://www.lua.org/
  license:          MIT

  dependencies:     juce_core

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#ifndef __JUCE_LUA_MODULE_INCLUDE_HEADER_H__
#define __JUCE_LUA_MODULE_INCLUDE_HEADER_H__

//=============================================================================
/** Config: JUCELUA_BUILD_VERSION_51
    Enable module for lua 5.1
*/
#ifndef JUCELUA_BUILD_VERSION_51
 #define JUCELUA_BUILD_VERSION_51 0
#endif

//=============================================================================
/** Config: JUCELUA_BUILD_VERSION_52
    Enable module for lua 5.2
*/
#ifndef JUCELUA_BUILD_VERSION_52
 #if JUCELUA_BUILD_VERSION_51 || JUCELUA_BUILD_VERSION_53
  #define JUCELUA_BUILD_VERSION_52 0
 #else
  #define JUCELUA_BUILD_VERSION_52 1
 #endif
#endif

//=============================================================================
/** Config: JUCELUA_BUILD_VERSION_53
    Enable module for lua 5.3
*/
#ifndef JUCELUA_BUILD_VERSION_53
 #if JUCELUA_BUILD_VERSION_51 || JUCELUA_BUILD_VERSION_52
  #define JUCELUA_BUILD_VERSION_53 0
 #else
  #define JUCELUA_BUILD_VERSION_53 1
 #endif
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_BASE64
    Enable module base64 https://github.com/LuaDist/lbase64.
*/
#ifndef JUCELUA_ENABLE_MODULE_BASE64
 #define JUCELUA_ENABLE_MODULE_BASE64 0
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_BIT
    Enable module bit.
*/
#ifndef JUCELUA_ENABLE_MODULE_BIT
 #define JUCELUA_ENABLE_MODULE_BIT 0
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_CJSON
    Enable module cjson.
*/
#ifndef JUCELUA_ENABLE_MODULE_CJSON
 #define JUCELUA_ENABLE_MODULE_CJSON 0
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_STRUCT
    Enable module struct.
*/
#ifndef JUCELUA_ENABLE_MODULE_STRUCT
 #define JUCELUA_ENABLE_MODULE_STRUCT 0
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_ZIP
    Enable module luazip.
*/
#ifndef JUCELUA_ENABLE_MODULE_ZIP
 #define JUCELUA_ENABLE_MODULE_ZIP 0
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_ZLIB
    Enable module zlib.
*/
#ifndef JUCELUA_ENABLE_MODULE_ZLIB
 #define JUCELUA_ENABLE_MODULE_ZLIB 0
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_SOCKET
    Enable module socket.
*/
#ifndef JUCELUA_ENABLE_MODULE_SOCKET
 #define JUCELUA_ENABLE_MODULE_SOCKET 0
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_PATH
    Enable module lpath.
*/
#ifndef JUCELUA_ENABLE_MODULE_PATH
 #define JUCELUA_ENABLE_MODULE_PATH 0
#endif

//=============================================================================
/** Config: JUCELUA_ENABLE_MODULE_PROFILER
    Enable module shiny profiler.
*/
#ifndef JUCELUA_ENABLE_MODULE_PROFILER
 #define JUCELUA_ENABLE_MODULE_PROFILER 0
#endif

#ifndef JUCELUA_CONFIG_ONLY

//=============================================================================

// default lua library and extensions

#ifdef __cplusplus
extern "C"
{
#endif

#include "lua_inc.h"

#if JUCELUA_ENABLE_MODULE_ALIEN
  LUALIB_API int luaopen_alien_core(lua_State* L);
#endif

#if JUCELUA_ENABLE_MODULE_BASE64
  LUALIB_API int luaopen_base64(lua_State* L);
#endif

#if JUCELUA_ENABLE_MODULE_BIT
  LUALIB_API int luaopen_bit(lua_State* L);
#endif
  
#if JUCELUA_ENABLE_MODULE_CJSON
  LUALIB_API int luaopen_cjson(lua_State* L);
#endif

#if JUCELUA_ENABLE_MODULE_STRUCT
  LUALIB_API int luaopen_struct(lua_State* L);
#endif

#if JUCELUA_ENABLE_MODULE_ZIP
  LUALIB_API int luaopen_zip(lua_State *L);
#endif

#if JUCELUA_ENABLE_MODULE_ZLIB
  LUALIB_API int luaopen_zlib(lua_State* L);
#endif

#if JUCELUA_ENABLE_MODULE_SOCKET
  LUALIB_API int luaopen_socket(lua_State *L);
  LUALIB_API int luaopen_socket_core(lua_State *L);
  LUALIB_API int luaopen_mime_core(lua_State *L);
#endif

#if JUCELUA_ENABLE_MODULE_PATH
  LUALIB_API int luaopen_path(lua_State *L);
  LUALIB_API int luaopen_path_fs(lua_State *L);
  LUALIB_API int luaopen_path_info(lua_State *L);
#endif

#if JUCELUA_ENABLE_MODULE_PROFILER
  LUALIB_API int luaopen_profiler(lua_State* L);
#endif

#ifdef __cplusplus
}
#endif

//=============================================================================

// lua bridge
#ifdef __cplusplus
  #include "bridge/LuaBridge/LuaBridge.h"
#endif

#endif // JUCELUA_CONFIG_ONLY

#endif // __JUCE_LUA_MODULE_INCLUDE_HEADER_H__
