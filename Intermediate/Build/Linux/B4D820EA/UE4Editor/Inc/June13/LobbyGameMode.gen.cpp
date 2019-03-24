// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/Lobby/LobbyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGameMode() {}
// Cross Module References
	JUNE13_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ALobbyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_June13();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameMode_ServerStartGame();
	JUNE13_API UFunction* Z_Construct_UFunction_ALobbyGameMode_ServerTravel();
// End Cross Module References
	void ALobbyGameMode::StaticRegisterNativesALobbyGameMode()
	{
		UClass* Class = ALobbyGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerStartGame", &ALobbyGameMode::execServerStartGame },
			{ "ServerTravel", &ALobbyGameMode::execServerTravel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics
	{
		struct LobbyGameMode_eventServerStartGame_Parms
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
	void Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LobbyGameMode_eventServerStartGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LobbyGameMode_eventServerStartGame_Parms), &Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Start" },
		{ "ModuleRelativePath", "Lobby/LobbyGameMode.h" },
		{ "ToolTip", "Return false if can't start game, true if countdown starting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameMode, "ServerStartGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LobbyGameMode_eventServerStartGame_Parms), Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameMode_ServerStartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameMode_ServerStartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyGameMode_ServerTravel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyGameMode_ServerTravel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MapTravel" },
		{ "ModuleRelativePath", "Lobby/LobbyGameMode.h" },
		{ "ToolTip", "To be moved to private" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGameMode_ServerTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGameMode, "ServerTravel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyGameMode_ServerTravel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALobbyGameMode_ServerTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyGameMode_ServerTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALobbyGameMode_ServerTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister()
	{
		return ALobbyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyGameMode_ServerStartGame, "ServerStartGame" }, // 2106994131
		{ &Z_Construct_UFunction_ALobbyGameMode_ServerTravel, "ServerTravel" }, // 528275667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Lobby/LobbyGameMode.h" },
		{ "ModuleRelativePath", "Lobby/LobbyGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams = {
		&ALobbyGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALobbyGameMode, 493129414);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALobbyGameMode(Z_Construct_UClass_ALobbyGameMode, &ALobbyGameMode::StaticClass, TEXT("/Script/June13"), TEXT("ALobbyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
