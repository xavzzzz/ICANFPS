// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ICANFPSTarget : TargetRules
{
	public ICANFPSTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		ExtraModuleNames.Add("ICANFPS");
	}
}