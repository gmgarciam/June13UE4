// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUNE13_LobbyGameMode_generated_h
#error "LobbyGameMode.generated.h already included, missing '#pragma once' in LobbyGameMode.h"
#endif
#define JUNE13_LobbyGameMode_generated_h

#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execServerTravel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ServerTravel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerStartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ServerStartGame(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerTravel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ServerTravel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerStartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ServerStartGame(); \
		P_NATIVE_END; \
	}


#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyGameMode(); \
	friend struct Z_Construct_UClass_ALobbyGameMode_Statics; \
public: \
	DECLARE_CLASS(ALobbyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGameMode)


#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALobbyGameMode(); \
	friend struct Z_Construct_UClass_ALobbyGameMode_Statics; \
public: \
	DECLARE_CLASS(ALobbyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGameMode)


#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyGameMode(ALobbyGameMode&&); \
	NO_API ALobbyGameMode(const ALobbyGameMode&); \
public:


#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyGameMode(ALobbyGameMode&&); \
	NO_API ALobbyGameMode(const ALobbyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGameMode)


#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_PRIVATE_PROPERTY_OFFSET
#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_13_PROLOG
#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_RPC_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_INCLASS \
	June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_INCLASS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID June13UE4_Source_June13_Lobby_LobbyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
