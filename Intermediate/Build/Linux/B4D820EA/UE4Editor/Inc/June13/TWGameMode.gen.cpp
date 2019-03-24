// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/TW/TWGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTWGameMode() {}
// Cross Module References
	JUNE13_API UClass* Z_Construct_UClass_ATWGameMode_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ATWGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_June13();
	JUNE13_API UFunction* Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch();
// End Cross Module References
	static FName NAME_ATWGameMode_ReadyToStartMatch = FName(TEXT("ReadyToStartMatch"));
	bool ATWGameMode::ReadyToStartMatch()
	{
		TWGameMode_eventReadyToStartMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ATWGameMode_ReadyToStartMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	void ATWGameMode::StaticRegisterNativesATWGameMode()
	{
		UClass* Class = ATWGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadyToStartMatch", &ATWGameMode::execReadyToStartMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TWGameMode_eventReadyToStartMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TWGameMode_eventReadyToStartMatch_Parms), &Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "TW/TWGameMode.h" },
		{ "ToolTip", "Match State related//Check if match is ready to start" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATWGameMode, "ReadyToStartMatch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(TWGameMode_eventReadyToStartMatch_Parms), Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATWGameMode_NoRegister()
	{
		return ATWGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATWGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATWGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATWGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATWGameMode_ReadyToStartMatch, "ReadyToStartMatch" }, // 4228937108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATWGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TW/TWGameMode.h" },
		{ "ModuleRelativePath", "TW/TWGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "TWGameMode is to be the base class for any custom game modes used for actual gameplay.\n\n--\nIn terms of data persistence from the Lobby related classes\n--\nIt is to be paired with TWGameState, which conforms to the LobbyPlayerStateInterface, allowing TWGameMode to obtain the data regarding teams after a SeamlessTravel from the lobby.\n-See PostSeamlessTravel()\nAfterwards it is up to the TWGameMode to construct the proper data for its TWGameState\n\n--\nIn terms of MatchState\n--\nTWGameMode should also have implementation for HandleMatchIsWaitingToStart(), ReadyToStartMatch(), HandleMatchHasStarted()\nNote: once the MatchState has been changed, it will call OnMatchStateSet(), which calls the corresponding HandleMatch_____ method.\n\nDefault implementation from AGameMode for HandleMatchIsWaitingToStart() checks for ReadyToStartMatch() which returns a bool, which then it calls BeginPlay on actors\nDefault implementation from AGameMode for ReadyToStartMatch() is a blueprint native event, thus _Implementation is required, and starts when there is (NumPlayers + NumBots > 0)\nDefault implementation from AGameMode for HandleMatchHasStarted() is to restart the player controllers if they have no pawn.\n\nWhen the conditions are met to start the game, the relevant code should call StartPlay(), which checks for MatchState to be WaitingToStart and true for ReadyToStartMatch()" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATWGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATWGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATWGameMode_Statics::ClassParams = {
		&ATWGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATWGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATWGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATWGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATWGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATWGameMode, 4089227470);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATWGameMode(Z_Construct_UClass_ATWGameMode, &ATWGameMode::StaticClass, TEXT("/Script/June13"), TEXT("ATWGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATWGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
