#ifndef OBJECT_OWL_H
#define OBJECT_OWL_H 1

extern s16 sOwlTakeoffAnimFrameData[];
extern JointIndex sOwlTakeoffAnimJointIndices[];
extern AnimationHeader gOwlTakeoffAnim;
extern s16 sOwlFlyAnimFrameData[];
extern JointIndex sOwlFlyAnimJointIndices[];
extern AnimationHeader gOwlFlyAnim;
extern Vtx object_owlVtx_0015E0[];
extern Gfx gOwlTorsoDL[];
extern Gfx gOwlNeckDL[];
extern Gfx gOwlHeadDL[];
extern Gfx gOwlLeftEyebrowDL[];
extern Gfx gOwlRightEyebrowDL[];
extern Gfx gOwlUpperRightLegDL[];
extern Gfx gOwlLowerRightLegDL[];
extern Gfx gOwlRightClawDL[];
extern Gfx gOwlLowerLeftWingDL[];
extern Gfx gOwlMiddleLeftWing1DL[];
extern Gfx gOwlMiddleLeftWing2DL[];
extern Gfx gOwlUpperLeftWingDL[];
extern Gfx gOwlLowerRightWingDL[];
extern Gfx gOwlMiddleRightWing1DL[];
extern Gfx gOwlMiddleRightWing2DL[];
extern Gfx gOwlUpperRightWingDL[];
extern Gfx gOwlTailDL[];
extern Gfx gOwlUpperLeftLegDL[];
extern Gfx gOwlLowerLeftLegDL[];
extern Gfx gOwlLeftClawDL[];
extern u64 object_owlTLUT_006DA8[];
extern u64 object_owlTLUT_006FA8[];
extern u64 object_owlTex_0071A8[];
extern u64 object_owlTex_0079A8[];
extern u64 object_owlTex_0081A8[];
extern u64 gObjOwlEyeOpenTex[];
extern u64 gObjOwlEyeHalfTex[];
extern u64 gObjOwlEyeClosedTex[];
extern u64 object_owlTex_0095A8[];
extern u64 object_owlTex_009DA8[];
extern u64 object_owlTex_009FA8[];
extern u64 object_owlTex_00AFA8[];
extern u64 object_owlTex_00B7A8[];
extern StandardLimb gOwlRootLimb;
extern StandardLimb gOwlNeckLimb;
extern StandardLimb gOwlHeadLimb;
extern StandardLimb gOwlRightEyebrowLimb;
extern StandardLimb gOwlLeftEyebrowLimb;
extern StandardLimb gOwlLowerLeftWingLimb;
extern StandardLimb gOwlMiddleLeftWing1Limb;
extern StandardLimb gOwlMiddleLeftWing2Limb;
extern StandardLimb gOwlUpperLeftWingLimb;
extern StandardLimb gOwlLowerRightWingLimb;
extern StandardLimb gOwlMiddleRightWing1Limb;
extern StandardLimb gOwlMiddleRightWing2Limb;
extern StandardLimb gOwlUpperRightWingLimb;
extern StandardLimb gOwlUpperRightLegLimb;
extern StandardLimb gOwlLowerRightLegLimb;
extern StandardLimb gOwlRightClawLimb;
extern StandardLimb gOwlUpperLeftLegLimb;
extern StandardLimb gOwlLowerLeftLegLimb;
extern StandardLimb gOwlLeftClawLimb;
extern StandardLimb gOwlTailLimb;
extern void* gOwlFlyingSkelLimbs[];
extern FlexSkeletonHeader gOwlFlyingSkel;
extern s16 sOwlGlideAnimFrameData[];
extern JointIndex sOwlGlideAnimJointIndices[];
extern AnimationHeader gOwlGlideAnim;
extern s16 sOwlUnfoldWingsAnimFrameData[];
extern JointIndex sOwlUnfoldWingsAnimJointIndices[];
extern AnimationHeader gOwlUnfoldWingsAnim;
extern s16 sOwlPerchAnimFrameData[];
extern JointIndex sOwlPerchAnimJointIndices[];
extern AnimationHeader gOwlPerchAnim;
extern Vtx object_owlVtx_00C8B0[];
extern Gfx gOwlPerchingSkelLimbsLimb_010014DL_00ED10[];
extern Gfx gOwlPerchingSkelLimbsLimb_010008DL_00EEA0[];
extern Gfx gOwlPerchingSkelLimbsLimb_010068DL_00F030[];
extern Gfx gOwlPerchingSkelLimbsLimb_00FFFCDL_00F0D8[];
extern Gfx gOwlPerchingSkelLimbsLimb_00FFCCDL_00F1C0[];
extern Gfx gOwlPerchingSkelLimbsLimb_00FFD8DL_00F330[];
extern Gfx gOwlPerchingSkelLimbsLimb_00FFE4DL_00F7B0[];
extern Gfx gOwlPerchingSkelLimbsLimb_00FFF0DL_00F868[];
extern Gfx gOwlPerchingSkelLimbsLimb_010020DL_00F920[];
extern Gfx gOwlPerchingSkelLimbsLimb_01002CDL_00F9E8[];
extern Gfx gOwlPerchingSkelLimbsLimb_010038DL_00FAD8[];
extern Gfx gOwlPerchingSkelLimbsLimb_010044DL_00FC70[];
extern Gfx gOwlPerchingSkelLimbsLimb_010050DL_00FD38[];
extern Gfx gOwlPerchingSkelLimbsLimb_01005CDL_00FE28[];
extern StandardLimb gOwlPerchingSkelLimbsLimb_00FFC0;
extern StandardLimb gOwlPerchingSkelLimbsLimb_00FFCC;
extern StandardLimb gOwlPerchingSkelLimbsLimb_00FFD8;
extern StandardLimb gOwlPerchingSkelLimbsLimb_00FFE4;
extern StandardLimb gOwlPerchingSkelLimbsLimb_00FFF0;
extern StandardLimb gOwlPerchingSkelLimbsLimb_00FFFC;
extern StandardLimb gOwlPerchingSkelLimbsLimb_010008;
extern StandardLimb gOwlPerchingSkelLimbsLimb_010014;
extern StandardLimb gOwlPerchingSkelLimbsLimb_010020;
extern StandardLimb gOwlPerchingSkelLimbsLimb_01002C;
extern StandardLimb gOwlPerchingSkelLimbsLimb_010038;
extern StandardLimb gOwlPerchingSkelLimbsLimb_010044;
extern StandardLimb gOwlPerchingSkelLimbsLimb_010050;
extern StandardLimb gOwlPerchingSkelLimbsLimb_01005C;
extern StandardLimb gOwlPerchingSkelLimbsLimb_010068;
extern void* gOwlPerchingSkelLimbs[];
extern FlexSkeletonHeader gOwlPerchingSkel;

#endif
