// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ICANFPSEditorTarget : TargetRules
{
	public ICANFPSEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		ExtraModuleNames.Add("ICANFPS");
	}
}