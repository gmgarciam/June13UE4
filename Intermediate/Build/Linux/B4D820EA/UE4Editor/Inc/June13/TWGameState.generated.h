// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameTeamInfo;
#ifdef JUNE13_TWGameState_generated_h
#error "TWGameState.generated.h already included, missing '#pragma once' in TWGameState.h"
#endif
#define JUNE13_TWGameState_generated_h

#define June13UE4_Source_June13_TW_TWGameState_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameTeamInfo_Statics; \
	JUNE13_API static class UScriptStruct* StaticStruct();


#define June13UE4_Source_June13_TW_TWGameState_h_34_RPC_WRAPPERS \
	virtual void OnRep_TeamInfoChanged_Implementation(); \
	virtual bool SetupTeam_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_TeamInfoChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TeamInfoChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeamInfos) \
	{ \
		P_GET_TARRAY(FGameTeamInfo,Z_Param_TeamInfos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeamInfos(Z_Param_TeamInfos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetupTeam_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetupTeamInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ServerSetupTeamInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetupTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ServerSetupTeam(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_TW_TWGameState_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRep_TeamInfoChanged_Implementation(); \
	virtual bool SetupTeam_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_TeamInfoChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TeamInfoChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeamInfos) \
	{ \
		P_GET_TARRAY(FGameTeamInfo,Z_Param_TeamInfos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeamInfos(Z_Param_TeamInfos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetupTeam_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetupTeamInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ServerSetupTeamInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetupTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ServerSetupTeam(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_TW_TWGameState_h_34_EVENT_PARMS \
	struct TWGameState_eventSetupTeam_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TWGameState_eventSetupTeam_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define June13UE4_Source_June13_TW_TWGameState_h_34_CALLBACK_WRAPPERS
#define June13UE4_Source_June13_TW_TWGameState_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATWGameState(); \
	friend struct Z_Construct_UClass_ATWGameState_Statics; \
public: \
	DECLARE_CLASS(ATWGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ATWGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define June13UE4_Source_June13_TW_TWGameState_h_34_INCLASS \
private: \
	static void StaticRegisterNativesATWGameState(); \
	friend struct Z_Construct_UClass_ATWGameState_Statics; \
public: \
	DECLARE_CLASS(ATWGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ATWGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define June13UE4_Source_June13_TW_TWGameState_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATWGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATWGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATWGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATWGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATWGameState(ATWGameState&&); \
	NO_API ATWGameState(const ATWGameState&); \
public:


#define June13UE4_Source_June13_TW_TWGameState_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATWGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATWGameState(ATWGameState&&); \
	NO_API ATWGameState(const ATWGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATWGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATWGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATWGameState)


#define June13UE4_Source_June13_TW_TWGameState_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTeamInfos() { return STRUCT_OFFSET(ATWGameState, mTeamInfos); } \
	FORCEINLINE static uint32 __PPO__mSpectatorInfos() { return STRUCT_OFFSET(ATWGameState, mSpectatorInfos); }


#define June13UE4_Source_June13_TW_TWGameState_h_31_PROLOG \
	June13UE4_Source_June13_TW_TWGameState_h_34_EVENT_PARMS


#define June13UE4_Source_June13_TW_TWGameState_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_TW_TWGameState_h_34_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_TW_TWGameState_h_34_RPC_WRAPPERS \
	June13UE4_Source_June13_TW_TWGameState_h_34_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_TW_TWGameState_h_34_INCLASS \
	June13UE4_Source_June13_TW_TWGameState_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_TW_TWGameState_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_TW_TWGameState_h_34_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_TW_TWGameState_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	June13UE4_Source_June13_TW_TWGameState_h_34_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_TW_TWGameState_h_34_INCLASS_NO_PURE_DECLS \
	June13UE4_Source_June13_TW_TWGameState_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID June13UE4_Source_June13_TW_TWGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
