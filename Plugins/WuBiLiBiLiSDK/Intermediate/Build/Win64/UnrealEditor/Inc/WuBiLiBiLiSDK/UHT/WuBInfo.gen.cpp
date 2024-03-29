// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WuBiLiBiLiSDK/Public/WuBInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWuBInfo() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WuBiLiBiLiSDK();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FComboInfo();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FDanMu();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FGift();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FGuard();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FLike();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FSuperChat();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FSuperChatDelData();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FUserInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DanMu;
class UScriptStruct* FDanMu::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DanMu.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DanMu.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDanMu, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("DanMu"));
	}
	return Z_Registration_Info_UScriptStruct_DanMu.OuterSingleton;
}
template<> WUBILIBILISDK_API UScriptStruct* StaticStruct<FDanMu>()
{
	return FDanMu::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDanMu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uid_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uface_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_room_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_room_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guard_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_guard_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_wearing_status_MetaData[];
#endif
		static void NewProp_fans_medal_wearing_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_fans_medal_wearing_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fans_medal_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fans_medal_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_emoji_img_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_emoji_img_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dm_type_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_dm_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nUENUM(BlueprintType)\nenum EErrorType {\n\n};\n*/" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UENUM(BlueprintType)\nenum EErrorType {\n\n};" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FDanMu_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDanMu>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uname_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7\xe6\x98\xb5\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe6\x98\xb5\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uname = { "uname", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, uname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uname_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uid_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7UID\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7UID" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uid_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uface_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uface = { "uface", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, uface), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uface_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\xb9\xe5\xb9\x95\xe5\x8f\x91\xe9\x80\x81\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xb9\xe5\xb9\x95\xe5\x8f\x91\xe9\x80\x81\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_room_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\xb9\xe5\xb9\x95\xe6\x8e\xa5\xe6\x94\xb6\xe7\x9a\x84\xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xb9\xe5\xb9\x95\xe6\x8e\xa5\xe6\x94\xb6\xe7\x9a\x84\xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_room_id = { "room_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, room_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_room_id_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_room_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\xb9\xe5\xb9\x95\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xb9\xe5\xb9\x95\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, msg), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg_id = { "msg_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, msg_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg_id_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_guard_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_guard_level = { "guard_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, guard_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_guard_level_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_guard_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_wearing_status_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xa9\xe6\x88\xb4\xe7\x9a\x84\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xa9\xe6\x88\xb4\xe7\x9a\x84\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_wearing_status_SetBit(void* Obj)
	{
		((FDanMu*)Obj)->fans_medal_wearing_status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_wearing_status = { "fans_medal_wearing_status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDanMu), &Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_wearing_status_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_wearing_status_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_wearing_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_name_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_name = { "fans_medal_name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, fans_medal_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_name_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_level = { "fans_medal_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, fans_medal_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_level_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_emoji_img_url_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\xa8\xe6\x83\x85\xe5\x8c\x85\xe5\x9b\xbe\xe7\x89\x87\xe5\x9c\xb0\xe5\x9d\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\xa8\xe6\x83\x85\xe5\x8c\x85\xe5\x9b\xbe\xe7\x89\x87\xe5\x9c\xb0\xe5\x9d\x80" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_emoji_img_url = { "emoji_img_url", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, emoji_img_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_emoji_img_url_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_emoji_img_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_dm_type_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\xb9\xe5\xb9\x95\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x9a""0-\xe6\x99\xae\xe9\x80\x9a\xe5\xbc\xb9\xe5\xb9\x95\xef\xbc\x9b""1-\xe8\xa1\xa8\xe6\x83\x85\xe5\x8c\x85\xe5\xbc\xb9\xe5\xb9\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xb9\xe5\xb9\x95\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x9a""0-\xe6\x99\xae\xe9\x80\x9a\xe5\xbc\xb9\xe5\xb9\x95\xef\xbc\x9b""1-\xe8\xa1\xa8\xe6\x83\x85\xe5\x8c\x85\xe5\xbc\xb9\xe5\xb9\x95" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_dm_type = { "dm_type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDanMu, dm_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_dm_type_MetaData), Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_dm_type_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDanMu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_uface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_room_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_msg_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_guard_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_wearing_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_fans_medal_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_emoji_img_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDanMu_Statics::NewProp_dm_type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDanMu_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
		nullptr,
		&NewStructOps,
		"DanMu",
		Z_Construct_UScriptStruct_FDanMu_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::PropPointers),
		sizeof(FDanMu),
		alignof(FDanMu),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDanMu_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDanMu_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDanMu()
	{
		if (!Z_Registration_Info_UScriptStruct_DanMu.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DanMu.InnerSingleton, Z_Construct_UScriptStruct_FDanMu_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DanMu.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserInfo;
class UScriptStruct* FUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserInfo, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("UserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UserInfo.OuterSingleton;
}
template<> WUBILIBILISDK_API UScriptStruct* StaticStruct<FUserInfo>()
{
	return FUserInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uid_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uface_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uid_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xb6\xe7\xa4\xbc\xe4\xb8\xbb\xe6\x92\xaduid\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xb6\xe7\xa4\xbc\xe4\xb8\xbb\xe6\x92\xaduid" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uid_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uname_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xb6\xe7\xa4\xbc\xe4\xb8\xbb\xe6\x92\xad\xe6\x98\xb5\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xb6\xe7\xa4\xbc\xe4\xb8\xbb\xe6\x92\xad\xe6\x98\xb5\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uname = { "uname", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, uname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uname_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uface_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xb6\xe7\xa4\xbc\xe4\xb8\xbb\xe6\x92\xad\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xb6\xe7\xa4\xbc\xe4\xb8\xbb\xe6\x92\xad\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uface = { "uface", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, uface), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uface_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uface_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_uface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
		nullptr,
		&NewStructOps,
		"UserInfo",
		Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers),
		sizeof(FUserInfo),
		alignof(FUserInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUserInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UserInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserInfo.InnerSingleton, Z_Construct_UScriptStruct_FUserInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboInfo;
class UScriptStruct* FComboInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboInfo, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("ComboInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ComboInfo.OuterSingleton;
}
template<> WUBILIBILISDK_API UScriptStruct* StaticStruct<FComboInfo>()
{
	return FComboInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combo_base_num_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_combo_base_num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combo_count_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_combo_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combo_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_combo_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combo_timeout_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_combo_timeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_base_num_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xaf\x8f\xe6\xac\xa1\xe8\xbf\x9e\xe5\x87\xbb\xe8\xb5\xa0\xe9\x80\x81\xe7\x9a\x84\xe9\x81\x93\xe5\x85\xb7\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x8f\xe6\xac\xa1\xe8\xbf\x9e\xe5\x87\xbb\xe8\xb5\xa0\xe9\x80\x81\xe7\x9a\x84\xe9\x81\x93\xe5\x85\xb7\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_base_num = { "combo_base_num", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboInfo, combo_base_num), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_base_num_MetaData), Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_base_num_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_count_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbf\x9e\xe5\x87\xbb\xe6\xac\xa1\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe5\x87\xbb\xe6\xac\xa1\xe6\x95\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_count = { "combo_count", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboInfo, combo_count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_count_MetaData), Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_count_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbf\x9e\xe5\x87\xbbid\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe5\x87\xbbid" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_id = { "combo_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboInfo, combo_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_id_MetaData), Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_timeout_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbf\x9e\xe5\x87\xbb\xe6\x9c\x89\xe6\x95\x88\xe6\x9c\x9f\xe7\xa7\x92\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe5\x87\xbb\xe6\x9c\x89\xe6\x95\x88\xe6\x9c\x9f\xe7\xa7\x92" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_timeout = { "combo_timeout", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboInfo, combo_timeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_timeout_MetaData), Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_timeout_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_base_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboInfo_Statics::NewProp_combo_timeout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
		nullptr,
		&NewStructOps,
		"ComboInfo",
		Z_Construct_UScriptStruct_FComboInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboInfo_Statics::PropPointers),
		sizeof(FComboInfo),
		alignof(FComboInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboInfo.InnerSingleton, Z_Construct_UScriptStruct_FComboInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Gift;
class UScriptStruct* FGift::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Gift.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Gift.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGift, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("Gift"));
	}
	return Z_Registration_Info_UScriptStruct_Gift.OuterSingleton;
}
template<> WUBILIBILISDK_API UScriptStruct* StaticStruct<FGift>()
{
	return FGift::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGift_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_room_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_room_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uid_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uface_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gift_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_gift_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gift_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_gift_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gift_num_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_gift_num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_price_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paid_MetaData[];
#endif
		static void NewProp_paid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_paid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fans_medal_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fans_medal_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_wearing_status_MetaData[];
#endif
		static void NewProp_fans_medal_wearing_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_fans_medal_wearing_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guard_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_guard_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_anchor_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_anchor_info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gift_icon_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_gift_icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combo_gift_MetaData[];
#endif
		static void NewProp_combo_gift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_combo_gift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combo_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_combo_info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa4\xbc\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa4\xbc\xe7\x89\xa9" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FGift_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGift>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_room_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x88\xbf\xe9\x97\xb4\xe5\x8f\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\xbf\xe9\x97\xb4\xe5\x8f\xb7" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_room_id = { "room_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, room_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_room_id_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_room_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_uid_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x80\x81\xe7\xa4\xbc\xe7\x94\xa8\xe6\x88\xb7UID\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x81\xe7\xa4\xbc\xe7\x94\xa8\xe6\x88\xb7UID" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_uid_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_uname_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x81\xe7\xa4\xbc\xe7\x94\xa8\xe6\x88\xb7\xe6\x98\xb5\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x81\xe7\xa4\xbc\xe7\x94\xa8\xe6\x88\xb7\xe6\x98\xb5\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_uname = { "uname", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, uname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_uname_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_uname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_uface_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x80\x81\xe7\xa4\xbc\xe7\x94\xa8\xe6\x88\xb7\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x81\xe7\xa4\xbc\xe7\x94\xa8\xe6\x88\xb7\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_uface = { "uface", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, uface), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_uface_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_uface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x81\x93\xe5\x85\xb7id(\xe7\x9b\xb2\xe7\x9b\x92:\xe7\x88\x86\xe5\x87\xba\xe9\x81\x93\xe5\x85\xb7id)\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7id(\xe7\x9b\xb2\xe7\x9b\x92:\xe7\x88\x86\xe5\x87\xba\xe9\x81\x93\xe5\x85\xb7id)" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_id = { "gift_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, gift_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_id_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_name_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x81\x93\xe5\x85\xb7\xe5\x90\x8d(\xe7\x9b\xb2\xe7\x9b\x92:\xe7\x88\x86\xe5\x87\xba\xe9\x81\x93\xe5\x85\xb7\xe5\x90\x8d)\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7\xe5\x90\x8d(\xe7\x9b\xb2\xe7\x9b\x92:\xe7\x88\x86\xe5\x87\xba\xe9\x81\x93\xe5\x85\xb7\xe5\x90\x8d)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_name = { "gift_name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, gift_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_name_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_num_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb5\xa0\xe9\x80\x81\xe9\x81\x93\xe5\x85\xb7\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\xa0\xe9\x80\x81\xe9\x81\x93\xe5\x85\xb7\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_num = { "gift_num", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, gift_num), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_num_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_num_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_price_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xaf\xe4\xbb\x98\xe9\x87\x91\xe9\xa2\x9d(1000 = 1\xe5\x85\x83 = 10\xe7\x94\xb5\xe6\xb1\xa0),\xe7\x9b\xb2\xe7\x9b\x92:\xe7\x88\x86\xe5\x87\xba\xe9\x81\x93\xe5\x85\xb7\xe7\x9a\x84\xe4\xbb\xb7\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xaf\xe4\xbb\x98\xe9\x87\x91\xe9\xa2\x9d(1000 = 1\xe5\x85\x83 = 10\xe7\x94\xb5\xe6\xb1\xa0),\xe7\x9b\xb2\xe7\x9b\x92:\xe7\x88\x86\xe5\x87\xba\xe9\x81\x93\xe5\x85\xb7\xe7\x9a\x84\xe4\xbb\xb7\xe5\x80\xbc" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, price), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_price_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_price_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_paid_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xbb\x98\xe8\xb4\xb9\xe9\x81\x93\xe5\x85\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xbb\x98\xe8\xb4\xb9\xe9\x81\x93\xe5\x85\xb7" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGift_Statics::NewProp_paid_SetBit(void* Obj)
	{
		((FGift*)Obj)->paid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_paid = { "paid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGift), &Z_Construct_UScriptStruct_FGift_Statics::NewProp_paid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_paid_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_paid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x9e\xe9\x99\x85\xe9\x80\x81\xe7\xa4\xbc\xe4\xba\xba\xe7\x9a\x84\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9e\xe9\x99\x85\xe9\x80\x81\xe7\xa4\xbc\xe4\xba\xba\xe7\x9a\x84\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_level = { "fans_medal_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, fans_medal_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_level_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_name_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_name = { "fans_medal_name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, fans_medal_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_name_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_wearing_status_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xa9\xe6\x88\xb4\xe7\x9a\x84\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xa9\xe6\x88\xb4\xe7\x9a\x84\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_wearing_status_SetBit(void* Obj)
	{
		((FGift*)Obj)->fans_medal_wearing_status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_wearing_status = { "fans_medal_wearing_status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGift), &Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_wearing_status_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_wearing_status_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_wearing_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_guard_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_guard_level = { "guard_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, guard_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_guard_level_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_guard_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xb6\xe7\xa4\xbc\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xb6\xe7\xa4\xbc\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_anchor_info_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xbb\xe6\x92\xad\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe6\x92\xad\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_anchor_info = { "anchor_info", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, anchor_info), Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_anchor_info_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_anchor_info_MetaData) }; // 67028743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_msg_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_msg_id = { "msg_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, msg_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_msg_id_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_msg_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_icon_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x81\x93\xe5\x85\xb7icon\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x93\xe5\x85\xb7icon" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_icon = { "gift_icon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, gift_icon), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_icon_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_icon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_gift_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf""combo\xe9\x81\x93\xe5\x85\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf""combo\xe9\x81\x93\xe5\x85\xb7" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_gift_SetBit(void* Obj)
	{
		((FGift*)Obj)->combo_gift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_gift = { "combo_gift", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGift), &Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_gift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_gift_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_gift_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_info_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// combo_info\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "combo_info\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_info = { "combo_info", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGift, combo_info), Z_Construct_UScriptStruct_FComboInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_info_MetaData), Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_info_MetaData) }; // 1398450980
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGift_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_room_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_uname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_uface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_paid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_fans_medal_wearing_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_guard_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_anchor_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_msg_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_gift_icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_gift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGift_Statics::NewProp_combo_info,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGift_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
		nullptr,
		&NewStructOps,
		"Gift",
		Z_Construct_UScriptStruct_FGift_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::PropPointers),
		sizeof(FGift),
		alignof(FGift),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGift_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGift_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGift()
	{
		if (!Z_Registration_Info_UScriptStruct_Gift.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Gift.InnerSingleton, Z_Construct_UScriptStruct_FGift_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Gift.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SuperChat;
class UScriptStruct* FSuperChat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SuperChat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SuperChat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuperChat, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("SuperChat"));
	}
	return Z_Registration_Info_UScriptStruct_SuperChat.OuterSingleton;
}
template<> WUBILIBILISDK_API UScriptStruct* StaticStruct<FSuperChat>()
{
	return FSuperChat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSuperChat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_room_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_room_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uid_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uface_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_message_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rmb_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_rmb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_time_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_start_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_end_time_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_end_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guard_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_guard_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fans_medal_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fans_medal_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_wearing_status_MetaData[];
#endif
		static void NewProp_fans_medal_wearing_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_fans_medal_wearing_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x98\xe8\xb4\xb9\xe7\x95\x99\xe8\xa8\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x98\xe8\xb4\xb9\xe7\x95\x99\xe8\xa8\x80" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSuperChat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuperChat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_room_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4id\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4id" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_room_id = { "room_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, room_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_room_id_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_room_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uid_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xad\xe4\xb9\xb0\xe7\x94\xa8\xe6\x88\xb7UID\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xad\xe4\xb9\xb0\xe7\x94\xa8\xe6\x88\xb7UID" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uid_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uname_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xad\xe4\xb9\xb0\xe7\x9a\x84\xe7\x94\xa8\xe6\x88\xb7\xe6\x98\xb5\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xad\xe4\xb9\xb0\xe7\x9a\x84\xe7\x94\xa8\xe6\x88\xb7\xe6\x98\xb5\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uname = { "uname", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, uname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uname_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uface_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb4\xad\xe4\xb9\xb0\xe7\x94\xa8\xe6\x88\xb7\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\xad\xe4\xb9\xb0\xe7\x94\xa8\xe6\x88\xb7\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uface = { "uface", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, uface), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uface_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x95\x99\xe8\xa8\x80id(\xe9\xa3\x8e\xe6\x8e\xa7\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\x8b\xe6\x92\xa4\xe5\x9b\x9e\xe7\x95\x99\xe8\xa8\x80\xe9\x9c\x80\xe8\xa6\x81)\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\x99\xe8\xa8\x80id(\xe9\xa3\x8e\xe6\x8e\xa7\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\x8b\xe6\x92\xa4\xe5\x9b\x9e\xe7\x95\x99\xe8\xa8\x80\xe9\x9c\x80\xe8\xa6\x81)" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message_id = { "message_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, message_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message_id_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x95\x99\xe8\xa8\x80\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\x99\xe8\xa8\x80\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_rmb_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xaf\xe4\xbb\x98\xe9\x87\x91\xe9\xa2\x9d(\xe5\x85\x83)\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xaf\xe4\xbb\x98\xe9\x87\x91\xe9\xa2\x9d(\xe5\x85\x83)" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_rmb = { "rmb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, rmb), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_rmb_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_rmb_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb5\xa0\xe9\x80\x81\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\xa0\xe9\x80\x81\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_start_time_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\x9f\xe6\x95\x88\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x95\x88\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_start_time = { "start_time", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, start_time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_start_time_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_start_time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_end_time_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\x9f\xe6\x95\x88\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\x9f\xe6\x95\x88\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_end_time = { "end_time", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, end_time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_end_time_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_end_time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_guard_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_guard_level = { "guard_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, guard_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_guard_level_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_guard_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_level = { "fans_medal_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, fans_medal_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_level_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_name_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_name = { "fans_medal_name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, fans_medal_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_name_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_wearing_status_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xa9\xe6\x88\xb4\xe7\x9a\x84\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xa9\xe6\x88\xb4\xe7\x9a\x84\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_wearing_status_SetBit(void* Obj)
	{
		((FSuperChat*)Obj)->fans_medal_wearing_status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_wearing_status = { "fans_medal_wearing_status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSuperChat), &Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_wearing_status_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_wearing_status_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_wearing_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_msg_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_msg_id = { "msg_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChat, msg_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_msg_id_MetaData), Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_msg_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSuperChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_room_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_uface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_rmb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_start_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_end_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_guard_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_fans_medal_wearing_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChat_Statics::NewProp_msg_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuperChat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
		nullptr,
		&NewStructOps,
		"SuperChat",
		Z_Construct_UScriptStruct_FSuperChat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::PropPointers),
		sizeof(FSuperChat),
		alignof(FSuperChat),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSuperChat_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChat_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSuperChat()
	{
		if (!Z_Registration_Info_UScriptStruct_SuperChat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SuperChat.InnerSingleton, Z_Construct_UScriptStruct_FSuperChat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SuperChat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SuperChatDelData;
class UScriptStruct* FSuperChatDelData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SuperChatDelData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SuperChatDelData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuperChatDelData, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("SuperChatDelData"));
	}
	return Z_Registration_Info_UScriptStruct_SuperChatDelData.OuterSingleton;
}
template<> WUBILIBILISDK_API UScriptStruct* StaticStruct<FSuperChatDelData>()
{
	return FSuperChatDelData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSuperChatDelData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_room_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_room_id;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_message_ids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_ids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_message_ids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChatDelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x98\xe8\xb4\xb9\xe7\x95\x99\xe8\xa8\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x98\xe8\xb4\xb9\xe7\x95\x99\xe8\xa8\x80" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuperChatDelData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_room_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4id\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4id" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_room_id = { "room_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChatDelData, room_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_room_id_MetaData), Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_room_id_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_message_ids_Inner = { "message_ids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_message_ids_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x95\x99\xe8\xa8\x80id(\xe9\xa3\x8e\xe6\x8e\xa7\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\x8b\xe6\x92\xa4\xe5\x9b\x9e\xe7\x95\x99\xe8\xa8\x80\xe9\x9c\x80\xe8\xa6\x81)\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x95\x99\xe8\xa8\x80id(\xe9\xa3\x8e\xe6\x8e\xa7\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\x8b\xe6\x92\xa4\xe5\x9b\x9e\xe7\x95\x99\xe8\xa8\x80\xe9\x9c\x80\xe8\xa6\x81)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_message_ids = { "message_ids", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChatDelData, message_ids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_message_ids_MetaData), Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_message_ids_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_msg_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_msg_id = { "msg_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuperChatDelData, msg_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_msg_id_MetaData), Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_msg_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSuperChatDelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_room_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_message_ids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_message_ids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewProp_msg_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuperChatDelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
		nullptr,
		&NewStructOps,
		"SuperChatDelData",
		Z_Construct_UScriptStruct_FSuperChatDelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChatDelData_Statics::PropPointers),
		sizeof(FSuperChatDelData),
		alignof(FSuperChatDelData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChatDelData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSuperChatDelData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuperChatDelData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSuperChatDelData()
	{
		if (!Z_Registration_Info_UScriptStruct_SuperChatDelData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SuperChatDelData.InnerSingleton, Z_Construct_UScriptStruct_FSuperChatDelData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SuperChatDelData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Guard;
class UScriptStruct* FGuard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Guard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Guard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuard, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("Guard"));
	}
	return Z_Registration_Info_UScriptStruct_Guard.OuterSingleton;
}
template<> WUBILIBILISDK_API UScriptStruct* StaticStruct<FGuard>()
{
	return FGuard::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGuard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_user_info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guard_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_guard_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guard_num_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_guard_num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guard_unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_guard_unit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fans_medal_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fans_medal_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_wearing_status_MetaData[];
#endif
		static void NewProp_fans_medal_wearing_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_fans_medal_wearing_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_room_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_room_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FGuard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuard>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_user_info_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe6\x88\xb7\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_user_info = { "user_info", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, user_info), Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_user_info_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_user_info_MetaData) }; // 67028743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_level = { "guard_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, guard_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_level_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_num_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_num = { "guard_num", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, guard_num), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_num_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_num_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_unit_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe5\x8d\x95\xe4\xbd\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\xe5\x8d\x95\xe4\xbd\x8d" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_unit = { "guard_unit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, guard_unit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_unit_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_unit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe7\xad\x89\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe7\xad\x89\xe7\xba\xa7" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_level = { "fans_medal_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, fans_medal_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_level_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_name_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_name = { "fans_medal_name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, fans_medal_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_name_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_wearing_status_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xa9\xe6\x88\xb4\xe7\x9a\x84\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xa9\xe6\x88\xb4\xe7\x9a\x84\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_wearing_status_SetBit(void* Obj)
	{
		((FGuard*)Obj)->fans_medal_wearing_status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_wearing_status = { "fans_medal_wearing_status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGuard), &Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_wearing_status_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_wearing_status_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_wearing_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_room_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x88\xbf\xe9\x97\xb4\xe5\x8f\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\xbf\xe9\x97\xb4\xe5\x8f\xb7" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_room_id = { "room_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, room_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_room_id_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_room_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_msg_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb6\x88\xe6\x81\xaf\xe5\x94\xaf\xe4\xb8\x80id" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_msg_id = { "msg_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, msg_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_msg_id_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_msg_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuard_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\x8a\xe8\x88\xb0\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8a\xe8\x88\xb0\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGuard_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGuard, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FGuard_Statics::NewProp_timestamp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_user_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_guard_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_fans_medal_wearing_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_room_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_msg_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuard_Statics::NewProp_timestamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
		nullptr,
		&NewStructOps,
		"Guard",
		Z_Construct_UScriptStruct_FGuard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::PropPointers),
		sizeof(FGuard),
		alignof(FGuard),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGuard_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuard_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGuard()
	{
		if (!Z_Registration_Info_UScriptStruct_Guard.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Guard.InnerSingleton, Z_Construct_UScriptStruct_FGuard_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Guard.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Like;
class UScriptStruct* FLike::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Like.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Like.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLike, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("Like"));
	}
	return Z_Registration_Info_UScriptStruct_Like.OuterSingleton;
}
template<> WUBILIBILISDK_API UScriptStruct* StaticStruct<FLike>()
{
	return FLike::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLike_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uid_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uface_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_room_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_room_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_like_text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_like_text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_wearing_status_MetaData[];
#endif
		static void NewProp_fans_medal_wearing_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_fans_medal_wearing_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fans_medal_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fans_medal_level_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fans_medal_level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLike_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLike>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_uname_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xa8\xe6\x88\xb7\xe6\x98\xb5\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe6\x98\xb5\xe7\xa7\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_uname = { "uname", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLike, uname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_uname_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_uname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_uid_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xa8\xe6\x88\xb7UID\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7UID" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLike, uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_uid_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_uface_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xa8\xe6\x88\xb7\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe6\x88\xb7\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_uface = { "uface", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLike, uface), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_uface_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_uface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe7\xa7\x92\xe7\xba\xa7\xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLike, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_room_id_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x91\xe7\x94\x9f\xe7\x9a\x84\xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe7\x94\x9f\xe7\x9a\x84\xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_room_id = { "room_id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLike, room_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_room_id_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_room_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_like_text_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x82\xb9\xe8\xb5\x9e\xe6\x96\x87\xe6\xa1\x88( \xe2\x80\x9cxxx\xe7\x82\xb9\xe8\xb5\x9e\xe4\xba\x86\xe2\x80\x9d)\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x82\xb9\xe8\xb5\x9e\xe6\x96\x87\xe6\xa1\x88( \xe2\x80\x9cxxx\xe7\x82\xb9\xe8\xb5\x9e\xe4\xba\x86\xe2\x80\x9d)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_like_text = { "like_text", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLike, like_text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_like_text_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_like_text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_wearing_status_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xa5\xe6\x88\xbf\xe9\x97\xb4\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe6\x83\x85\xe5\x86\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe6\x88\xbf\xe9\x97\xb4\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbd\xa9\xe6\x88\xb4\xe6\x83\x85\xe5\x86\xb5" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_wearing_status_SetBit(void* Obj)
	{
		((FLike*)Obj)->fans_medal_wearing_status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_wearing_status = { "fans_medal_wearing_status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLike), &Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_wearing_status_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_wearing_status_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_wearing_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_name_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb2\x89\xe4\xb8\x9d\xe5\x8b\x8b\xe7\xab\xa0\xe5\x90\x8d" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_name = { "fans_medal_name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLike, fans_medal_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_name_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_level_MetaData[] = {
		{ "Category", "Wubilibili" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe6\x88\xbf\xe9\x97\xb4\xe5\x8b\x8b\xe7\xab\xa0\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_level = { "fans_medal_level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLike, fans_medal_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_level_MetaData), Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_level_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLike_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_uname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_uface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_room_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_like_text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_wearing_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLike_Statics::NewProp_fans_medal_level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLike_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
		nullptr,
		&NewStructOps,
		"Like",
		Z_Construct_UScriptStruct_FLike_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::PropPointers),
		sizeof(FLike),
		alignof(FLike),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLike_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLike_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLike()
	{
		if (!Z_Registration_Info_UScriptStruct_Like.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Like.InnerSingleton, Z_Construct_UScriptStruct_FLike_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Like.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBInfo_h_Statics::ScriptStructInfo[] = {
		{ FDanMu::StaticStruct, Z_Construct_UScriptStruct_FDanMu_Statics::NewStructOps, TEXT("DanMu"), &Z_Registration_Info_UScriptStruct_DanMu, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDanMu), 3482871436U) },
		{ FUserInfo::StaticStruct, Z_Construct_UScriptStruct_FUserInfo_Statics::NewStructOps, TEXT("UserInfo"), &Z_Registration_Info_UScriptStruct_UserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserInfo), 67028743U) },
		{ FComboInfo::StaticStruct, Z_Construct_UScriptStruct_FComboInfo_Statics::NewStructOps, TEXT("ComboInfo"), &Z_Registration_Info_UScriptStruct_ComboInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboInfo), 1398450980U) },
		{ FGift::StaticStruct, Z_Construct_UScriptStruct_FGift_Statics::NewStructOps, TEXT("Gift"), &Z_Registration_Info_UScriptStruct_Gift, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGift), 523219222U) },
		{ FSuperChat::StaticStruct, Z_Construct_UScriptStruct_FSuperChat_Statics::NewStructOps, TEXT("SuperChat"), &Z_Registration_Info_UScriptStruct_SuperChat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSuperChat), 2947039787U) },
		{ FSuperChatDelData::StaticStruct, Z_Construct_UScriptStruct_FSuperChatDelData_Statics::NewStructOps, TEXT("SuperChatDelData"), &Z_Registration_Info_UScriptStruct_SuperChatDelData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSuperChatDelData), 728445596U) },
		{ FGuard::StaticStruct, Z_Construct_UScriptStruct_FGuard_Statics::NewStructOps, TEXT("Guard"), &Z_Registration_Info_UScriptStruct_Guard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGuard), 2914258861U) },
		{ FLike::StaticStruct, Z_Construct_UScriptStruct_FLike_Statics::NewStructOps, TEXT("Like"), &Z_Registration_Info_UScriptStruct_Like, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLike), 79982896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBInfo_h_2818812029(TEXT("/Script/WuBiLiBiLiSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
