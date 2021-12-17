// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ToonTankPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToonTankPlayerController() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_AToonTankPlayerController_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_AToonTankPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	void AToonTankPlayerController::StaticRegisterNativesAToonTankPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AToonTankPlayerController_NoRegister()
	{
		return AToonTankPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AToonTankPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToonTankPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToonTankPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ToonTankPlayerController.h" },
		{ "ModuleRelativePath", "ToonTankPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToonTankPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToonTankPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AToonTankPlayerController_Statics::ClassParams = {
		&AToonTankPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AToonTankPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToonTankPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToonTankPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AToonTankPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AToonTankPlayerController, 3684271989);
	template<> TOONTANKS_API UClass* StaticClass<AToonTankPlayerController>()
	{
		return AToonTankPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AToonTankPlayerController(Z_Construct_UClass_AToonTankPlayerController, &AToonTankPlayerController::StaticClass, TEXT("/Script/ToonTanks"), TEXT("AToonTankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToonTankPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
