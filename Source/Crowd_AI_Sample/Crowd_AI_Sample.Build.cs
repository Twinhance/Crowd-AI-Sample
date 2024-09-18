// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Crowd_AI_Sample : ModuleRules
{
	public Crowd_AI_Sample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
