// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/TW/TWGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTWGameState() {}
// Cross Module References
	JUNE13_API UScriptStruct* Z_Construct_UScriptStruct_FGameTeamInfo();
	UPackage* Z_Construct_UPackage__Script_June13();
	JUNE13_API UClass* Z_Construct_UClass_ATWPlayerState_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ATWGameState_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ATWGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	JUNE13_API UFunction* Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged();
	JUNE13_API UFunction* Z_Construct_UFunction_ATWGameState_ServerSetupTeam();
	JUNE13_API UFunction* Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo();
	JUNE13_API UFunction* Z_Construct_UFunction_ATWGameState_SetTeamInfos();
	JUNE13_API UFunction* Z_Construct_UFunction_ATWGameState_SetupTeam();
// End Cross Module References
class UScriptStruct* FGameTeamInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JUNE13_API uint32 Get_Z_Construct_UScriptStruct_FGameTeamInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameTeamInfo, Z_Construct_UPackage__Script_June13(), TEXT("GameTeamInfo"), sizeof(FGameTeamInfo), Get_Z_Construct_UScriptStruct_FGameTeamInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameTeamInfo(FGameTeamInfo::StaticStruct, TEXT("/Script/June13"), TEXT("GameTeamInfo"), false, nullptr, nullptr);
static struct FScriptStruct_June13_StaticRegisterNativesFGameTeamInfo
{
	FScriptStruct_June13_StaticRegisterNativesFGameTeamInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameTeamInfo")),new UScriptStruct::TCppStructOps<FGameTeamInfo>);
	}
} ScriptStruct_June13_StaticRegisterNativesFGameTeamInfo;
	struct Z_Construct_UScriptStruct_FGameTeamInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TeamName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameTeamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TW/TWGameState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameTeamInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamName_MetaData[] = {
		{ "Category", "GameTeamInfo" },
		{ "ModuleRelativePath", "TW/TWGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamName = { UE4CodeGen_Private::EPropertyClass::Str, "TeamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameTeamInfo, TeamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "GameTeamInfo" },
		{ "ModuleRelativePath", "TW/TWGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Int, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameTeamInfo, TeamID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamSize_MetaData[] = {
		{ "Category", "GameTeamInfo" },
		{ "ModuleRelativePath", "TW/TWGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamSize = { UE4CodeGen_Private::EPropertyClass::Int, "TeamSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameTeamInfo, TeamSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_PlayerStates_MetaData[] = {
		{ "Category", "GameTeamInfo" },
		{ "ModuleRelativePath", "TW/TWGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_PlayerStates = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameTeamInfo, PlayerStates), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_PlayerStates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_PlayerStates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_PlayerStates_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ATWPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameTeamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_TeamSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_PlayerStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameTeamInfo_Statics::NewProp_PlayerStates_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameTeamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
		nullptr,
		&NewStructOps,
		"GameTeamInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameTeamInfo),
		alignof(FGameTeamInfo),
		Z_Construct_UScriptStruct_FGameTeamInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameTeamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameTeamInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameTeamInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_June13();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameTeamInfo"), sizeof(FGameTeamInfo), Get_Z_Construct_UScriptStruct_FGameTeamInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameTeamInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameTeamInfo_CRC() { return 4023879391U; }
	static FName NAME_ATWGameState_OnRep_TeamInfoChanged = FName(TEXT("OnRep_TeamInfoChanged"));
	void ATWGameState::OnRep_TeamInfoChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATWGameState_OnRep_TeamInfoChanged),NULL);
	}
	static FName NAME_ATWGameState_SetupTeam = FName(TEXT("SetupTeam"));
	bool ATWGameState::SetupTeam()
	{
		TWGameState_eventSetupTeam_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ATWGameState_SetupTeam),&Parms);
		return !!Parms.ReturnValue;
	}
	void ATWGameState::StaticRegisterNativesATWGameState()
	{
		UClass* Class = ATWGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_TeamInfoChanged", &ATWGameState::execOnRep_TeamInfoChanged },
			{ "ServerSetupTeam", &ATWGameState::execServerSetupTeam },
			{ "ServerSetupTeamInfo", &ATWGameState::execServerSetupTeamInfo },
			{ "SetTeamInfos", &ATWGameState::execSetTeamInfos },
			{ "SetupTeam", &ATWGameState::execSetupTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TW/TWGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATWGameState, "OnRep_TeamInfoChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATWGameState_ServerSetupTeam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATWGameState_ServerSetupTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TW/TWGameState.h" },
		{ "ToolTip", "Used to setup mTeamInfo's size, id name. Override this method for any c++ subclass, or for blueprints implement it via SetupTeam()\nNot using Server specifier as we don't need the generated stuff, only usage is for Server's GameMode to call this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATWGameState_ServerSetupTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATWGameState, "ServerSetupTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATWGameState_ServerSetupTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATWGameState_ServerSetupTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATWGameState_ServerSetupTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATWGameState_ServerSetupTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics
	{
		struct TWGameState_eventServerSetupTeamInfo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TWGameState_eventServerSetupTeamInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TWGameState_eventServerSetupTeamInfo_Parms), &Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TW/TWGameState.h" },
		{ "ToolTip", "Used to add/remove PlayerState in mTeamInfo by looking through PlayerArray. Current Implementation only adds. Return true if successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATWGameState, "ServerSetupTeamInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TWGameState_eventServerSetupTeamInfo_Parms), Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics
	{
		struct TWGameState_eventSetTeamInfos_Parms
		{
			TArray<FGameTeamInfo> TeamInfos;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamInfos_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::NewProp_TeamInfos = { UE4CodeGen_Private::EPropertyClass::Array, "TeamInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TWGameState_eventSetTeamInfos_Parms, TeamInfos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::NewProp_TeamInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TeamInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameTeamInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::NewProp_TeamInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::NewProp_TeamInfos_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "TW/TWGameState.h" },
		{ "ToolTip", "Used for blueprint subclass to set mTeamInfos" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATWGameState, "SetTeamInfos", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TWGameState_eventSetTeamInfos_Parms), Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATWGameState_SetTeamInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATWGameState_SetTeamInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATWGameState_SetupTeam_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TWGameState_eventSetupTeam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TWGameState_eventSetupTeam_Parms), &Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "TW/TWGameState.h" },
		{ "ToolTip", "Should never be called directly, ServerSetupTeam() will call this at the end, ensuring it is done on the server. Return true if used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATWGameState, "SetupTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(TWGameState_eventSetupTeam_Parms), Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATWGameState_SetupTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATWGameState_SetupTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATWGameState_NoRegister()
	{
		return ATWGameState::StaticClass();
	}
	struct Z_Construct_UClass_ATWGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpectatorInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSpectatorInfos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSpectatorInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTeamInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTeamInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTeamInfos_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATWGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATWGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATWGameState_OnRep_TeamInfoChanged, "OnRep_TeamInfoChanged" }, // 1361435801
		{ &Z_Construct_UFunction_ATWGameState_ServerSetupTeam, "ServerSetupTeam" }, // 3872389833
		{ &Z_Construct_UFunction_ATWGameState_ServerSetupTeamInfo, "ServerSetupTeamInfo" }, // 4165955518
		{ &Z_Construct_UFunction_ATWGameState_SetTeamInfos, "SetTeamInfos" }, // 2483536083
		{ &Z_Construct_UFunction_ATWGameState_SetupTeam, "SetupTeam" }, // 3816641194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATWGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TW/TWGameState.h" },
		{ "ModuleRelativePath", "TW/TWGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "TODO: Implement an abstract class or interface as TWGameState uses same/similar things as LobbyGameState" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATWGameState_Statics::NewProp_mSpectatorInfos_MetaData[] = {
		{ "ModuleRelativePath", "TW/TWGameState.h" },
		{ "ToolTip", "Used to store array of PlayerStates that are spectators" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATWGameState_Statics::NewProp_mSpectatorInfos = { UE4CodeGen_Private::EPropertyClass::Array, "mSpectatorInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_TeamInfoChanged", STRUCT_OFFSET(ATWGameState, mSpectatorInfos), METADATA_PARAMS(Z_Construct_UClass_ATWGameState_Statics::NewProp_mSpectatorInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATWGameState_Statics::NewProp_mSpectatorInfos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATWGameState_Statics::NewProp_mSpectatorInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mSpectatorInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ATWPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATWGameState_Statics::NewProp_mTeamInfos_MetaData[] = {
		{ "ModuleRelativePath", "TW/TWGameState.h" },
		{ "ToolTip", "Used to store info regarding Playing Teams" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATWGameState_Statics::NewProp_mTeamInfos = { UE4CodeGen_Private::EPropertyClass::Array, "mTeamInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_TeamInfoChanged", STRUCT_OFFSET(ATWGameState, mTeamInfos), METADATA_PARAMS(Z_Construct_UClass_ATWGameState_Statics::NewProp_mTeamInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATWGameState_Statics::NewProp_mTeamInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATWGameState_Statics::NewProp_mTeamInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mTeamInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameTeamInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATWGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATWGameState_Statics::NewProp_mSpectatorInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATWGameState_Statics::NewProp_mSpectatorInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATWGameState_Statics::NewProp_mTeamInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATWGameState_Statics::NewProp_mTeamInfos_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATWGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATWGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATWGameState_Statics::ClassParams = {
		&ATWGameState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATWGameState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATWGameState_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATWGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATWGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATWGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATWGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATWGameState, 1318295920);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATWGameState(Z_Construct_UClass_ATWGameState, &ATWGameState::StaticClass, TEXT("/Script/June13"), TEXT("ATWGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATWGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
