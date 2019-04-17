// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDS_GameController_generated_h
#error "GameController.generated.h already included, missing '#pragma once' in GameController.h"
#endif
#define ASTEROIDS_GameController_generated_h

#define Asteroids_Source_Asteroids_GameController_h_12_RPC_WRAPPERS
#define Asteroids_Source_Asteroids_GameController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Asteroids_Source_Asteroids_GameController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameController(); \
	friend ASTEROIDS_API class UClass* Z_Construct_UClass_AGameController(); \
public: \
	DECLARE_CLASS(AGameController, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(AGameController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_Source_Asteroids_GameController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameController(); \
	friend ASTEROIDS_API class UClass* Z_Construct_UClass_AGameController(); \
public: \
	DECLARE_CLASS(AGameController, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(AGameController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_Source_Asteroids_GameController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameController(AGameController&&); \
	NO_API AGameController(const AGameController&); \
public:


#define Asteroids_Source_Asteroids_GameController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameController(AGameController&&); \
	NO_API AGameController(const AGameController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameController)


#define Asteroids_Source_Asteroids_GameController_h_12_PRIVATE_PROPERTY_OFFSET
#define Asteroids_Source_Asteroids_GameController_h_9_PROLOG
#define Asteroids_Source_Asteroids_GameController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_Source_Asteroids_GameController_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteroids_Source_Asteroids_GameController_h_12_RPC_WRAPPERS \
	Asteroids_Source_Asteroids_GameController_h_12_INCLASS \
	Asteroids_Source_Asteroids_GameController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_Source_Asteroids_GameController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_Source_Asteroids_GameController_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteroids_Source_Asteroids_GameController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_Source_Asteroids_GameController_h_12_INCLASS_NO_PURE_DECLS \
	Asteroids_Source_Asteroids_GameController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_Source_Asteroids_GameController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
