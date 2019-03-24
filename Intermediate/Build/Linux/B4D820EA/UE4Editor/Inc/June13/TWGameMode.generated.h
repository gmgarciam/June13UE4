// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUNE13_TWGameMode_generated_h
#error "TWGameMode.generated.h already included, missing '#pragma once' in TWGameMode.h"
#endif
#define JUNE13_TWGameMode_generated_h

#define June13UE4_Source_June13_TW_TWGameMode_h_35_RPC_WRAPPERS \
	virtual bool ReadyToStartMatch_Implementation(); \
 \
	DECLARE_FUNCTION(execReadyToStartMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadyToStartMatch_Implementation(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_TW_TWGameMode_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ReadyToStartMatch_Implementation(); \
 \
	DECLARE_FUNCTION(execReadyToStartMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadyToStartMatch_Implementation(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_TW_TWGameMode_h_35_EVENT_PARMS \
	struct TWGameMode_eventReadyToStartMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TWGameMode_eventReadyToStartMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define June13UE4_Source_June13_TW_TWGameMode_h_35_CALLBACK_WRAPPERS
#define June13UE4_Source_June13_TW_TWGameMode_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATWGameMode(); \
	friend struct Z_Construct_UClass_ATWGameMode_Statics; \
public: \
	DECLARE_CLASS(ATWGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ATWGameMode)


#define June13UE4_Source_June13_TW_TWGameMode_h_35_INCLASS \
private: \
	static void StaticRegisterNativesATWGameMode(); \
	friend struct Z_Construct_UClass_ATWGameMode_Statics; \
public: \
	DECLARE_CLASS(ATWGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ATWGameMode)


#define June13UE4_Source_June13_TW_TWGameMode_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATWGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATWGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATWGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATWGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATWGameMode(ATWGameMode&&); \
	NO_API ATWGameMode(const ATWGameMode&); \
public:


#define June13UE4_Source_June13_TW_TWGameMode_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATWGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATWGameMode(ATWGameMode&&); \
	NO_API ATWGameMode(const ATWGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATWGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATWGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATWGameMode)


#define June13UE4_Source_June13_TW_TWGameMode_h_35_PRIVATE_PROPERTY_OFFSET
#define June13UE4_Source_June13_TW_TWGameMode_h_32_PROLOG \
	June13UE4_Source_June13_TW_TWGameMode_h_35_EVENT_PARMS


#define June13UE4_Source_June13_TW_TWGameMode_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_TW_TWGameMode_h_35_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_TW_TWGameMode_h_35_RPC_WRAPPERS \
	June13UE4_Source_June13_TW_TWGameMode_h_35_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_TW_TWGameMode_h_35_INCLASS \
	June13UE4_Source_June13_TW_TWGameMode_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_TW_TWGameMode_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_TW_TWGameMode_h_35_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_TW_TWGameMode_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	June13UE4_Source_June13_TW_TWGameMode_h_35_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_TW_TWGameMode_h_35_INCLASS_NO_PURE_DECLS \
	June13UE4_Source_June13_TW_TWGameMode_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID June13UE4_Source_June13_TW_TWGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
