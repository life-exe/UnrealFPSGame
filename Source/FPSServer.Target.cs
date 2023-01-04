// FPS game copyright

using UnrealBuildTool;
using System.Collections.Generic;

public class FPSServerTarget : TargetRules
{
    public FPSServerTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Server;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "FPS" });
    }
}
