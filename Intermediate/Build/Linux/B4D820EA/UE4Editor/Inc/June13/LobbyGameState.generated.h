// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALobbyPlayerState;
struct FTeamInfo;
struct FMapInfo;
#ifdef JUNE13_LobbyGameState_generated_h
#error "LobbyGameState.generated.h already included, missing '#pragma once' in LobbyGameState.h"
#endif
#define JUNE13_LobbyGameState_generated_h

#define June13UE4_Source_June13_Lobby_LobbyGameState_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTeamInfo_Statics; \
	JUNE13_API static class UScriptStruct* StaticStruct();


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapInfo_Statics; \
	JUNE13_API static class UScriptStruct* StaticStruct();


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameModeInfo_Statics; \
	JUNE13_API static class UScriptStruct* StaticStruct();


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_RPC_WRAPPERS \
	virtual void OnRep_MapSelectedChanged_Implementation(); \
	virtual void OnRep_MapAvailableChanged_Implementation(); \
	virtual void OnRep_TeamInfoChanged_Implementation(); \
	virtual bool ServerAddPlayerStateToTeam_Validate(ALobbyPlayerState* , int32 ); \
	virtual void ServerAddPlayerStateToTeam_Implementation(ALobbyPlayerState* PlayerState, int32 TeamID); \
	virtual bool ServerRemovePlayerStateFromTeam_Validate(ALobbyPlayerState* ); \
	virtual void ServerRemovePlayerStateFromTeam_Implementation(ALobbyPlayerState* PlayerState); \
	virtual void SetDefaultSelectedMap_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_MapSelectedChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MapSelectedChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MapAvailableChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MapAvailableChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_TeamInfoChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TeamInfoChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddPlayerStateToTeam) \
	{ \
		P_GET_OBJECT(ALobbyPlayerState,Z_Param_PlayerState); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TeamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddPlayerStateToTeam_Validate(Z_Param_PlayerState,Z_Param_TeamID)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddPlayerStateToTeam_Validate")); \
			return; \
		} \
		P_THIS->ServerAddPlayerStateToTeam_Implementation(Z_Param_PlayerState,Z_Param_TeamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRemovePlayerStateFromTeam) \
	{ \
		P_GET_OBJECT(ALobbyPlayerState,Z_Param_PlayerState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerRemovePlayerStateFromTeam_Validate(Z_Param_PlayerState)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRemovePlayerStateFromTeam_Validate")); \
			return; \
		} \
		P_THIS->ServerRemovePlayerStateFromTeam_Implementation(Z_Param_PlayerState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeamInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTeamInfo>*)Z_Param__Result=P_THIS->GetTeamInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultSelectedMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultSelectedMap_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSelectedMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMapInfo*)Z_Param__Result=P_THIS->GetCurrentSelectedMap(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRep_MapSelectedChanged_Implementation(); \
	virtual void OnRep_MapAvailableChanged_Implementation(); \
	virtual void OnRep_TeamInfoChanged_Implementation(); \
	virtual bool ServerAddPlayerStateToTeam_Validate(ALobbyPlayerState* , int32 ); \
	virtual void ServerAddPlayerStateToTeam_Implementation(ALobbyPlayerState* PlayerState, int32 TeamID); \
	virtual bool ServerRemovePlayerStateFromTeam_Validate(ALobbyPlayerState* ); \
	virtual void ServerRemovePlayerStateFromTeam_Implementation(ALobbyPlayerState* PlayerState); \
	virtual void SetDefaultSelectedMap_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_MapSelectedChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MapSelectedChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MapAvailableChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MapAvailableChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_TeamInfoChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TeamInfoChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerAddPlayerStateToTeam) \
	{ \
		P_GET_OBJECT(ALobbyPlayerState,Z_Param_PlayerState); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TeamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerAddPlayerStateToTeam_Validate(Z_Param_PlayerState,Z_Param_TeamID)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerAddPlayerStateToTeam_Validate")); \
			return; \
		} \
		P_THIS->ServerAddPlayerStateToTeam_Implementation(Z_Param_PlayerState,Z_Param_TeamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerRemovePlayerStateFromTeam) \
	{ \
		P_GET_OBJECT(ALobbyPlayerState,Z_Param_PlayerState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerRemovePlayerStateFromTeam_Validate(Z_Param_PlayerState)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerRemovePlayerStateFromTeam_Validate")); \
			return; \
		} \
		P_THIS->ServerRemovePlayerStateFromTeam_Implementation(Z_Param_PlayerState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeamInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTeamInfo>*)Z_Param__Result=P_THIS->GetTeamInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultSelectedMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultSelectedMap_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSelectedMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMapInfo*)Z_Param__Result=P_THIS->GetCurrentSelectedMap(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_EVENT_PARMS \
	struct LobbyGameState_eventServerAddPlayerStateToTeam_Parms \
	{ \
		ALobbyPlayerState* PlayerState; \
		int32 TeamID; \
	}; \
	struct LobbyGameState_eventServerRemovePlayerStateFromTeam_Parms \
	{ \
		ALobbyPlayerState* PlayerState; \
	};


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_CALLBACK_WRAPPERS
#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyGameState(); \
	friend struct Z_Construct_UClass_ALobbyGameState_Statics; \
public: \
	DECLARE_CLASS(ALobbyGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_INCLASS \
private: \
	static void StaticRegisterNativesALobbyGameState(); \
	friend struct Z_Construct_UClass_ALobbyGameState_Statics; \
public: \
	DECLARE_CLASS(ALobbyGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyGameState(ALobbyGameState&&); \
	NO_API ALobbyGameState(const ALobbyGameState&); \
public:


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyGameState(ALobbyGameState&&); \
	NO_API ALobbyGameState(const ALobbyGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGameState)


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCurrentSelectedMap() { return STRUCT_OFFSET(ALobbyGameState, mCurrentSelectedMap); } \
	FORCEINLINE static uint32 __PPO__mTeamInfos() { return STRUCT_OFFSET(ALobbyGameState, mTeamInfos); }


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_70_PROLOG \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_EVENT_PARMS


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_RPC_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_INCLASS \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_Lobby_LobbyGameState_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_INCLASS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyGameState_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID June13UE4_Source_June13_Lobby_LobbyGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
