#ifndef Z64_CODE_80043480_H
#define Z64_CODE_80043480_H

#include "global.h"

void DynaPolyActor_Init(DynaPolyActor* dynaActor, s32 flags);

void func_800434A0(DynaPolyActor* dynaActor);

void func_800434A8(DynaPolyActor* dynaActor);

void func_800434B8(DynaPolyActor* dynaActor);

void func_800434C8(CollisionContext* colCtx, s32 floorBgId);

void func_800434F8(DynaPolyActor* dynaActor);

void func_80043508(CollisionContext* colCtx, s32 floorBgId);

void func_80043538(DynaPolyActor* dynaActor);

s32 func_80043548(DynaPolyActor* dynaActor);

s32 func_8004356C(DynaPolyActor* dynaActor);

s32 func_80043590(DynaPolyActor* dynaActor);

s32 func_800435B4(DynaPolyActor* dynaActor);

s32 func_800435D8(PlayState* play, DynaPolyActor* dynaActor, s16 arg2, s16 arg3, s16 arg4);

#endif
