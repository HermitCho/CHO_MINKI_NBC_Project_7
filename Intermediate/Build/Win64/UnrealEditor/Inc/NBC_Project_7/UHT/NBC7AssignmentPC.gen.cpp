// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBC7AssignmentPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC7AssignmentPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC7AssignmentPC();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC7AssignmentPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class ANBC7AssignmentPC
void ANBC7AssignmentPC::StaticRegisterNativesANBC7AssignmentPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC7AssignmentPC);
UClass* Z_Construct_UClass_ANBC7AssignmentPC_NoRegister()
{
	return ANBC7AssignmentPC::StaticClass();
}
struct Z_Construct_UClass_ANBC7AssignmentPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NBC7AssignmentPC.h" },
		{ "ModuleRelativePath", "Public/NBC7AssignmentPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NBC7AssignmentPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IA_Move\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC7AssignmentPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_Move\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IA_Look\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC7AssignmentPC.h" },
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
		TCppClassTypeTraits<ANBC7AssignmentPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC7AssignmentPC_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC7AssignmentPC, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC7AssignmentPC_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC7AssignmentPC, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC7AssignmentPC_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC7AssignmentPC, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC7AssignmentPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC7AssignmentPC_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC7AssignmentPC_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC7AssignmentPC_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC7AssignmentPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC7AssignmentPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC7AssignmentPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC7AssignmentPC_Statics::ClassParams = {
	&ANBC7AssignmentPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC7AssignmentPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC7AssignmentPC_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC7AssignmentPC_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC7AssignmentPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC7AssignmentPC()
{
	if (!Z_Registration_Info_UClass_ANBC7AssignmentPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC7AssignmentPC.OuterSingleton, Z_Construct_UClass_ANBC7AssignmentPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC7AssignmentPC.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<ANBC7AssignmentPC>()
{
	return ANBC7AssignmentPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC7AssignmentPC);
ANBC7AssignmentPC::~ANBC7AssignmentPC() {}
// End Class ANBC7AssignmentPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBC7AssignmentPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC7AssignmentPC, ANBC7AssignmentPC::StaticClass, TEXT("ANBC7AssignmentPC"), &Z_Registration_Info_UClass_ANBC7AssignmentPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC7AssignmentPC), 3161571586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBC7AssignmentPC_h_2450765348(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBC7AssignmentPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBC7AssignmentPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
