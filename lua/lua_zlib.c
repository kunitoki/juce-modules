
#include "AppConfig.h"

#define JUCELUA_CONFIG_ONLY 1
#include "lua.h"
#undef JUCELUA_CONFIG_ONLY

#if JUCELUA_ENABLE_MODULE_ZIP || JUCELUA_ENABLE_MODULE_ZLIB

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#if JUCE_MSVC
 #pragma warning (push)
 #pragma warning (disable: 4309 4305 4365)
#endif

#undef OS_CODE
#undef fdopen
#define ZLIB_INTERNAL
#define NO_DUMMY_DECL
#include "extensions/zlib/lib/zlib.h"
#include "extensions/zlib/lib/adler32.c"
#include "extensions/zlib/lib/compress.c"
#undef DO1
#undef DO8
#include "extensions/zlib/lib/crc32.c"
#include "extensions/zlib/lib/deflate.c"
#include "extensions/zlib/lib/inffast.c"
#undef PULLBYTE
#undef LOAD
#undef RESTORE
#undef INITBITS
#undef NEEDBITS
#undef DROPBITS
#undef BYTEBITS
#include "extensions/zlib/lib/inflate.c"
#include "extensions/zlib/lib/inftrees.c"
#include "extensions/zlib/lib/uncompr.c"
#include "extensions/zlib/lib/trees.c"
#include "extensions/zlib/lib/zutil.c"
#undef Byte
#undef fdopen
#undef local
#undef Freq
#undef Code
#undef Dad
#undef Len

#if JUCE_MSVC
 #pragma warning (pop)
#endif

#endif
