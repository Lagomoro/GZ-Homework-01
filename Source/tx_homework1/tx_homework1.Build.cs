// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class tx_homework1 : ModuleRules
{
	public tx_homework1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
