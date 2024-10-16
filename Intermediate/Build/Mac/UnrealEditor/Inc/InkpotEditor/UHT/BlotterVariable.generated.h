// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blotter/BlotterVariable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INKPOTEDITOR_BlotterVariable_generated_h
#error "BlotterVariable.generated.h already included, missing '#pragma once' in BlotterVariable.h"
#endif
#define INKPOTEDITOR_BlotterVariable_generated_h

#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsReadOnly); \
	DECLARE_FUNCTION(execIsIndexEven); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetDisplayValue); \
	DECLARE_FUNCTION(execSetDisplayValue); \
	DECLARE_FUNCTION(execGetName);


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlotterVariable(); \
	friend struct Z_Construct_UClass_UBlotterVariable_Statics; \
public: \
	DECLARE_CLASS(UBlotterVariable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InkpotEditor"), NO_API) \
	DECLARE_SERIALIZER(UBlotterVariable)


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlotterVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlotterVariable(UBlotterVariable&&); \
	UBlotterVariable(const UBlotterVariable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlotterVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlotterVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlotterVariable) \
	NO_API virtual ~UBlotterVariable();


#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_37_PROLOG
#define FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_40_INCLASS_NO_PURE_DECLS \
	FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INKPOTEDITOR_API UClass* StaticClass<class UBlotterVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h


#define FOREACH_ENUM_EBLOTTERVARIABLETYPE(op) \
	op(EBlotterVariableType::None) \
	op(EBlotterVariableType::ChoicePoint) \
	op(EBlotterVariableType::Container) \
	op(EBlotterVariableType::ControlCommand) \
	op(EBlotterVariableType::Divert) \
	op(EBlotterVariableType::Glue) \
	op(EBlotterVariableType::NativeFunctionCall) \
	op(EBlotterVariableType::Tag) \
	op(EBlotterVariableType::ValueBool) \
	op(EBlotterVariableType::ValueDivertTarget) \
	op(EBlotterVariableType::ValueFloat) \
	op(EBlotterVariableType::ValueInt) \
	op(EBlotterVariableType::ValueList) \
	op(EBlotterVariableType::ValueString) \
	op(EBlotterVariableType::ValueVariablePointer) \
	op(EBlotterVariableType::Value) \
	op(EBlotterVariableType::VariableAssignment) \
	op(EBlotterVariableType::VariableReference) \
	op(EBlotterVariableType::Void) \
	op(EBlotterVariableType::Object) \
	op(EBlotterVariableType::ListOrigin) 

enum class EBlotterVariableType : uint8;
template<> struct TIsUEnumClass<EBlotterVariableType> { enum { Value = true }; };
template<> INKPOTEDITOR_API UEnum* StaticEnum<EBlotterVariableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
