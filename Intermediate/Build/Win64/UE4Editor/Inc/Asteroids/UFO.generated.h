// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ASTEROIDS_UFO_generated_h
#error "UFO.generated.h already included, missing '#pragma once' in UFO.h"
#endif
#define ASTEROIDS_UFO_generated_h

#define Asteroids_Source_Asteroids_UFO_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Asteroids_Source_Asteroids_UFO_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Asteroids_Source_Asteroids_UFO_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUFO(); \
	friend ASTEROIDS_API class UClass* Z_Construct_UClass_AUFO(); \
public: \
	DECLARE_CLASS(AUFO, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(AUFO) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_Source_Asteroids_UFO_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUFO(); \
	friend ASTEROIDS_API class UClass* Z_Construct_UClass_AUFO(); \
public: \
	DECLARE_CLASS(AUFO, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(AUFO) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Asteroids_Source_Asteroids_UFO_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUFO(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUFO) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUFO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUFO); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUFO(AUFO&&); \
	NO_API AUFO(const AUFO&); \
public:


#define Asteroids_Source_Asteroids_UFO_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUFO(AUFO&&); \
	NO_API AUFO(const AUFO&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUFO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUFO); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUFO)


#define Asteroids_Source_Asteroids_UFO_h_12_PRIVATE_PROPERTY_OFFSET
#define Asteroids_Source_Asteroids_UFO_h_9_PROLOG
#define Asteroids_Source_Asteroids_UFO_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_Source_Asteroids_UFO_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteroids_Source_Asteroids_UFO_h_12_RPC_WRAPPERS \
	Asteroids_Source_Asteroids_UFO_h_12_INCLASS \
	Asteroids_Source_Asteroids_UFO_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Asteroids_Source_Asteroids_UFO_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Asteroids_Source_Asteroids_UFO_h_12_PRIVATE_PROPERTY_OFFSET \
	Asteroids_Source_Asteroids_UFO_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Asteroids_Source_Asteroids_UFO_h_12_INCLASS_NO_PURE_DECLS \
	Asteroids_Source_Asteroids_UFO_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Asteroids_Source_Asteroids_UFO_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
