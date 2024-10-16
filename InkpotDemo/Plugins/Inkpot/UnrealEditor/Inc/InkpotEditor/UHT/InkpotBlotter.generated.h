// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blotter/InkpotBlotter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlotterString;
class UBlotterVariable;
class UInkpotStory;
#ifdef INKPOTEDITOR_InkpotBlotter_generated_h
#error "InkpotBlotter.generated.h already included, missing '#pragma once' in InkpotBlotter.h"
#endif
#define INKPOTEDITOR_InkpotBlotter_generated_h

#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDebugRefresh); \
	DECLARE_FUNCTION(execOnStoryBegin); \
	DECLARE_FUNCTION(execGetOrigins); \
	DECLARE_FUNCTION(execGetVariables); \
	DECLARE_FUNCTION(execGetChoices); \
	DECLARE_FUNCTION(execGlobalTags); \
	DECLARE_FUNCTION(execGetCurrentTags); \
	DECLARE_FUNCTION(execGetAliveFlowNames);


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_CALLBACK_WRAPPERS
#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotBlotter(); \
	friend struct Z_Construct_UClass_UInkpotBlotter_Statics; \
public: \
	DECLARE_CLASS(UInkpotBlotter, UEditorUtilityWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InkpotEditor"), NO_API) \
	DECLARE_SERIALIZER(UInkpotBlotter)


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotBlotter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInkpotBlotter(UInkpotBlotter&&); \
	UInkpotBlotter(const UInkpotBlotter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotBlotter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotBlotter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotBlotter) \
	NO_API virtual ~UInkpotBlotter();


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_9_PROLOG
#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_CALLBACK_WRAPPERS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_INCLASS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INKPOTEDITOR_API UClass* StaticClass<class UInkpotBlotter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
