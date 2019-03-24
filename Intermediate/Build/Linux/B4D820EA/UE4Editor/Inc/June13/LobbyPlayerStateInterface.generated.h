// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUNE13_LobbyPlayerStateInterface_generated_h
#error "LobbyPlayerStateInterface.generated.h already included, missing '#pragma once' in LobbyPlayerStateInterface.h"
#endif
#define JUNE13_LobbyPlayerStateInterface_generated_h

#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_RPC_WRAPPERS
#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyPlayerStateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyPlayerStateInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyPlayerStateInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyPlayerStateInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyPlayerStateInterface(ULobbyPlayerStateInterface&&); \
	NO_API ULobbyPlayerStateInterface(const ULobbyPlayerStateInterface&); \
public:


#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyPlayerStateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyPlayerStateInterface(ULobbyPlayerStateInterface&&); \
	NO_API ULobbyPlayerStateInterface(const ULobbyPlayerStateInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyPlayerStateInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyPlayerStateInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyPlayerStateInterface)


#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULobbyPlayerStateInterface(); \
	friend struct Z_Construct_UClass_ULobbyPlayerStateInterface_Statics; \
public: \
	DECLARE_CLASS(ULobbyPlayerStateInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/June13"), NO_API) \
	DECLARE_SERIALIZER(ULobbyPlayerStateInterface)


#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_GENERATED_UINTERFACE_BODY() \
	June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_GENERATED_UINTERFACE_BODY() \
	June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILobbyPlayerStateInterface() {} \
public: \
	typedef ULobbyPlayerStateInterface UClassType; \
	typedef ILobbyPlayerStateInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ILobbyPlayerStateInterface() {} \
public: \
	typedef ULobbyPlayerStateInterface UClassType; \
	typedef ILobbyPlayerStateInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_5_PROLOG
#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_RPC_WRAPPERS \
	June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID June13UE4_Source_June13_Lobby_LobbyPlayerStateInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
