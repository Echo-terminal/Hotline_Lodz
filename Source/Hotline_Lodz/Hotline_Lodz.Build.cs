// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Hotline_Lodz : ModuleRules
{
	public Hotline_Lodz(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
