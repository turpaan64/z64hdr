#ifndef __Z_QUAKE__
#define __Z_QUAKE__

#include "global.h"
#include "vt.h"

extern QuakeRequest sQuakeRequest[4];
extern s16 D_80126250;
extern s16 sQuakeRequestCount;

s16 (*sQuakeCallbacks[]);

#endif // __Z_QUAKE__