// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_EnemyDoor_generated_h
#error "EnemyDoor.generated.h already included, missing '#pragma once' in EnemyDoor.h"
#endif
#define TOONTANKS_EnemyDoor_generated_h

#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenDoor);


#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenDoor);


#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyDoor(); \
	friend struct Z_Construct_UClass_AEnemyDoor_Statics; \
public: \
	DECLARE_CLASS(AEnemyDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AEnemyDoor)


#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyDoor(); \
	friend struct Z_Construct_UClass_AEnemyDoor_Statics; \
public: \
	DECLARE_CLASS(AEnemyDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AEnemyDoor)


#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyDoor(AEnemyDoor&&); \
	NO_API AEnemyDoor(const AEnemyDoor&); \
public:


#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyDoor(AEnemyDoor&&); \
	NO_API AEnemyDoor(const AEnemyDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyDoor)


#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorCenter() { return STRUCT_OFFSET(AEnemyDoor, DoorCenter); } \
	FORCEINLINE static uint32 __PPO__LeftDoor() { return STRUCT_OFFSET(AEnemyDoor, LeftDoor); } \
	FORCEINLINE static uint32 __PPO__RightDoor() { return STRUCT_OFFSET(AEnemyDoor, RightDoor); } \
	FORCEINLINE static uint32 __PPO__enemies() { return STRUCT_OFFSET(AEnemyDoor, enemies); } \
	FORCEINLINE static uint32 __PPO__openDoorOffset() { return STRUCT_OFFSET(AEnemyDoor, openDoorOffset); } \
	FORCEINLINE static uint32 __PPO__isOpen() { return STRUCT_OFFSET(AEnemyDoor, isOpen); }


#define ToonTanks_Source_ToonTanks_EnemyDoor_h_10_PROLOG
#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_INCLASS \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_EnemyDoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_EnemyDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AEnemyDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_EnemyDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
