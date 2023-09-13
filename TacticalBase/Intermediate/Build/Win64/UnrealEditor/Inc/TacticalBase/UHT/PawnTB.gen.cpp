// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalBase/PawnTB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnTB() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	TACTICALBASE_API UClass* Z_Construct_UClass_APawnTB();
	TACTICALBASE_API UClass* Z_Construct_UClass_APawnTB_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TacticalBase();
// End Cross Module References
	void APawnTB::StaticRegisterNativesAPawnTB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APawnTB);
	UClass* Z_Construct_UClass_APawnTB_NoRegister()
	{
		return APawnTB::StaticClass();
	}
	struct Z_Construct_UClass_APawnTB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawnTB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalBase,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawnTB_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnTB_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PawnTB.h" },
		{ "ModuleRelativePath", "PawnTB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawnTB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnTB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APawnTB_Statics::ClassParams = {
		&APawnTB::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APawnTB_Statics::Class_MetaDataParams), Z_Construct_UClass_APawnTB_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APawnTB()
	{
		if (!Z_Registration_Info_UClass_APawnTB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APawnTB.OuterSingleton, Z_Construct_UClass_APawnTB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APawnTB.OuterSingleton;
	}
	template<> TACTICALBASE_API UClass* StaticClass<APawnTB>()
	{
		return APawnTB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnTB);
	APawnTB::~APawnTB() {}
	struct Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_PawnTB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_PawnTB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APawnTB, APawnTB::StaticClass, TEXT("APawnTB"), &Z_Registration_Info_UClass_APawnTB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APawnTB), 3268173210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_PawnTB_h_4269654082(TEXT("/Script/TacticalBase"),
		Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_PawnTB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_PawnTB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
