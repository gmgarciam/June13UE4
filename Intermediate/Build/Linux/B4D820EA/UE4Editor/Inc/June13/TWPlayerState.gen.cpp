// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/TW/TWPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTWPlayerState() {}
// Cross Module References
	JUNE13_API UClass* Z_Construct_UClass_ATWPlayerState_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_ATWPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_June13();
	JUNE13_API UClass* Z_Construct_UClass_ULobbyPlayerStateInterface_NoRegister();
// End Cross Module References
	void ATWPlayerState::StaticRegisterNativesATWPlayerState()
	{
	}
	UClass* Z_Construct_UClass_ATWPlayerState_NoRegister()
	{
		return ATWPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ATWPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATWPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATWPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TW/TWPlayerState.h" },
		{ "ModuleRelativePath", "TW/TWPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATWPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULobbyPlayerStateInterface_NoRegister, (int32)VTABLE_OFFSET(ATWPlayerState, ILobbyPlayerStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATWPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATWPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATWPlayerState_Statics::ClassParams = {
		&ATWPlayerState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ATWPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATWPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATWPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATWPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATWPlayerState, 2556501885);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATWPlayerState(Z_Construct_UClass_ATWPlayerState, &ATWPlayerState::StaticClass, TEXT("/Script/June13"), TEXT("ATWPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATWPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
