// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LoadingScreenSystemPlugin.h"
#include "ILoadingScreenSystemPlugin.h"

ULoadingScreenSystemPlugin::ULoadingScreenSystemPlugin(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float ULoadingScreenSystemPlugin::LSS_Plugin_GetAsyncLoadPercentage(FName PackageName)
{
	return GetAsyncLoadPercentage(PackageName);
}


