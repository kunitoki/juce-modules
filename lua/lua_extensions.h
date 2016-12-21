//=============================================================================
/*
** $Id: lua.h,v 1.285 2013/03/15 13:04:22 roberto Exp $
** Lua - A Scripting Language
** Lua.org, PUC-Rio, Brazil (http://www.lua.org)
** See Copyright Notice at the end of this file
*/

#ifndef __JUCE_LUA_MODULE_EXTENSIONS_INCLUDE_HEADER_H__
#define __JUCE_LUA_MODULE_EXTENSIONS_INCLUDE_HEADER_H__

//=============================================================================

// default lua library and extensions

#if JUCELUA_ENABLE_MODULE_ALIEN
    #include "extensions/alien/core.c"
#endif

#if JUCELUA_ENABLE_MODULE_BASE64
    #include "extensions/base64/lbase64.c"
#endif

#if JUCELUA_ENABLE_MODULE_BIT
    #include "extensions/bitop/bit.c"
#endif

#if JUCELUA_ENABLE_MODULE_CJSON
    #include "extensions/cjson/cjson.c"
    #include "extensions/cjson/strbuf.c"
#endif

#if JUCELUA_ENABLE_MODULE_PATH
    #include "extensions/lpath/lpath.c"
#endif

#if JUCELUA_ENABLE_MODULE_SOCKET
    #include "extensions/luasocket/auxiliar.c"
    #include "extensions/luasocket/buffer.c"
    #include "extensions/luasocket/except.c"
    #include "extensions/luasocket/inet.c"
    #include "extensions/luasocket/io.c"
    #include "extensions/luasocket/luasocket.c"
    #include "extensions/luasocket/mime.c"
    #include "extensions/luasocket/options.c"
    #include "extensions/luasocket/select.c"
    #include "extensions/luasocket/serial.c"
    #include "extensions/luasocket/tcp.c"
    #include "extensions/luasocket/timeout.c"
    #include "extensions/luasocket/udp.c"
    #include "extensions/luasocket/unix.c"
    #include "extensions/luasocket/usocket.c"
    #include "extensions/luasocket/wsocket.c"
#endif

#if JUCELUA_ENABLE_MODULE_STRUCT
    #include "extensions/struct/struct.c"
#endif

#if JUCELUA_ENABLE_MODULE_ZLIB
    #include "extensions/zlib/lzlib.c"
#endif

#if JUCELUA_ENABLE_MODULE_ZIP
    #include "extensions/luazip/luazip.c"
#endif

#if JUCELUA_ENABLE_MODULE_PROFILER
    #include "extensions/shiny/lib/ShinyManager.c"
    #include "extensions/shiny/lib/ShinyNode.c"
    #include "extensions/shiny/lib/ShinyNodePool.c"
    #include "extensions/shiny/lib/ShinyNodeState.c"
    #include "extensions/shiny/lib/ShinyOutput.c"
    #include "extensions/shiny/lib/ShinyTools.c"
    #include "extensions/shiny/lib/ShinyZone.c"
#endif

#endif // __JUCE_LUA_MODULE_EXTENSIONS_INCLUDE_HEADER_H__
