// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBCFlyingObject.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCFlyingObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBCFlyingObject();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBCFlyingObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class ANBCFlyingObject Function Look
struct Z_Construct_UFunction_ANBCFlyingObject_Look_Statics
{
	struct NBCFlyingObject_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCFlyingObject_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCFlyingObject, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::NBCFlyingObject_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::NBCFlyingObject_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCFlyingObject_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCFlyingObject_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCFlyingObject::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBCFlyingObject Function Look

// Begin Class ANBCFlyingObject Function Move
struct Z_Construct_UFunction_ANBCFlyingObject_Move_Statics
{
	struct NBCFlyingObject_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCFlyingObject_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCFlyingObject, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::NBCFlyingObject_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::NBCFlyingObject_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCFlyingObject_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCFlyingObject_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCFlyingObject::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBCFlyingObject Function Move

// Begin Class ANBCFlyingObject
void ANBCFlyingObject::StaticRegisterNativesANBCFlyingObject()
{
	UClass* Class = ANBCFlyingObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &ANBCFlyingObject::execLook },
		{ "Move", &ANBCFlyingObject::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCFlyingObject);
UClass* Z_Construct_UClass_ANBCFlyingObject_NoRegister()
{
	return ANBCFlyingObject::StaticClass();
}
struct Z_Construct_UClass_ANBCFlyingObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NBCFlyingObject.h" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookSensitivity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControlMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/NBCFlyingObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControlMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBCFlyingObject_Look, "Look" }, // 940420803
		{ &Z_Construct_UFunction_ANBCFlyingObject_Move, "Move" }, // 3154246675
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCFlyingObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObject, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObject, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObject, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObject, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObject, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_LookSensitivity = { "LookSensitivity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObject, LookSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookSensitivity_MetaData), NewProp_LookSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObject, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_AirControlMultiplier = { "AirControlMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBCFlyingObject, AirControlMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControlMultiplier_MetaData), NewProp_AirControlMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBCFlyingObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_LookSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBCFlyingObject_Statics::NewProp_AirControlMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCFlyingObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBCFlyingObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCFlyingObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCFlyingObject_Statics::ClassParams = {
	&ANBCFlyingObject::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANBCFlyingObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBCFlyingObject_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCFlyingObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCFlyingObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCFlyingObject()
{
	if (!Z_Registration_Info_UClass_ANBCFlyingObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCFlyingObject.OuterSingleton, Z_Construct_UClass_ANBCFlyingObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCFlyingObject.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<ANBCFlyingObject>()
{
	return ANBCFlyingObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCFlyingObject);
ANBCFlyingObject::~ANBCFlyingObject() {}
// End Class ANBCFlyingObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCFlyingObject, ANBCFlyingObject::StaticClass, TEXT("ANBCFlyingObject"), &Z_Registration_Info_UClass_ANBCFlyingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCFlyingObject), 1695624288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_2254430988(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
