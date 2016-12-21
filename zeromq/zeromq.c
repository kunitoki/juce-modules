
#ifdef _MSC_VER
#include "tweetnacl/contrib/randombytes/winrandom.c"
#else
#include "tweetnacl/contrib/randombytes/devurandom.c"
#endif

#include "tweetnacl/src/tweetnacl.c"
