// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/Lobby/LobbyGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGameState() {}
// Cross Module References
	JUNE13_API UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo();
	UPackage* Z_Construct_UPackage__Script_June13();
	JUNE13_API UClass* Z_Construct_UClass_ALobbyPlayerState_NoRegister();
	JUNE13_API UScriptStruct* Z_Construct_UScriptStruct_FMapInfo();
	JUNE13_API UScriptStruct* Z_Construct_UScriptStruct_FGameModeInfo();
	JUNE13_API UClass* Z_Construct_UClass_ALobbyGameState_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ALobbyGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameState_GetTeamInfo();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap();
// End Cross Module References
class UScriptStruct* FTeamInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JUNE13_API uint32 Get_Z_Construct_UScriptStruct_FTeamInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeamInfo, Z_Construct_UPackage__Script_June13(), TEXT("TeamInfo"), sizeof(FTeamInfo), Get_Z_Construct_UScriptStruct_FTeamInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTeamInfo(FTeamInfo::StaticStruct, TEXT("/Script/June13"), TEXT("TeamInfo"), false, nullptr, nullptr);
static struct FScriptStruct_June13_StaticRegisterNativesFTeamInfo
{
	FScriptStruct_June13_StaticRegisterNativesFTeamInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TeamInfo")),new UScriptStruct::TCppStructOps<FTeamInfo>);
	}
} ScriptStruct_June13_StaticRegisterNativesFTeamInfo;
	struct Z_Construct_UScriptStruct_FTeamInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStates_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTeamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeamInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "TeamInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Int, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTeamInfo, TeamID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamSize_MetaData[] = {
		{ "Category", "TeamInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamSize = { UE4CodeGen_Private::EPropertyClass::Int, "TeamSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTeamInfo, TeamSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_PlayerStates_MetaData[] = {
		{ "Category", "TeamInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_PlayerStates = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTeamInfo, PlayerStates), METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_PlayerStates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_PlayerStates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_PlayerStates_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ALobbyPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_TeamSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_PlayerStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamInfo_Statics::NewProp_PlayerStates_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
		nullptr,
		&NewStructOps,
		"TeamInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTeamInfo),
		alignof(FTeamInfo),
		Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTeamInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTeamInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_June13();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TeamInfo"), sizeof(FTeamInfo), Get_Z_Construct_UScriptStruct_FTeamInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTeamInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTeamInfo_CRC() { return 1838526542U; }
class UScriptStruct* FMapInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JUNE13_API uint32 Get_Z_Construct_UScriptStruct_FMapInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapInfo, Z_Construct_UPackage__Script_June13(), TEXT("MapInfo"), sizeof(FMapInfo), Get_Z_Construct_UScriptStruct_FMapInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapInfo(FMapInfo::StaticStruct, TEXT("/Script/June13"), TEXT("MapInfo"), false, nullptr, nullptr);
static struct FScriptStruct_June13_StaticRegisterNativesFMapInfo
{
	FScriptStruct_June13_StaticRegisterNativesFMapInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MapInfo")),new UScriptStruct::TCppStructOps<FMapInfo>);
	}
} ScriptStruct_June13_StaticRegisterNativesFMapInfo;
	struct Z_Construct_UScriptStruct_FMapInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameModeInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ToolTip", "necessary for engine to replicate, require F prefix as required by Engine\nhttps:wiki.unrealengine.com/Structs,_USTRUCTS(),_They're_Awesome" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_GameModeInfo_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_GameModeInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "GameModeInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMapInfo, GameModeInfo), Z_Construct_UScriptStruct_FGameModeInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_GameModeInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_GameModeInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamSize_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamSize = { UE4CodeGen_Private::EPropertyClass::Int, "TeamSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMapInfo, TeamSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamCount_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamCount = { UE4CodeGen_Private::EPropertyClass::Int, "TeamCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMapInfo, TeamCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ToolTip", "Example\n              /Game/TestGame/TestMap" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL = { UE4CodeGen_Private::EPropertyClass::Str, "MapURL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMapInfo, MapURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ToolTip", "UPROPERTY for replication" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName = { UE4CodeGen_Private::EPropertyClass::Str, "MapName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMapInfo, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_GameModeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_TeamCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
		nullptr,
		&NewStructOps,
		"MapInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMapInfo),
		alignof(FMapInfo),
		Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_June13();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapInfo"), sizeof(FMapInfo), Get_Z_Construct_UScriptStruct_FMapInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapInfo_CRC() { return 1205828871U; }
class UScriptStruct* FGameModeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JUNE13_API uint32 Get_Z_Construct_UScriptStruct_FGameModeInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameModeInfo, Z_Construct_UPackage__Script_June13(), TEXT("GameModeInfo"), sizeof(FGameModeInfo), Get_Z_Construct_UScriptStruct_FGameModeInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameModeInfo(FGameModeInfo::StaticStruct, TEXT("/Script/June13"), TEXT("GameModeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_June13_StaticRegisterNativesFGameModeInfo
{
	FScriptStruct_June13_StaticRegisterNativesFGameModeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameModeInfo")),new UScriptStruct::TCppStructOps<FGameModeInfo>);
	}
} ScriptStruct_June13_StaticRegisterNativesFGameModeInfo;
	struct Z_Construct_UScriptStruct_FGameModeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameModeURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameModeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameModeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeURL_MetaData[] = {
		{ "Category", "GameModeInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ToolTip", "Example\n      /Game/TestGame/TestGameMode.TestGameMode_C" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeURL = { UE4CodeGen_Private::EPropertyClass::Str, "GameModeURL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameModeInfo, GameModeURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeName_MetaData[] = {
		{ "Category", "GameModeInfo" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ToolTip", "For reflection" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeName = { UE4CodeGen_Private::EPropertyClass::Str, "GameModeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameModeInfo, GameModeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameModeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameModeInfo_Statics::NewProp_GameModeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameModeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
		nullptr,
		&NewStructOps,
		"GameModeInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameModeInfo),
		alignof(FGameModeInfo),
		Z_Construct_UScriptStruct_FGameModeInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameModeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameModeInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_June13();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameModeInfo"), sizeof(FGameModeInfo), Get_Z_Construct_UScriptStruct_FGameModeInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameModeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameModeInfo_CRC() { return 841285401U; }
	static FName NAME_ALobbyGameState_OnRep_MapAvailableChanged = FName(TEXT("OnRep_MapAvailableChanged"));
	void ALobbyGameState::OnRep_MapAvailableChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyGameState_OnRep_MapAvailableChanged),NULL);
	}
	static FName NAME_ALobbyGameState_OnRep_MapSelectedChanged = FName(TEXT("OnRep_MapSelectedChanged"));
	void ALobbyGameState::OnRep_MapSelectedChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyGameState_OnRep_MapSelectedChanged),NULL);
	}
	static FName NAME_ALobbyGameState_OnRep_TeamInfoChanged = FName(TEXT("OnRep_TeamInfoChanged"));
	void ALobbyGameState::OnRep_TeamInfoChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyGameState_OnRep_TeamInfoChanged),NULL);
	}
	static FName NAME_ALobbyGameState_ServerAddPlayerStateToTeam = FName(TEXT("ServerAddPlayerStateToTeam"));
	void ALobbyGameState::ServerAddPlayerStateToTeam(ALobbyPlayerState* PlayerState, int32 TeamID)
	{
		LobbyGameState_eventServerAddPlayerStateToTeam_Parms Parms;
		Parms.PlayerState=PlayerState;
		Parms.TeamID=TeamID;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyGameState_ServerAddPlayerStateToTeam),&Parms);
	}
	static FName NAME_ALobbyGameState_ServerRemovePlayerStateFromTeam = FName(TEXT("ServerRemovePlayerStateFromTeam"));
	void ALobbyGameState::ServerRemovePlayerStateFromTeam(ALobbyPlayerState* PlayerState)
	{
		LobbyGameState_eventServerRemovePlayerStateFromTeam_Parms Parms;
		Parms.PlayerState=PlayerState;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyGameState_ServerRemovePlayerStateFromTeam),&Parms);
	}
	static FName NAME_ALobbyGameState_SetDefaultSelectedMap = FName(TEXT("SetDefaultSelectedMap"));
	void ALobbyGameState::SetDefaultSelectedMap()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyGameState_SetDefaultSelectedMap),NULL);
	}
	void ALobbyGameState::StaticRegisterNativesALobbyGameState()
	{
		UClass* Class = ALobbyGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentSelectedMap", &ALobbyGameState::execGetCurrentSelectedMap },
			{ "GetTeamInfo", &ALobbyGameState::execGetTeamInfo },
			{ "OnRep_MapAvailableChanged", &ALobbyGameState::execOnRep_MapAvailableChanged },
			{ "OnRep_MapSelectedChanged", &ALobbyGameState::execOnRep_MapSelectedChanged },
			{ "OnRep_TeamInfoChanged", &ALobbyGameState::execOnRep_TeamInfoChanged },
			{ "ServerAddPlayerStateToTeam", &ALobbyGameState::execServerAddPlayerStateToTeam },
			{ "ServerRemovePlayerStateFromTeam", &ALobbyGameState::execServerRemovePlayerStateFromTeam },
			{ "SetDefaultSelectedMap", &ALobbyGameState::execSetDefaultSelectedMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics
	{
		struct LobbyGameState_eventGetCurrentSelectedMap_Parms
		{
			FMapInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LobbyGameState_eventGetCurrentSelectedMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FMapInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameState, "GetCurrentSelectedMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LobbyGameState_eventGetCurrentSelectedMap_Parms), Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics
	{
		struct LobbyGameState_eventGetTeamInfo_Parms
		{
			TArray<FTeamInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LobbyGameState_eventGetTeamInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTeamInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameState, "GetTeamInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LobbyGameState_eventGetTeamInfo_Parms), Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameState_GetTeamInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameState_GetTeamInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameState, "OnRep_MapAvailableChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameState, "OnRep_MapSelectedChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameState, "OnRep_TeamInfoChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Int, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LobbyGameState_eventServerAddPlayerStateToTeam_Parms, TeamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::NewProp_PlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LobbyGameState_eventServerAddPlayerStateToTeam_Parms, PlayerState), Z_Construct_UClass_ALobbyPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameState, "ServerAddPlayerStateToTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(LobbyGameState_eventServerAddPlayerStateToTeam_Parms), Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::NewProp_PlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LobbyGameState_eventServerRemovePlayerStateFromTeam_Parms, PlayerState), Z_Construct_UClass_ALobbyPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameState, "ServerRemovePlayerStateFromTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(LobbyGameState_eventServerRemovePlayerStateFromTeam_Parms), Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ToolTip", "GameMode calls this after initing the GameState" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameState, "SetDefaultSelectedMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALobbyGameState_NoRegister()
	{
		return ALobbyGameState::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTeamInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTeamInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTeamInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentSelectedMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCurrentSelectedMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorTeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpectatorTeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapsAvailable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapsAvailable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapsAvailable_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyGameState_GetCurrentSelectedMap, "GetCurrentSelectedMap" }, // 3053780118
		{ &Z_Construct_UFunction_ALobbyGameState_GetTeamInfo, "GetTeamInfo" }, // 282159317
		{ &Z_Construct_UFunction_ALobbyGameState_OnRep_MapAvailableChanged, "OnRep_MapAvailableChanged" }, // 1358861427
		{ &Z_Construct_UFunction_ALobbyGameState_OnRep_MapSelectedChanged, "OnRep_MapSelectedChanged" }, // 1430079115
		{ &Z_Construct_UFunction_ALobbyGameState_OnRep_TeamInfoChanged, "OnRep_TeamInfoChanged" }, // 1075450593
		{ &Z_Construct_UFunction_ALobbyGameState_ServerAddPlayerStateToTeam, "ServerAddPlayerStateToTeam" }, // 2035629233
		{ &Z_Construct_UFunction_ALobbyGameState_ServerRemovePlayerStateFromTeam, "ServerRemovePlayerStateFromTeam" }, // 206550366
		{ &Z_Construct_UFunction_ALobbyGameState_SetDefaultSelectedMap, "SetDefaultSelectedMap" }, // 447048451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Lobby/LobbyGameState.h" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mTeamInfos_MetaData[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ToolTip", "Should be updated whenever selected map is changed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mTeamInfos = { UE4CodeGen_Private::EPropertyClass::Array, "mTeamInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_TeamInfoChanged", STRUCT_OFFSET(ALobbyGameState, mTeamInfos), METADATA_PARAMS(Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mTeamInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mTeamInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mTeamInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mTeamInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTeamInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mCurrentSelectedMap_MetaData[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
		{ "ToolTip", "use the getters and setters to manipulate for public/protected use" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mCurrentSelectedMap = { UE4CodeGen_Private::EPropertyClass::Struct, "mCurrentSelectedMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_MapSelectedChanged", STRUCT_OFFSET(ALobbyGameState, mCurrentSelectedMap), Z_Construct_UScriptStruct_FMapInfo, METADATA_PARAMS(Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mCurrentSelectedMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mCurrentSelectedMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyGameState_Statics::NewProp_SpectatorTeamID_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALobbyGameState_Statics::NewProp_SpectatorTeamID = { UE4CodeGen_Private::EPropertyClass::Int, "SpectatorTeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, STRUCT_OFFSET(ALobbyGameState, SpectatorTeamID), METADATA_PARAMS(Z_Construct_UClass_ALobbyGameState_Statics::NewProp_SpectatorTeamID_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALobbyGameState_Statics::NewProp_SpectatorTeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyGameState_Statics::NewProp_MapsAvailable_MetaData[] = {
		{ "Category", "LobbyGameState" },
		{ "ModuleRelativePath", "Lobby/LobbyGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALobbyGameState_Statics::NewProp_MapsAvailable = { UE4CodeGen_Private::EPropertyClass::Array, "MapsAvailable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000100000025, 1, "OnRep_MapAvailableChanged", STRUCT_OFFSET(ALobbyGameState, MapsAvailable), METADATA_PARAMS(Z_Construct_UClass_ALobbyGameState_Statics::NewProp_MapsAvailable_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALobbyGameState_Statics::NewProp_MapsAvailable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALobbyGameState_Statics::NewProp_MapsAvailable_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MapsAvailable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMapInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mTeamInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mTeamInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyGameState_Statics::NewProp_mCurrentSelectedMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyGameState_Statics::NewProp_SpectatorTeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyGameState_Statics::NewProp_MapsAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyGameState_Statics::NewProp_MapsAvailable_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGameState_Statics::ClassParams = {
		&ALobbyGameState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALobbyGameState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALobbyGameState_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALobbyGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALobbyGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALobbyGameState, 1616446652);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALobbyGameState(Z_Construct_UClass_ALobbyGameState, &ALobbyGameState::StaticClass, TEXT("/Script/June13"), TEXT("ALobbyGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
