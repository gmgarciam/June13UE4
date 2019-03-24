// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "June13/June13.h"
#include "June13/June13GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJune13GameMode() {}
// Cross Module References
	JUNE13_API UClass* Z_Construct_UClass_AJune13GameMode_NoRegister();
	JUNE13_API UClass* Z_Construct_UClass_AJune13GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_June13();
// End Cross Module References
	void AJune13GameMode::StaticRegisterNativesAJune13GameMode()
	{
	}
	UClass* Z_Construct_UClass_AJune13GameMode_NoRegister()
	{
		return AJune13GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJune13GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJune13GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_June13,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJune13GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "June13GameMode.h" },
		{ "ModuleRelativePath", "June13GameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJune13GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJune13GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJune13GameMode_Statics::ClassParams = {
		&AJune13GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AJune13GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AJune13GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJune13GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJune13GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJune13GameMode, 1398295554);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJune13GameMode(Z_Construct_UClass_AJune13GameMode, &AJune13GameMode::StaticClass, TEXT("/Script/June13"), TEXT("AJune13GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJune13GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
