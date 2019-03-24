// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUNE13_LobbyPlayerState_generated_h
#error "LobbyPlayerState.generated.h already included, missing '#pragma once' in LobbyPlayerState.h"
#endif
#define JUNE13_LobbyPlayerState_generated_h

#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_RPC_WRAPPERS \
	virtual void OnRep_ReadyChanged_Implementation(); \
	virtual bool ReadyPlayer_Validate(bool ); \
	virtual void ReadyPlayer_Implementation(bool ready); \
	virtual void OnRep_TeamIDChanged_Implementation(); \
	virtual bool SetTeamID_Validate(int32 ); \
	virtual void SetTeamID_Implementation(int32 TeamID); \
 \
	DECLARE_FUNCTION(execOnRep_ReadyChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReadyChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadyPlayer) \
	{ \
		P_GET_UBOOL(Z_Param_ready); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ReadyPlayer_Validate(Z_Param_ready)) \
		{ \
			RPC_ValidateFailed(TEXT("ReadyPlayer_Validate")); \
			return; \
		} \
		P_THIS->ReadyPlayer_Implementation(Z_Param_ready); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReadyStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetReadyStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_TeamIDChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TeamIDChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeamID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TeamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetTeamID_Validate(Z_Param_TeamID)) \
		{ \
			RPC_ValidateFailed(TEXT("SetTeamID_Validate")); \
			return; \
		} \
		P_THIS->SetTeamID_Implementation(Z_Param_TeamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTeamID(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRep_ReadyChanged_Implementation(); \
	virtual bool ReadyPlayer_Validate(bool ); \
	virtual void ReadyPlayer_Implementation(bool ready); \
	virtual void OnRep_TeamIDChanged_Implementation(); \
	virtual bool SetTeamID_Validate(int32 ); \
	virtual void SetTeamID_Implementation(int32 TeamID); \
 \
	DECLARE_FUNCTION(execOnRep_ReadyChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReadyChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadyPlayer) \
	{ \
		P_GET_UBOOL(Z_Param_ready); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ReadyPlayer_Validate(Z_Param_ready)) \
		{ \
			RPC_ValidateFailed(TEXT("ReadyPlayer_Validate")); \
			return; \
		} \
		P_THIS->ReadyPlayer_Implementation(Z_Param_ready); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReadyStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetReadyStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_TeamIDChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TeamIDChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeamID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TeamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->SetTeamID_Validate(Z_Param_TeamID)) \
		{ \
			RPC_ValidateFailed(TEXT("SetTeamID_Validate")); \
			return; \
		} \
		P_THIS->SetTeamID_Implementation(Z_Param_TeamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTeamID(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_EVENT_PARMS \
	struct LobbyPlayerState_eventReadyPlayer_Parms \
	{ \
		bool ready; \
	}; \
	struct LobbyPlayerState_eventSetTeamID_Parms \
	{ \
		int32 TeamID; \
	};


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_CALLBACK_WRAPPERS
#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyPlayerState(); \
	friend struct Z_Construct_UClass_ALobbyPlayerState_Statics; \
public: \
	DECLARE_CLASS(ALobbyPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ALobbyPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ALobbyPlayerState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALobbyPlayerState(); \
	friend struct Z_Construct_UClass_ALobbyPlayerState_Statics; \
public: \
	DECLARE_CLASS(ALobbyPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ALobbyPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ALobbyPlayerState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyPlayerState(ALobbyPlayerState&&); \
	NO_API ALobbyPlayerState(const ALobbyPlayerState&); \
public:


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyPlayerState(ALobbyPlayerState&&); \
	NO_API ALobbyPlayerState(const ALobbyPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPlayerState)


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTeamID() { return STRUCT_OFFSET(ALobbyPlayerState, mTeamID); } \
	FORCEINLINE static uint32 __PPO__mReady() { return STRUCT_OFFSET(ALobbyPlayerState, mReady); }


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_12_PROLOG \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_EVENT_PARMS


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_RPC_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_INCLASS \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID June13UE4_Source_June13_Lobby_LobbyPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
