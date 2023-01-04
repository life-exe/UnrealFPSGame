// FPS game copyright

using UnrealBuildTool;
using System.Collections.Generic;

public class FPSClientTarget : TargetRules
{
    public FPSClientTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Client;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "FPS" });
    }
}
