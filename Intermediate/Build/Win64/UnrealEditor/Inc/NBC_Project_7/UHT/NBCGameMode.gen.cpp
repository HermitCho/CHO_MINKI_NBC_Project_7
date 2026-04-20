// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBCGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBCGameMode();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBCGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class ANBCGameMode
void ANBCGameMode::StaticRegisterNativesANBCGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCGameMode);
UClass* Z_Construct_UClass_ANBCGameMode_NoRegister()
{
	return ANBCGameMode::StaticClass();
}
struct Z_Construct_UClass_ANBCGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NBCGameMode.h" },
		{ "ModuleRelativePath", "Public/NBCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBCGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCGameMode_Statics::ClassParams = {
	&ANBCGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCGameMode()
{
	if (!Z_Registration_Info_UClass_ANBCGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCGameMode.OuterSingleton, Z_Construct_UClass_ANBCGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCGameMode.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<ANBCGameMode>()
{
	return ANBCGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCGameMode);
ANBCGameMode::~ANBCGameMode() {}
// End Class ANBCGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCGameMode, ANBCGameMode::StaticClass, TEXT("ANBCGameMode"), &Z_Registration_Info_UClass_ANBCGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCGameMode), 4074464049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCGameMode_h_1636728183(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
