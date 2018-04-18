// Copyright 2016 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "BoneLists.generated.h"


UENUM(BlueprintType)
namespace EPNBones
{
	// The order is important
	enum Type
	{
		Hips = 0,	// Hips must be 0, never can be changed
		RightUpLeg,
		RightLeg,
		RightFoot,
		LeftUpLeg,
		LeftLeg,
		LeftFoot,
		Spine,
		Spine1,
		Spine2,
		Spine3,
		Neck,
		Head,
		RightShoulder,
		RightArm,
		RightForeArm,
		RightHand,
		RightHandThumb1,
		RightHandThumb2,
		RightHandThumb3,
		RightInHandIndex,
		RightHandIndex1,
		RightHandIndex2,
		RightHandIndex3,
		RightInHandMiddle,
		RightHandMiddle1,
		RightHandMiddle2,
		RightHandMiddle3,
		RightInHandRing,
		RightHandRing1,
		RightHandRing2,
		RightHandRing3,
		RightInHandPinky,
		RightHandPinky1,
		RightHandPinky2,
		RightHandPinky3,
		LeftShoulder,
		LeftArm,
		LeftForeArm,
		LeftHand,
		LeftHandThumb1,
		LeftHandThumb2,
		LeftHandThumb3,
		LeftInHandIndex,
		LeftHandIndex1,
		LeftHandIndex2,
		LeftHandIndex3,
		LeftInHandMiddle,
		LeftHandMiddle1,
		LeftHandMiddle2,
		LeftHandMiddle3,
		LeftInHandRing,
		LeftHandRing1,
		LeftHandRing2,
		LeftHandRing3,
		LeftInHandPinky,
		LeftHandPinky1,
		LeftHandPinky2,
		LeftHandPinky3,
		Invalid,
	};
}

#define PNBONE_NUM EPNBones::Invalid