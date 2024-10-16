// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotValueLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInkpotList;
struct FInkpotValue;
#ifdef INKPOT_InkpotValueLibrary_generated_h
#error "InkpotValueLibrary.generated.h already included, missing '#pragma once' in InkpotValueLibrary.h"
#endif
#define INKPOT_InkpotValueLibrary_generated_h

#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInkpotArrayValueAsList); \
	DECLARE_FUNCTION(execInkpotValueAsList); \
	DECLARE_FUNCTION(execInkpotArrayValueAsString); \
	DECLARE_FUNCTION(execInkpotValueAsString); \
	DECLARE_FUNCTION(execMakeStringInkpotValue); \
	DECLARE_FUNCTION(execInkpotArrayValueAsFloat); \
	DECLARE_FUNCTION(execInkpotValueAsFloat); \
	DECLARE_FUNCTION(execMakeFloatInkpotValue); \
	DECLARE_FUNCTION(execInkpotArrayValueAsInt); \
	DECLARE_FUNCTION(execInkpotValueAsInt); \
	DECLARE_FUNCTION(execMakeIntInkpotValue); \
	DECLARE_FUNCTION(execInkpotArrayValueAsBool); \
	DECLARE_FUNCTION(execInkpotValueAsBool); \
	DECLARE_FUNCTION(execMakeBoolInkpotValue); \
	DECLARE_FUNCTION(execDefaultInkpotValue);


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotValueLibrary(); \
	friend struct Z_Construct_UClass_UInkpotValueLibrary_Statics; \
public: \
	DECLARE_CLASS(UInkpotValueLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), INKPOT_API) \
	DECLARE_SERIALIZER(UInkpotValueLibrary)


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INKPOT_API UInkpotValueLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInkpotValueLibrary(UInkpotValueLibrary&&); \
	UInkpotValueLibrary(const UInkpotValueLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INKPOT_API, UInkpotValueLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotValueLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotValueLibrary) \
	INKPOT_API virtual ~UInkpotValueLibrary();


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_10_PROLOG
#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INKPOT_API UClass* StaticClass<class UInkpotValueLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
