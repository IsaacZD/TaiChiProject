// Copyright 2015 Smartisan Technology Co., Ltd. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class PerceptionNeuronRuntime : ModuleRules
	{
		public PerceptionNeuronRuntime(TargetInfo Target)
		{
            Definitions.Add("WITH_AVATARID=0");

            // List of all paths to include files that are exposed to other modules.
			PublicIncludePaths.AddRange(
				new string[] {
                    "PerceptionNeuronRuntime/Public",
					// ... add public include paths required here ...
				}
				);

            // List of all paths to this module's internal include files, not exposed to other modules
			PrivateIncludePaths.AddRange(
				new string[] {
					"PerceptionNeuronRuntime/Private",
					// ... add other private include paths required here ...
				}
				);

            // List of modules with header files that our module's public headers needs access to, but we don't need to "import" or link against.
            PublicIncludePathModuleNames.AddRange(
                new string[] {
                }
                );

            // List of modules with header files that our module's private code files needs access to, but we don't need to "import" or link against.
            PrivateIncludePathModuleNames.AddRange(
                new string[] {
                    "Launch",
                }
                );

            // List of public dependency module names. These are modules that are required by our public source files.
			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					// ... add other public dependencies that you statically link with here ...
				}
				);

            // List of private dependency module names. These are modules that our private code depends on but nothing in our public
            // include files depend on.
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
                    "Core",
					"CoreUObject",
					"Engine",
					"Networking",
					"Sockets",
                    "Projects",
					// ... add private dependencies that you statically link with here ...
				}
				);

            // Addition modules this module may require at run-time.
			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
				);
		}
	}
}