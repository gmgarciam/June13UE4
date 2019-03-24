// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/Lobby/LobbyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPlayerController() {}
// Cross Module References
	JUNE13_API UClass* Z_Construct_UClass_ALobbyPlayerController_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ALobbyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_June13();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap();
	JUNE13_API UScriptStruct* Z_Construct_UScriptStruct_FMapInfo();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame();
// End Cross Module References
	static FName NAME_ALobbyPlayerController_Local_DataChanged = FName(TEXT("Local_DataChanged"));
	void ALobbyPlayerController::Local_DataChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerController_Local_DataChanged),NULL);
	}
	static FName NAME_ALobbyPlayerController_MultiCast_DataChanged = FName(TEXT("MultiCast_DataChanged"));
	void ALobbyPlayerController::MultiCast_DataChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerController_MultiCast_DataChanged),NULL);
	}
	static FName NAME_ALobbyPlayerController_OnBeginPlayingState = FName(TEXT("OnBeginPlayingState"));
	void ALobbyPlayerController::OnBeginPlayingState()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerController_OnBeginPlayingState),NULL);
	}
	static FName NAME_ALobbyPlayerController_Server_ChangeTeam = FName(TEXT("Server_ChangeTeam"));
	void ALobbyPlayerController::Server_ChangeTeam(int32 TeamID)
	{
		LobbyPlayerController_eventServer_ChangeTeam_Parms Parms;
		Parms.TeamID=TeamID;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerController_Server_ChangeTeam),&Parms);
	}
	static FName NAME_ALobbyPlayerController_Server_ReadyPlayer = FName(TEXT("Server_ReadyPlayer"));
	void ALobbyPlayerController::Server_ReadyPlayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyPlayerController_Server_ReadyPlayer),NULL);
	}
	void ALobbyPlayerController::StaticRegisterNativesALobbyPlayerController()
	{
		UClass* Class = ALobbyPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MultiCast_DataChanged", &ALobbyPlayerController::execMultiCast_DataChanged },
			{ "Server_ChangeMap", &ALobbyPlayerController::execServer_ChangeMap },
			{ "Server_ChangeMapWithIndex", &ALobbyPlayerController::execServer_ChangeMapWithIndex },
			{ "Server_ChangeTeam", &ALobbyPlayerController::execServer_ChangeTeam },
			{ "Server_ReadyPlayer", &ALobbyPlayerController::execServer_ReadyPlayer },
			{ "Server_StartGame", &ALobbyPlayerController::execServer_StartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Changed" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
		{ "ToolTip", "Used for local PlayerControllers to update their UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, "Local_DataChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
		{ "ToolTip", "Because it's UFUNCTION, can't use C++ overloading" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, "MultiCast_DataChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "BeginCalls" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, "OnBeginPlayingState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics
	{
		struct LobbyPlayerController_eventServer_ChangeMap_Parms
		{
			FMapInfo MapInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::NewProp_MapInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "MapInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LobbyPlayerController_eventServer_ChangeMap_Parms, MapInfo), Z_Construct_UScriptStruct_FMapInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::NewProp_MapInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
		{ "ToolTip", "Only host should be calling this, client calling will do nothing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, "Server_ChangeMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LobbyPlayerController_eventServer_ChangeMap_Parms), Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics
	{
		struct LobbyPlayerController_eventServer_ChangeMapWithIndex_Parms
		{
			int32 MapIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::NewProp_MapIndex = { UE4CodeGen_Private::EPropertyClass::Int, "MapIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LobbyPlayerController_eventServer_ChangeMapWithIndex_Parms, MapIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::NewProp_MapIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
		{ "ToolTip", "Only host should be calling this, client calling will do nothing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, "Server_ChangeMapWithIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LobbyPlayerController_eventServer_ChangeMapWithIndex_Parms), Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::NewProp_TeamID = { UE4CodeGen_Private::EPropertyClass::Int, "TeamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LobbyPlayerController_eventServer_ChangeTeam_Parms, TeamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::NewProp_TeamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, "Server_ChangeTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(LobbyPlayerController_eventServer_ChangeTeam_Parms), Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, "Server_ReadyPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Start" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
		{ "ToolTip", "Only server should call it, client calling will do nothing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPlayerController, "Server_StartGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALobbyPlayerController_NoRegister()
	{
		return ALobbyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyPlayerController_Local_DataChanged, "Local_DataChanged" }, // 1273877367
		{ &Z_Construct_UFunction_ALobbyPlayerController_MultiCast_DataChanged, "MultiCast_DataChanged" }, // 3598187888
		{ &Z_Construct_UFunction_ALobbyPlayerController_OnBeginPlayingState, "OnBeginPlayingState" }, // 635348031
		{ &Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMap, "Server_ChangeMap" }, // 3378988958
		{ &Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeMapWithIndex, "Server_ChangeMapWithIndex" }, // 3487305738
		{ &Z_Construct_UFunction_ALobbyPlayerController_Server_ChangeTeam, "Server_ChangeTeam" }, // 1478616009
		{ &Z_Construct_UFunction_ALobbyPlayerController_Server_ReadyPlayer, "Server_ReadyPlayer" }, // 3370151169
		{ &Z_Construct_UFunction_ALobbyPlayerController_Server_StartGame, "Server_StartGame" }, // 1088517913
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Lobby/LobbyPlayerController.h" },
		{ "ModuleRelativePath", "Lobby/LobbyPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALobbyPlayerController_Statics::ClassParams = {
		&ALobbyPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALobbyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALobbyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALobbyPlayerController, 878008384);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALobbyPlayerController(Z_Construct_UClass_ALobbyPlayerController, &ALobbyPlayerController::StaticClass, TEXT("/Script/June13"), TEXT("ALobbyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
