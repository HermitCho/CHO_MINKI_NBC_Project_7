// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBCFlyingObjectPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCFlyingObjectPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBCFlyingObjectPC();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBCFlyingObjectPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class ANBCFlyingObjectPC
void ANBCFlyingObjectPC::StaticRegisterNativesANBCFlyingObjectPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCFlyingObjectPC);
UClass* Z_Construct_UClass_ANBCFlyingObjectPC_NoRegister()
{
	return ANBCFlyingObjectPC::StaticClass();
}
struct Z_Construct_UClass_ANBCFlyingObjectPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NBCFlyingObjectPC.h" },
		{ "ModuleRelativePath", "Public/NBCFlyingObjectPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NBCFlyingObjectPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IA_Move\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCFlyingObjectPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_Move\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IA_Look\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBCFlyingObjectPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_Look\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCFlyingObjectPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCFlyingObjectPC_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObjectPC, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCFlyingObjectPC_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObjectPC, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCFlyingObjectPC_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObjectPC, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBCFlyingObjectPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObjectPC_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObjectPC_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObjectPC_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCFlyingObjectPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBCFlyingObjectPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCFlyingObjectPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCFlyingObjectPC_Statics::ClassParams = {
	&ANBCFlyingObjectPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBCFlyingObjectPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBCFlyingObjectPC_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCFlyingObjectPC_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCFlyingObjectPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCFlyingObjectPC()
{
	if (!Z_Registration_Info_UClass_ANBCFlyingObjectPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCFlyingObjectPC.OuterSingleton, Z_Construct_UClass_ANBCFlyingObjectPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCFlyingObjectPC.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<ANBCFlyingObjectPC>()
{
	return ANBCFlyingObjectPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCFlyingObjectPC);
ANBCFlyingObjectPC::~ANBCFlyingObjectPC() {}
// End Class ANBCFlyingObjectPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObjectPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCFlyingObjectPC, ANBCFlyingObjectPC::StaticClass, TEXT("ANBCFlyingObjectPC"), &Z_Registration_Info_UClass_ANBCFlyingObjectPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCFlyingObjectPC), 1410094660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObjectPC_h_3220783975(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObjectPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObjectPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
