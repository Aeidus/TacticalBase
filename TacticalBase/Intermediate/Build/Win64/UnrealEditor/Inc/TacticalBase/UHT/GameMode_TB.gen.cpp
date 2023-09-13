// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacticalBase/GameMode_TB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMode_TB() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TACTICALBASE_API UClass* Z_Construct_UClass_AGameMode_TB();
	TACTICALBASE_API UClass* Z_Construct_UClass_AGameMode_TB_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TacticalBase();
// End Cross Module References
	void AGameMode_TB::StaticRegisterNativesAGameMode_TB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameMode_TB);
	UClass* Z_Construct_UClass_AGameMode_TB_NoRegister()
	{
		return AGameMode_TB::StaticClass();
	}
	struct Z_Construct_UClass_AGameMode_TB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameMode_TB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TacticalBase,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_TB_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_TB_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode_TB.h" },
		{ "ModuleRelativePath", "GameMode_TB.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameMode_TB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMode_TB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameMode_TB_Statics::ClassParams = {
		&AGameMode_TB::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_TB_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameMode_TB_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGameMode_TB()
	{
		if (!Z_Registration_Info_UClass_AGameMode_TB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameMode_TB.OuterSingleton, Z_Construct_UClass_AGameMode_TB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameMode_TB.OuterSingleton;
	}
	template<> TACTICALBASE_API UClass* StaticClass<AGameMode_TB>()
	{
		return AGameMode_TB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMode_TB);
	AGameMode_TB::~AGameMode_TB() {}
	struct Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_GameMode_TB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_GameMode_TB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameMode_TB, AGameMode_TB::StaticClass, TEXT("AGameMode_TB"), &Z_Registration_Info_UClass_AGameMode_TB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameMode_TB), 930054581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_GameMode_TB_h_545742447(TEXT("/Script/TacticalBase"),
		Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_GameMode_TB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TacticalBase_Source_TacticalBase_GameMode_TB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
