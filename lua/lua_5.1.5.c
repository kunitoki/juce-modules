//------------------------------------------------------------------------------
/*
*/
//==============================================================================

#include "AppConfig.h"

#define JUCELUA_CONFIG_ONLY 1
#include "lua.h"
#undef JUCELUA_CONFIG_ONLY

#if JUCELUA_BUILD_VERSION_51

#if _MSC_VER
#pragma push_macro("_CRT_SECURE_NO_WARNINGS")
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#endif

/* luaconf.h only declares some things if it is being included
   from certain source files. We define all the relevant macros
   and include luaconf.h once so we get all the declarations.
*/
#define LUA_CORE
#define loslib_c
#include "lua-5.1.5/src/luaconf.h"
#undef LUA_CORE
#undef loslib_c

#if _MSC_VER
#pragma warning (push)
#pragma warning (disable: 4244) /* Possible loss of data */
#pragma warning (disable: 4702) /* Unreachable code */
#endif

/* Include this early to prevent the conflict with luai_hashnum
   and supress the warning caused by #define lua_assert
*/
#include "lua-5.1.5/src/lapi.c"
#include "lua-5.1.5/src/lauxlib.c"
#include "lua-5.1.5/src/lbaselib.c"
#include "lua-5.1.5/src/lcode.c"
#include "lua-5.1.5/src/ldblib.c"
#include "lua-5.1.5/src/ldebug.c"

#if _MSC_VER
#pragma warning (push)
#pragma warning (disable: 4297) /* function assumed not to throw an exception but does */
#endif
#include "lua-5.1.5/src/ldo.c"
#if _MSC_VER
#pragma warning (pop)
#endif

#include "lua-5.1.5/src/ldump.c"
#include "lua-5.1.5/src/lfunc.c"
#include "lua-5.1.5/src/lgc.c"
#include "lua-5.1.5/src/linit.c"
#include "lua-5.1.5/src/liolib.c"
#include "lua-5.1.5/src/llex.c"
#include "lua-5.1.5/src/lmathlib.c"
#include "lua-5.1.5/src/lmem.c"
#include "lua-5.1.5/src/lobject.c"
#include "lua-5.1.5/src/lopcodes.c"
#include "lua-5.1.5/src/loslib.c"
#include "lua-5.1.5/src/lparser.c"
#include "lua-5.1.5/src/lstate.c"
#include "lua-5.1.5/src/lstring.c"
#include "lua-5.1.5/src/lstrlib.c"
#include "lua-5.1.5/src/ltable.c"
#include "lua-5.1.5/src/ltablib.c"
#include "lua-5.1.5/src/ltm.c"
#include "lua-5.1.5/src/lundump.c"
#include "lua-5.1.5/src/lvm.c"
#include "lua-5.1.5/src/lzio.c"

#include "lua_extensions.h"

/* loadlib.c includes Windows.h, which defines the LoadString macro,
   so include it last to prevent errors.
*/
#include "lua-5.1.5/src/loadlib.c"

#if _MSC_VER
#pragma warning (pop)
#endif

#if _MSC_VER
#pragma pop_macro("_CRT_SECURE_NO_WARNINGS")
#endif

#endif
