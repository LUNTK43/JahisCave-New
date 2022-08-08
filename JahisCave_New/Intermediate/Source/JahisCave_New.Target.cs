using UnrealBuildTool;

public class JahisCave_NewTarget : TargetRules
{
	public JahisCave_NewTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("JahisCave_New");
	}
}
