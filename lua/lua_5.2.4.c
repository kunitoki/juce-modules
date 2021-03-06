//------------------------------------------------------------------------------
/*
*/
//==============================================================================

#include "AppConfig.h"

#define JUCELUA_CONFIG_ONLY 1
#include "lua.h"
#undef JUCELUA_CONFIG_ONLY

#if JUCELUA_BUILD_VERSION_52

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
#define lobject_c
#define lvm_c
#define LUA_CORE
#define LUA_LIB
#include "lua-5.2.4/src/luaconf.h"
#undef lobject_c
#undef lvm_c
#undef LUA_CORE
#undef LUA_LIB

#if _MSC_VER
#pragma warning (push)
#pragma warning (disable: 4244) /* Possible loss of data */
#pragma warning (disable: 4702) /* Unreachable code */
#endif

/* Include this early to prevent the conflict with luai_hashnum
   and supress the warning caused by #define lua_assert
*/
#include "lua-5.2.4/src/ltable.c"

#include "lua-5.2.4/src/lauxlib.c"
#include "lua-5.2.4/src/lbaselib.c"

#include "lua-5.2.4/src/lbitlib.c"
#include "lua-5.2.4/src/lcorolib.c"
#include "lua-5.2.4/src/ldblib.c"
#include "lua-5.2.4/src/linit.c"
#include "lua-5.2.4/src/liolib.c"
#include "lua-5.2.4/src/lmathlib.c"
#include "lua-5.2.4/src/loslib.c"
#include "lua-5.2.4/src/lstrlib.c"
#include "lua-5.2.4/src/ltablib.c"

#include "lua-5.2.4/src/lapi.c"
#include "lua-5.2.4/src/lcode.c"
#include "lua-5.2.4/src/lctype.c"
#include "lua-5.2.4/src/ldebug.c"
#if _MSC_VER
# pragma warning (push)
# pragma warning (disable: 4297) // function assumed not to throw an exception but does
#endif
#include "lua-5.2.4/src/ldo.c"
#if _MSC_VER
# pragma warning (pop)
#endif
#include "lua-5.2.4/src/ldump.c"
#include "lua-5.2.4/src/lfunc.c"
#include "lua-5.2.4/src/lgc.c"
#include "lua-5.2.4/src/llex.c"
#include "lua-5.2.4/src/lmem.c"
#include "lua-5.2.4/src/lobject.c"
#include "lua-5.2.4/src/lopcodes.c"
#include "lua-5.2.4/src/lparser.c"
#include "lua-5.2.4/src/lstate.c"
#include "lua-5.2.4/src/lstring.c"
#include "lua-5.2.4/src/ltm.c"
#include "lua-5.2.4/src/lundump.c"
#include "lua-5.2.4/src/lvm.c"
#include "lua-5.2.4/src/lzio.c"

#include "lua_extensions.h"

/* loadlib.c includes Windows.h, which defines the LoadString macro,
   so include it last to prevent errors.
*/
#include "lua-5.2.4/src/loadlib.c"

#if _MSC_VER
#pragma warning (pop)
#endif

#if _MSC_VER
#pragma pop_macro("_CRT_SECURE_NO_WARNINGS")
#endif

#endif
