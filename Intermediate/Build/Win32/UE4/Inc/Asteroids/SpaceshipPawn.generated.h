// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDS_SpaceshipPawn_generated_h
#error "SpaceshipPawn.generated.h already included, missing '#pragma once' in SpaceshipPawn.h"
#endif
#define ASTEROIDS_SpaceshipPawn_generated_h

#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_RPC_WRAPPERS
#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceshipPawn(); \
	friend ASTEROIDS_API class UClass* Z_Construct_UClass_ASpaceshipPawn(); \
public: \
	DECLARE_CLASS(ASpaceshipPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(ASpaceshipPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASpaceshipPawn(); \
	friend ASTEROIDS_API class UClass* Z_Construct_UClass_ASpaceshipPawn(); \
public: \
	DECLARE_CLASS(ASpaceshipPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(ASpaceshipPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceshipPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceshipPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceshipPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceshipPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceshipPawn(ASpaceshipPawn&&); \
	NO_API ASpaceshipPawn(const ASpaceshipPawn&); \
public:


#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceshipPawn(ASpaceshipPawn&&); \
	NO_API ASpaceshipPawn(const ASpaceshipPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceshipPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceshipPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceshipPawn)


#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__movementDirection() { return STRUCT_OFFSET(ASpaceshipPawn, movementDirection); }


#define Asteroids_Source_Asteroids_SpaceshipPawn_h_15_PROLOG
#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_Source_Asteroids_SpaceshipPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	Asteroids_Source_Asteroids_SpaceshipPawn_h_18_RPC_WRAPPERS \
	Asteroids_Source_Asteroids_SpaceshipPawn_h_18_INCLASS \
	Asteroids_Source_Asteroids_SpaceshipPawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_Source_Asteroids_SpaceshipPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_Source_Asteroids_SpaceshipPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	Asteroids_Source_Asteroids_SpaceshipPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_Source_Asteroids_SpaceshipPawn_h_18_INCLASS_NO_PURE_DECLS \
	Asteroids_Source_Asteroids_SpaceshipPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_Source_Asteroids_SpaceshipPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
