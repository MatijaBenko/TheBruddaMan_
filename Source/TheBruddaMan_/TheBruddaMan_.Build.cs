// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TheBruddaMan_ : ModuleRules
{
	public TheBruddaMan_(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
