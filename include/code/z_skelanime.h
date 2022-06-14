#ifndef __Z_SKELANIME__
#define __Z_SKELANIME__

#include "global.h"
#include "vt.h"
#define ANIM_INTERP 1

s32 LinkAnimation_Loop(PlayState* play, SkelAnime* skelAnime);
s32 LinkAnimation_Once(PlayState* play, SkelAnime* skelAnime);
s32 SkelAnime_LoopFull(SkelAnime* skelAnime);
s32 SkelAnime_Once(SkelAnime* skelAnime);
s32 SkelAnime_LoopPartial(SkelAnime* skelAnime);
void SkelAnime_DrawLimbLod(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable, OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg, s32 lod);
void SkelAnime_DrawFlexLimbLod(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable, OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg, s32 lod, Mtx** mtx);
void SkelAnime_DrawLimbOpa(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable, OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg);
void SkelAnime_DrawFlexLimbOpa(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable, OverrideLimbDrawOpa overrideLimbDraw, PostLimbDrawOpa postLimbDraw, void* arg, Mtx** limbMatrices);
Gfx* SkelAnime_DrawLimb(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* arg, Gfx* gfx);
Gfx* SkelAnime_DrawFlexLimb(PlayState* play, s32 limbIndex, void** skeleton, Vec3s* jointTable, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* arg, Mtx** mtx, Gfx* gfx);
AnimationEntry* AnimationContext_AddEntry(AnimationContext* animationCtx, AnimationType type);
void AnimationContext_LoadFrame(PlayState* play, AnimationEntryData* data);
void AnimationContext_CopyAll(PlayState* play, AnimationEntryData* data);
void AnimationContext_Interp(PlayState* play, AnimationEntryData* data);
void AnimationContext_CopyTrue(PlayState* play, AnimationEntryData* data);
void AnimationContext_CopyFalse(PlayState* play, AnimationEntryData* data);
void AnimationContext_MoveActor(PlayState* play, AnimationEntryData* data);
s32 LinkAnimation_Morph(PlayState* play, SkelAnime* skelAnime);
s32 LinkAnimation_Loop(PlayState* play, SkelAnime* skelAnime);
s32 LinkAnimation_Once(PlayState* play, SkelAnime* skelAnime);
s32 Animation_OnFrameImpl(SkelAnime* skelAnime, f32 frame, f32 updateRate);
void SkelAnime_SetUpdate(SkelAnime* skelAnime);
s32 SkelAnime_Morph(SkelAnime* skelAnime);
s32 SkelAnime_MorphTaper(SkelAnime* skelAnime);
void SkelAnime_AnimateFrame(SkelAnime* skelAnime);
s32 SkelAnime_LoopFull(SkelAnime* skelAnime);
s32 SkelAnime_LoopPartial(SkelAnime* skelAnime);
s32 SkelAnime_Once(SkelAnime* skelAnime);

#endif // __Z_SKELANIME__
