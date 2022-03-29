// Fill out your copyright notice in the Description page of Project Settings.


#include "MathExtentionLibrary.h"

FQuat UMathExtentionLibrary::QuaternionFromTwoNormals(const FVector& Normal1, const FVector& Normal2)
{
	return FQuat::FindBetweenNormals(Normal1, Normal2).GetNormalized();
}

