//=============================================================================
/*
** $Id: lua.h,v 1.285 2013/03/15 13:04:22 roberto Exp $
** Lua - A Scripting Language
** Lua.org, PUC-Rio, Brazil (http://www.lua.org)
** See Copyright Notice at the end of this file
*/

#include "AppConfig.h"

#define JUCELUA_CONFIG_ONLY 1
#include "lua.h"
#undef JUCELUA_CONFIG_ONLY

//=============================================================================
#if JUCELUA_ENABLE_MODULE_PROFILER
    #include "extensions/shiny/lshiny.cpp"
#endif
