// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WuBiLiBiLiSDK : ModuleRules
{
	public WuBiLiBiLiSDK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"HTTP", //�����Դ�HTTPģ��
				"WebSockets",
				"Json", //�����Ҫ��ӣ���Ҫ�õ����ṩ��FJsonObject������������Դ��ġ�����Ҫ���ò��
				"JsonUtilities",//�����Ҫ�����Ҫ�õ����ṩ��FJsonObjectWrapper��ʹ������������
				//"LowEntryExtendedStandardLibrary",
				"zlib",
                "OpenSSL",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
