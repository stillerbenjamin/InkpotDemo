// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotListLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotStory;
struct FInkpotList;
#ifdef INKPOT_InkpotListLibrary_generated_h
#error "InkpotListLibrary.generated.h already included, missing '#pragma once' in InkpotListLibrary.h"
#endif
#define INKPOT_InkpotListLibrary_generated_h

#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execAll); \
	DECLARE_FUNCTION(execInverse); \
	DECLARE_FUNCTION(execMaxItem); \
	DECLARE_FUNCTION(execMinItem); \
	DECLARE_FUNCTION(execEquals); \
	DECLARE_FUNCTION(execLessThanOrEquals); \
	DECLARE_FUNCTION(execLessThan); \
	DECLARE_FUNCTION(execGreaterThanOrEquals); \
	DECLARE_FUNCTION(execGreaterThan); \
	DECLARE_FUNCTION(execContainsItem); \
	DECLARE_FUNCTION(execContainsList); \
	DECLARE_FUNCTION(execWithout); \
	DECLARE_FUNCTION(execHasIntersection); \
	DECLARE_FUNCTION(execIntersect); \
	DECLARE_FUNCTION(execUnion); \
	DECLARE_FUNCTION(execToStringArray); \
	DECLARE_FUNCTION(execMakeInkpotListFromStringArray); \
	DECLARE_FUNCTION(execMakeInkpotList); \
	DECLARE_FUNCTION(execToString);


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotListLibrary(); \
	friend struct Z_Construct_UClass_UInkpotListLibrary_Statics; \
public: \
	DECLARE_CLASS(UInkpotListLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), INKPOT_API) \
	DECLARE_SERIALIZER(UInkpotListLibrary)


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INKPOT_API UInkpotListLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInkpotListLibrary(UInkpotListLibrary&&); \
	UInkpotListLibrary(const UInkpotListLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INKPOT_API, UInkpotListLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotListLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotListLibrary) \
	INKPOT_API virtual ~UInkpotListLibrary();


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_11_PROLOG
#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INKPOT_API UClass* StaticClass<class UInkpotListLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
