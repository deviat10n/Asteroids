// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Asteroids.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Asteroids() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();

	ASTEROIDS_API class UFunction* Z_Construct_UFunction_AAsteroid_OnHit();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AAsteroid_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AAsteroid();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AAsteroidsGameModeBase_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AAsteroidsGameModeBase();
	ASTEROIDS_API class UClass* Z_Construct_UClass_ABasicCameraController_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_ABasicCameraController();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AGameController_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AGameController();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AHeadsUpDisplay_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AHeadsUpDisplay();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AMyFirstHUD_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AMyFirstHUD();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AMyPlayerState();
	ASTEROIDS_API class UFunction* Z_Construct_UFunction_ASpaceshipPawn_OnHit();
	ASTEROIDS_API class UClass* Z_Construct_UClass_ASpaceshipPawn_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_ASpaceshipPawn();
	ASTEROIDS_API class UFunction* Z_Construct_UFunction_ASpaceshipProjectile_OnHit();
	ASTEROIDS_API class UClass* Z_Construct_UClass_ASpaceshipProjectile_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_ASpaceshipProjectile();
	ASTEROIDS_API class UFunction* Z_Construct_UFunction_AUFO_OnHit();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AUFO_NoRegister();
	ASTEROIDS_API class UClass* Z_Construct_UClass_AUFO();
	ASTEROIDS_API class UPackage* Z_Construct_UPackage__Script_Asteroids();
	void AAsteroid::StaticRegisterNativesAAsteroid()
	{
		UClass* Class = AAsteroid::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AAsteroid::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AAsteroid_OnHit()
	{
		struct Asteroid_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AAsteroid();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(Asteroid_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, Asteroid_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, Asteroid_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, Asteroid_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Asteroid_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, Asteroid_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Asteroid.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to handle the projectile hitting something"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsteroid_NoRegister()
	{
		return AAsteroid::StaticClass();
	}
	UClass* Z_Construct_UClass_AAsteroid()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = AAsteroid::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AAsteroid_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_movementDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("movementDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(movementDirection, AAsteroid), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAsteroid_OnHit(), "OnHit"); // 1235445933
				static TCppClassTypeInfo<TCppClassTypeTraits<AAsteroid> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Asteroid.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Asteroid.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("Category"), TEXT("Asteroid"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ModuleRelativePath"), TEXT("Asteroid.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ToolTip"), TEXT("Direction vector"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroid, 1298301483);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroid(Z_Construct_UClass_AAsteroid, &AAsteroid::StaticClass, TEXT("/Script/Asteroids"), TEXT("AAsteroid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroid);
	void AAsteroidsGameModeBase::StaticRegisterNativesAAsteroidsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAsteroidsGameModeBase_NoRegister()
	{
		return AAsteroidsGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AAsteroidsGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = AAsteroidsGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AAsteroidsGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AsteroidsGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AsteroidsGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroidsGameModeBase, 424577235);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroidsGameModeBase(Z_Construct_UClass_AAsteroidsGameModeBase, &AAsteroidsGameModeBase::StaticClass, TEXT("/Script/Asteroids"), TEXT("AAsteroidsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroidsGameModeBase);
	void ABasicCameraController::StaticRegisterNativesABasicCameraController()
	{
	}
	UClass* Z_Construct_UClass_ABasicCameraController_NoRegister()
	{
		return ABasicCameraController::StaticClass();
	}
	UClass* Z_Construct_UClass_ABasicCameraController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = ABasicCameraController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraComponent, ABasicCameraController), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ABasicCameraController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BasicCameraController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BasicCameraController.h"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("ModuleRelativePath"), TEXT("BasicCameraController.h"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("ToolTip"), TEXT("The camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicCameraController, 3236621767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicCameraController(Z_Construct_UClass_ABasicCameraController, &ABasicCameraController::StaticClass, TEXT("/Script/Asteroids"), TEXT("ABasicCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicCameraController);
	void AGameController::StaticRegisterNativesAGameController()
	{
	}
	UClass* Z_Construct_UClass_AGameController_NoRegister()
	{
		return AGameController::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = AGameController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_movementDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("movementDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(movementDirection, AGameController), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AGameController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameController.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("Category"), TEXT("GameController"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ModuleRelativePath"), TEXT("GameController.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ToolTip"), TEXT("Direction vector"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameController, 3034487837);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameController(Z_Construct_UClass_AGameController, &AGameController::StaticClass, TEXT("/Script/Asteroids"), TEXT("AGameController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameController);
	void AHeadsUpDisplay::StaticRegisterNativesAHeadsUpDisplay()
	{
	}
	UClass* Z_Construct_UClass_AHeadsUpDisplay_NoRegister()
	{
		return AHeadsUpDisplay::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeadsUpDisplay()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = AHeadsUpDisplay::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AHeadsUpDisplay> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HeadsUpDisplay.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HeadsUpDisplay.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeadsUpDisplay, 1696148901);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeadsUpDisplay(Z_Construct_UClass_AHeadsUpDisplay, &AHeadsUpDisplay::StaticClass, TEXT("/Script/Asteroids"), TEXT("AHeadsUpDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeadsUpDisplay);
	void AMyFirstHUD::StaticRegisterNativesAMyFirstHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyFirstHUD_NoRegister()
	{
		return AMyFirstHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyFirstHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = AMyFirstHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_HUDFont = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HUDFont"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HUDFont, AMyFirstHUD), 0x0010000000000000, Z_Construct_UClass_UFont_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyFirstHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyFirstHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyFirstHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_HUDFont, TEXT("ModuleRelativePath"), TEXT("MyFirstHUD.h"));
				MetaData->SetValue(NewProp_HUDFont, TEXT("ToolTip"), TEXT("Font used to render info"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFirstHUD, 2554728045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFirstHUD(Z_Construct_UClass_AMyFirstHUD, &AMyFirstHUD::StaticClass, TEXT("/Script/Asteroids"), TEXT("AMyFirstHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFirstHUD);
	void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
	{
		return AMyPlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPlayerState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerState();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = AMyPlayerState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyPlayerState> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPlayerState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyPlayerState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerState, 1704015933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerState(Z_Construct_UClass_AMyPlayerState, &AMyPlayerState::StaticClass, TEXT("/Script/Asteroids"), TEXT("AMyPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerState);
	void ASpaceshipPawn::StaticRegisterNativesASpaceshipPawn()
	{
		UClass* Class = ASpaceshipPawn::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&ASpaceshipPawn::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ASpaceshipPawn_OnHit()
	{
		struct SpaceshipPawn_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_ASpaceshipPawn();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(SpaceshipPawn_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, SpaceshipPawn_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, SpaceshipPawn_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SpaceshipPawn_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SpaceshipPawn_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, SpaceshipPawn_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SpaceshipPawn.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpaceshipPawn_NoRegister()
	{
		return ASpaceshipPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpaceshipPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = ASpaceshipPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASpaceshipPawn_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_movementDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("movementDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(movementDirection, ASpaceshipPawn), 0x0040000000000001, Z_Construct_UScriptStruct_FVector());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASpaceshipPawn_OnHit(), "OnHit"); // 1557316653
				static TCppClassTypeInfo<TCppClassTypeTraits<ASpaceshipPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpaceshipPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpaceshipPawn.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("Category"), TEXT("SpaceshipPawn"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ModuleRelativePath"), TEXT("SpaceshipPawn.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ToolTip"), TEXT("Direction vector"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceshipPawn, 1906539);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceshipPawn(Z_Construct_UClass_ASpaceshipPawn, &ASpaceshipPawn::StaticClass, TEXT("/Script/Asteroids"), TEXT("ASpaceshipPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceshipPawn);
	void ASpaceshipProjectile::StaticRegisterNativesASpaceshipProjectile()
	{
		UClass* Class = ASpaceshipProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&ASpaceshipProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ASpaceshipProjectile_OnHit()
	{
		struct SpaceshipProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_ASpaceshipProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(SpaceshipProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, SpaceshipProjectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, SpaceshipProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SpaceshipProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SpaceshipProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, SpaceshipProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SpaceshipProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to handle the projectile hitting something"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpaceshipProjectile_NoRegister()
	{
		return ASpaceshipProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpaceshipProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = ASpaceshipProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASpaceshipProjectile_OnHit());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASpaceshipProjectile_OnHit(), "OnHit"); // 2212294532
				static TCppClassTypeInfo<TCppClassTypeTraits<ASpaceshipProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpaceshipProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpaceshipProjectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceshipProjectile, 2258602608);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceshipProjectile(Z_Construct_UClass_ASpaceshipProjectile, &ASpaceshipProjectile::StaticClass, TEXT("/Script/Asteroids"), TEXT("ASpaceshipProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceshipProjectile);
	void AUFO::StaticRegisterNativesAUFO()
	{
		UClass* Class = AUFO::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AUFO::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AUFO_OnHit()
	{
		struct UFO_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AUFO();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(UFO_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, UFO_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, UFO_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, UFO_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, UFO_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, UFO_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("UFO.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to handle the projectile hitting something"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUFO_NoRegister()
	{
		return AUFO::StaticClass();
	}
	UClass* Z_Construct_UClass_AUFO()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Asteroids();
			OuterClass = AUFO::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AUFO_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_movementDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("movementDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(movementDirection, AUFO), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AUFO_OnHit(), "OnHit"); // 1966976671
				static TCppClassTypeInfo<TCppClassTypeTraits<AUFO> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UFO.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UFO.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("Category"), TEXT("UFO"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ModuleRelativePath"), TEXT("UFO.h"));
				MetaData->SetValue(NewProp_movementDirection, TEXT("ToolTip"), TEXT("Direction vector"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUFO, 1008989561);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUFO(Z_Construct_UClass_AUFO, &AUFO::StaticClass, TEXT("/Script/Asteroids"), TEXT("AUFO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUFO);
	UPackage* Z_Construct_UPackage__Script_Asteroids()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Asteroids")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x92EC7953;
			Guid.B = 0xAF0A0725;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
