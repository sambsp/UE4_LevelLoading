// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SimpleLoading : ModuleRules
{
	public SimpleLoading(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
