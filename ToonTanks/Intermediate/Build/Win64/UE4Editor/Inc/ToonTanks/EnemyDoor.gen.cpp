// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/EnemyDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyDoor() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_AEnemyDoor_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_AEnemyDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
	TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyDoor::execOpenDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor();
		P_NATIVE_END;
	}
	void AEnemyDoor::StaticRegisterNativesAEnemyDoor()
	{
		UClass* Class = AEnemyDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenDoor", &AEnemyDoor::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyDoor_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyDoor, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyDoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyDoor_NoRegister()
	{
		return AEnemyDoor::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOpen_MetaData[];
#endif
		static void NewProp_isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openDoorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_openDoorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_enemies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorCenter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyDoor_OpenDoor, "OpenDoor" }, // 3813415169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyDoor.h" },
		{ "ModuleRelativePath", "EnemyDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDoor_Statics::NewProp_isOpen_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "EnemyDoor.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyDoor_Statics::NewProp_isOpen_SetBit(void* Obj)
	{
		((AEnemyDoor*)Obj)->isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyDoor_Statics::NewProp_isOpen = { "isOpen", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyDoor), &Z_Construct_UClass_AEnemyDoor_Statics::NewProp_isOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_isOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_isOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDoor_Statics::NewProp_openDoorOffset_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "EnemyDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyDoor_Statics::NewProp_openDoorOffset = { "openDoorOffset", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyDoor, openDoorOffset), METADATA_PARAMS(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_openDoorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_openDoorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDoor_Statics::NewProp_enemies_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "EnemyDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyDoor_Statics::NewProp_enemies = { "enemies", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyDoor, enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_enemies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyDoor_Statics::NewProp_enemies_Inner = { "enemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABasePawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDoor_Statics::NewProp_RightDoor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyDoor_Statics::NewProp_RightDoor = { "RightDoor", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyDoor, RightDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_RightDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_RightDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDoor_Statics::NewProp_LeftDoor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyDoor_Statics::NewProp_LeftDoor = { "LeftDoor", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyDoor, LeftDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_LeftDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_LeftDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyDoor_Statics::NewProp_DoorCenter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "// Called every frame\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyDoor.h" },
		{ "ToolTip", "Called every frame" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyDoor_Statics::NewProp_DoorCenter = { "DoorCenter", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyDoor, DoorCenter), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_DoorCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDoor_Statics::NewProp_DoorCenter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyDoor_Statics::NewProp_isOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyDoor_Statics::NewProp_openDoorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyDoor_Statics::NewProp_enemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyDoor_Statics::NewProp_enemies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyDoor_Statics::NewProp_RightDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyDoor_Statics::NewProp_LeftDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyDoor_Statics::NewProp_DoorCenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyDoor_Statics::ClassParams = {
		&AEnemyDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyDoor, 3791113924);
	template<> TOONTANKS_API UClass* StaticClass<AEnemyDoor>()
	{
		return AEnemyDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyDoor(Z_Construct_UClass_AEnemyDoor, &AEnemyDoor::StaticClass, TEXT("/Script/ToonTanks"), TEXT("AEnemyDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
