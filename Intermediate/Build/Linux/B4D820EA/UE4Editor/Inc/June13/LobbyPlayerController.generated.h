// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMapInfo;
#ifdef JUNE13_LobbyPlayerController_generated_h
#error "LobbyPlayerController.generated.h already included, missing '#pragma once' in LobbyPlayerController.h"
#endif
#define JUNE13_LobbyPlayerController_generated_h

#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_RPC_WRAPPERS \
	virtual void MultiCast_DataChanged_Implementation(); \
	virtual bool Server_ChangeTeam_Validate(int32 ); \
	virtual void Server_ChangeTeam_Implementation(int32 TeamID); \
	virtual bool Server_ReadyPlayer_Validate(); \
	virtual void Server_ReadyPlayer_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_StartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_StartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiCast_DataChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MultiCast_DataChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ChangeMapWithIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MapIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_ChangeMapWithIndex(Z_Param_MapIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ChangeMap) \
	{ \
		P_GET_STRUCT(FMapInfo,Z_Param_MapInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_ChangeMap(Z_Param_MapInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ChangeTeam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TeamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ChangeTeam_Validate(Z_Param_TeamID)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ChangeTeam_Validate")); \
			return; \
		} \
		P_THIS->Server_ChangeTeam_Implementation(Z_Param_TeamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ReadyPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ReadyPlayer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ReadyPlayer_Validate")); \
			return; \
		} \
		P_THIS->Server_ReadyPlayer_Implementation(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MultiCast_DataChanged_Implementation(); \
	virtual bool Server_ChangeTeam_Validate(int32 ); \
	virtual void Server_ChangeTeam_Implementation(int32 TeamID); \
	virtual bool Server_ReadyPlayer_Validate(); \
	virtual void Server_ReadyPlayer_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_StartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_StartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultiCast_DataChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MultiCast_DataChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ChangeMapWithIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MapIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_ChangeMapWithIndex(Z_Param_MapIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ChangeMap) \
	{ \
		P_GET_STRUCT(FMapInfo,Z_Param_MapInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Server_ChangeMap(Z_Param_MapInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ChangeTeam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TeamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ChangeTeam_Validate(Z_Param_TeamID)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ChangeTeam_Validate")); \
			return; \
		} \
		P_THIS->Server_ChangeTeam_Implementation(Z_Param_TeamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ReadyPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ReadyPlayer_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ReadyPlayer_Validate")); \
			return; \
		} \
		P_THIS->Server_ReadyPlayer_Implementation(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_EVENT_PARMS \
	struct LobbyPlayerController_eventServer_ChangeTeam_Parms \
	{ \
		int32 TeamID; \
	};


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_CALLBACK_WRAPPERS
#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyPlayerController(); \
	friend struct Z_Construct_UClass_ALobbyPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALobbyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ALobbyPlayerController)


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALobbyPlayerController(); \
	friend struct Z_Construct_UClass_ALobbyPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALobbyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ALobbyPlayerController)


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyPlayerController(ALobbyPlayerController&&); \
	NO_API ALobbyPlayerController(const ALobbyPlayerController&); \
public:


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyPlayerController(ALobbyPlayerController&&); \
	NO_API ALobbyPlayerController(const ALobbyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPlayerController)


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_12_PROLOG \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_EVENT_PARMS


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_RPC_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_INCLASS \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_CALLBACK_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID June13UE4_Source_June13_Lobby_LobbyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
