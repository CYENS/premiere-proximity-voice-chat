// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class proximity_voice_chat : ModuleRules
{
	public proximity_voice_chat(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
