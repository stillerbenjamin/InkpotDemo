// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotWatch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotStory;
struct FInkpotValue;
#ifdef INKPOT_InkpotWatch_generated_h
#error "InkpotWatch.generated.h already included, missing '#pragma once' in InkpotWatch.h"
#endif
#define INKPOT_InkpotWatch_generated_h

#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_10_DELEGATE \
INKPOT_API void FOnVariableChangeMulti_DelegateWrapper(const FMulticastScriptDelegate& OnVariableChangeMulti, UInkpotStory* Story, const FString& Variable, FInkpotValue const& NewValue);


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnVariableChange); \
	DECLARE_FUNCTION(execOnBeginStory);


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotWatch(); \
	friend struct Z_Construct_UClass_UInkpotWatch_Statics; \
public: \
	DECLARE_CLASS(UInkpotWatch, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inkpot"), NO_API) \
	DECLARE_SERIALIZER(UInkpotWatch)


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotWatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInkpotWatch(UInkpotWatch&&); \
	UInkpotWatch(const UInkpotWatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotWatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotWatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotWatch) \
	NO_API virtual ~UInkpotWatch();


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_12_PROLOG
#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_15_INCLASS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INKPOT_API UClass* StaticClass<class UInkpotWatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
