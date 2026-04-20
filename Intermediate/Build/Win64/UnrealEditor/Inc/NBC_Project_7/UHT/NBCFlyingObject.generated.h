// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBCFlyingObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef NBC_PROJECT_7_NBCFlyingObject_generated_h
#error "NBCFlyingObject.generated.h already included, missing '#pragma once' in NBCFlyingObject.h"
#endif
#define NBC_PROJECT_7_NBCFlyingObject_generated_h

#define FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCFlyingObject(); \
	friend struct Z_Construct_UClass_ANBCFlyingObject_Statics; \
public: \
	DECLARE_CLASS(ANBCFlyingObject, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_7"), NO_API) \
	DECLARE_SERIALIZER(ANBCFlyingObject)


#define FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCFlyingObject(ANBCFlyingObject&&); \
	ANBCFlyingObject(const ANBCFlyingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCFlyingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCFlyingObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBCFlyingObject) \
	NO_API virtual ~ANBCFlyingObject();


#define FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_15_PROLOG
#define FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_18_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_7_API UClass* StaticClass<class ANBCFlyingObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_7_Source_NBC_Project_7_Public_NBCFlyingObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
