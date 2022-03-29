// Copyright 2022 Wuguyannian. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathExtentionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CONTROLRIGEXTENTION_API UMathExtentionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/**
	* Makes a quaternion from two normals, representing the shortest rotation between the two vectors.
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "From Two Normals"))
	static FQuat QuaternionFromTwoNormals(const FVector& Normal1, const FVector& Normal2);
};
