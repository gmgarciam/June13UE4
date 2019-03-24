// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/Lobby/LobbyPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPlayerState() {}
// Cross Module References
	JUNE13_API UClass* Z_Construct_UClass_ALobbyPlayerState_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ALobbyPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_June13();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerState_GetTeamID();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerState_SetTeamID();
	JUNE13_API UClass* Z_Construct_UClass_ULobbyPlayerStateInterface_NoRegister();
// End Cross Module References
	static FName NAME_ALobbyPlayerState_OnRep_ReadyChanged = FName(TEXT("OnRep_ReadyChanged"));
	void ALobbyPlayerState::OnRep_ReadyChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerState_OnRep_ReadyChanged),NULL);
	}
	static FName NAME_ALobbyPlayerState_OnRep_TeamIDChanged = FName(TEXT("OnRep_TeamIDChanged"));
	void ALobbyPlayerState::OnRep_TeamIDChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerState_OnRep_TeamIDChanged),NULL);
	}
	static FName NAME_ALobbyPlayerState_ReadyPlayer = FName(TEXT("ReadyPlayer"));
	void ALobbyPlayerState::ReadyPlayer(bool ready)
	{
		LobbyPlayerState_eventReadyPlayer_Parms Parms;
		Parms.ready=ready ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerState_ReadyPlayer),&Parms);
	}
	static FName NAME_ALobbyPlayerState_SetTeamID = FName(TEXT("SetTeamID"));
	void ALobbyPlayerState::SetTeamID(int32 TeamID)
	{
		LobbyPlayerState_eventSetTeamID_Parms Parms;
		Parms.TeamID=TeamID;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerState_SetTeamID),&Parms);
	}
	void ALobbyPlayerState::StaticRegisterNativesALobbyPlayerState()
	{
		UClass* Class = ALobbyPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetReadyStatus", &ALobbyPlayerState::execGetReadyStatus },
			{ "GetTeamID", &ALobbyPlayerState::execGetTeamID },
			{ "OnRep_ReadyChanged", &ALobbyPlayerState::execOnRep_ReadyChanged },
			{ "OnRep_TeamIDChanged", &ALobbyPlayerState::execOnRep_TeamIDChanged },
			{ "ReadyPlayer", &ALobbyPlayerState::execReadyPlayer },
			{ "SetTeamID", &ALobbyPlayerState::execSetTeamID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics
	{
		struct LobbyPlayerState_eventGetReadyStatus_Parms
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
	void Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LobbyPlayerState_eventGetReadyStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LobbyPlayerState_eventGetReadyStatus_Parms), &Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
		{ "ToolTip", "Ready related" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, "GetReadyStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LobbyPlayerState_eventGetReadyStatus_Parms), Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics
	{
		struct LobbyPlayerState_eventGetTeamID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LobbyPlayerState_eventGetTeamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
		{ "ToolTip", "Team ID related" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, "GetTeamID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LobbyPlayerState_eventGetTeamID_Parms), Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerState_GetTeamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_GetTeamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, "OnRep_ReadyChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, "OnRep_TeamIDChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics
	{
		static void NewProp_ready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ready;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::NewProp_ready_SetBit(void* Obj)
	{
		((LobbyPlayerState_eventReadyPlayer_Parms*)Obj)->ready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::NewProp_ready = { UE4CodeGen_Private::EPropertyClass::Bool, "ready", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LobbyPlayerState_eventReadyPlayer_Parms), &Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::NewProp_ready_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::NewProp_ready,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, "ReadyPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(LobbyPlayerState_eventReadyPlayer_Parms), Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Int, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LobbyPlayerState_eventSetTeamID_Parms, TeamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::NewProp_TeamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerState, "SetTeamID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(LobbyPlayerState_eventSetTeamID_Parms), Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerState_SetTeamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerState_SetTeamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALobbyPlayerState_NoRegister()
	{
		return ALobbyPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReady_MetaData[];
#endif
		static void NewProp_mReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mTeamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyPlayerState_GetReadyStatus, "GetReadyStatus" }, // 3080495620
		{ &Z_Construct_UFunction_ALobbyPlayerState_GetTeamID, "GetTeamID" }, // 2304830265
		{ &Z_Construct_UFunction_ALobbyPlayerState_OnRep_ReadyChanged, "OnRep_ReadyChanged" }, // 237783575
		{ &Z_Construct_UFunction_ALobbyPlayerState_OnRep_TeamIDChanged, "OnRep_TeamIDChanged" }, // 991613938
		{ &Z_Construct_UFunction_ALobbyPlayerState_ReadyPlayer, "ReadyPlayer" }, // 90313351
		{ &Z_Construct_UFunction_ALobbyPlayerState_SetTeamID, "SetTeamID" }, // 1787254549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Lobby/LobbyPlayerState.h" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mReady_MetaData[] = {
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
		{ "ToolTip", "See https:docs.unrealengine.com/latest/INT/Gameplay/Networking/CharacterMovementComponent/ for possible client-side prediction (maybe can use simpler method)\nShould consider having client see ready status first, before asking the server to replicate it to client, Since 'Replicated' implys Server-owned" },
	};
#endif
	void Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mReady_SetBit(void* Obj)
	{
		((ALobbyPlayerState*)Obj)->mReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mReady = { UE4CodeGen_Private::EPropertyClass::Bool, "mReady", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_ReadyChanged", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALobbyPlayerState), &Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mReady_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mTeamID_MetaData[] = {
		{ "ModuleRelativePath", "Lobby/LobbyPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mTeamID = { UE4CodeGen_Private::EPropertyClass::Int, "mTeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_TeamIDChanged", STRUCT_OFFSET(ALobbyPlayerState, mTeamID), METADATA_PARAMS(Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mTeamID_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mTeamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyPlayerState_Statics::NewProp_mTeamID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALobbyPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULobbyPlayerStateInterface_NoRegister, (int32)VTABLE_OFFSET(ALobbyPlayerState, ILobbyPlayerStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALobbyPlayerState_Statics::ClassParams = {
		&ALobbyPlayerState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ALobbyPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALobbyPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALobbyPlayerState, 2300084041);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALobbyPlayerState(Z_Construct_UClass_ALobbyPlayerState, &ALobbyPlayerState::StaticClass, TEXT("/Script/June13"), TEXT("ALobbyPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
