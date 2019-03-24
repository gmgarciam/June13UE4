// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/Lobby/LobbyPlayerStateInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPlayerStateInterface() {}
// Cross Module References
	JUNE13_API UClass* Z_Construct_UClass_ULobbyPlayerStateInterface_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ULobbyPlayerStateInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_June13();
// End Cross Module References
	void ULobbyPlayerStateInterface::StaticRegisterNativesULobbyPlayerStateInterface()
	{
	}
	UClass* Z_Construct_UClass_ULobbyPlayerStateInterface_NoRegister()
	{
		return ULobbyPlayerStateInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPlayerStateInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPlayerStateInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPlayerStateInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyPlayerStateInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPlayerStateInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILobbyPlayerStateInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPlayerStateInterface_Statics::ClassParams = {
		&ULobbyPlayerStateInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000040A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPlayerStateInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULobbyPlayerStateInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPlayerStateInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPlayerStateInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPlayerStateInterface, 1551111674);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPlayerStateInterface(Z_Construct_UClass_ULobbyPlayerStateInterface, &ULobbyPlayerStateInterface::StaticClass, TEXT("/Script/June13"), TEXT("ULobbyPlayerStateInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPlayerStateInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
