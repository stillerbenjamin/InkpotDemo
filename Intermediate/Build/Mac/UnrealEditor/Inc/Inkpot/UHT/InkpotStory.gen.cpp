// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotStory.h"
#include "Inkpot/Public/Inkpot/InkpotList.h"
#include "Inkpot/Public/Inkpot/InkpotValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotStory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotLine_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotList();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Delegate FOnStoryContinue
struct Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnStoryContinue_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnStoryContinue_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnStoryContinue__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStoryContinue_DelegateWrapper(const FMulticastScriptDelegate& OnStoryContinue, UInkpotStory* Story)
{
	struct _Script_Inkpot_eventOnStoryContinue_Parms
	{
		UInkpotStory* Story;
	};
	_Script_Inkpot_eventOnStoryContinue_Parms Parms;
	Parms.Story=Story;
	OnStoryContinue.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStoryContinue

// Begin Delegate FOnMakeChoice
struct Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnMakeChoice_Parms
	{
		UInkpotStory* Story;
		UInkpotChoice* Choice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnMakeChoice_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnMakeChoice_Parms, Choice), Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Choice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnMakeChoice__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::_Script_Inkpot_eventOnMakeChoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::_Script_Inkpot_eventOnMakeChoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMakeChoice_DelegateWrapper(const FMulticastScriptDelegate& OnMakeChoice, UInkpotStory* Story, UInkpotChoice* Choice)
{
	struct _Script_Inkpot_eventOnMakeChoice_Parms
	{
		UInkpotStory* Story;
		UInkpotChoice* Choice;
	};
	_Script_Inkpot_eventOnMakeChoice_Parms Parms;
	Parms.Story=Story;
	Parms.Choice=Choice;
	OnMakeChoice.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMakeChoice

// Begin Delegate FOnChoosePath
struct Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnChoosePath_Parms
	{
		UInkpotStory* Story;
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnChoosePath_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnChoosePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnChoosePath__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::_Script_Inkpot_eventOnChoosePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::_Script_Inkpot_eventOnChoosePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChoosePath_DelegateWrapper(const FMulticastScriptDelegate& OnChoosePath, UInkpotStory* Story, const FString& Path)
{
	struct _Script_Inkpot_eventOnChoosePath_Parms
	{
		UInkpotStory* Story;
		FString Path;
	};
	_Script_Inkpot_eventOnChoosePath_Parms Parms;
	Parms.Story=Story;
	Parms.Path=Path;
	OnChoosePath.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChoosePath

// Begin Delegate FOnSwitchFlow
struct Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnSwitchFlow_Parms
	{
		UInkpotStory* Story;
		FString Flow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Flow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnSwitchFlow_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnSwitchFlow_Parms, Flow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flow_MetaData), NewProp_Flow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnSwitchFlow__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::_Script_Inkpot_eventOnSwitchFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::_Script_Inkpot_eventOnSwitchFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSwitchFlow_DelegateWrapper(const FMulticastScriptDelegate& OnSwitchFlow, UInkpotStory* Story, const FString& Flow)
{
	struct _Script_Inkpot_eventOnSwitchFlow_Parms
	{
		UInkpotStory* Story;
		FString Flow;
	};
	_Script_Inkpot_eventOnSwitchFlow_Parms Parms;
	Parms.Story=Story;
	Parms.Flow=Flow;
	OnSwitchFlow.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSwitchFlow

// Begin Delegate FOnInkpotVariableChange
struct Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnInkpotVariableChange_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, NewValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnInkpotVariableChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::_Script_Inkpot_eventOnInkpotVariableChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::_Script_Inkpot_eventOnInkpotVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInkpotVariableChange_DelegateWrapper(const FScriptDelegate& OnInkpotVariableChange, UInkpotStory* Story, const FString& Variable, FInkpotValue const& NewValue)
{
	struct _Script_Inkpot_eventOnInkpotVariableChange_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue NewValue;
	};
	_Script_Inkpot_eventOnInkpotVariableChange_Parms Parms;
	Parms.Story=Story;
	Parms.Variable=Variable;
	Parms.NewValue=NewValue;
	OnInkpotVariableChange.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnInkpotVariableChange

// Begin Delegate FInkpotExternalFunction
struct Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventInkpotExternalFunction_Parms
	{
		TArray<FInkpotValue> Values;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventInkpotExternalFunction_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 2508912288
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventInkpotExternalFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "InkpotExternalFunction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::_Script_Inkpot_eventInkpotExternalFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::_Script_Inkpot_eventInkpotExternalFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FInkpotValue FInkpotExternalFunction_DelegateWrapper(const FScriptDelegate& InkpotExternalFunction, TArray<FInkpotValue> const& Values)
{
	struct _Script_Inkpot_eventInkpotExternalFunction_Parms
	{
		TArray<FInkpotValue> Values;
		FInkpotValue ReturnValue;
	};
	_Script_Inkpot_eventInkpotExternalFunction_Parms Parms;
	Parms.Values=Values;
	InkpotExternalFunction.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FInkpotExternalFunction

// Begin Delegate FOnStoryLoadJSON
struct Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnStoryLoadJSON_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnStoryLoadJSON_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnStoryLoadJSON__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryLoadJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryLoadJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStoryLoadJSON_DelegateWrapper(const FMulticastScriptDelegate& OnStoryLoadJSON, UInkpotStory* Story)
{
	struct _Script_Inkpot_eventOnStoryLoadJSON_Parms
	{
		UInkpotStory* Story;
	};
	_Script_Inkpot_eventOnStoryLoadJSON_Parms Parms;
	Parms.Story=Story;
	OnStoryLoadJSON.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStoryLoadJSON

// Begin Class UInkpotStory Function BindExternalFunction
struct Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics
{
	struct InkpotStory_eventBindExternalFunction_Parms
	{
		FString FunctionName;
		FScriptDelegate Function;
		bool bLookAheadSafe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * BindExternalFunction\n\x09 * Binds a blueprint or C++ function as an external call from Ink. \n\x09 *\n\x09 * @param FunctionName - Name of the function as it will be called from the context of the Ink script.\n\x09 * @param Function - Function, event or delegate to be called.\n\x09 * @param bLookAheadSafe - Whether the ink VM can safely call this function when parsing future content. \n\x09 *                        If your function is being called twice, set this to false.\n\x09 */" },
#endif
		{ "CPP_Default_bLookAheadSafe", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BindExternalFunction\nBinds a blueprint or C++ function as an external call from Ink.\n\n@param FunctionName - Name of the function as it will be called from the context of the Ink script.\n@param Function - Function, event or delegate to be called.\n@param bLookAheadSafe - Whether the ink VM can safely call this function when parsing future content.\n                       If your function is being called twice, set this to false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "DisplayName", "Function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Function;
	static void NewProp_bLookAheadSafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLookAheadSafe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventBindExternalFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventBindExternalFunction_Parms, Function), Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) }; // 107583929
void Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe_SetBit(void* Obj)
{
	((InkpotStory_eventBindExternalFunction_Parms*)Obj)->bLookAheadSafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe = { "bLookAheadSafe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventBindExternalFunction_Parms), &Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "BindExternalFunction", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::InkpotStory_eventBindExternalFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::InkpotStory_eventBindExternalFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_BindExternalFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execBindExternalFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Function);
	P_GET_UBOOL(Z_Param_bLookAheadSafe);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindExternalFunction(Z_Param_FunctionName,FInkpotExternalFunction(Z_Param_Function),Z_Param_bLookAheadSafe);
	P_NATIVE_END;
}
// End Class UInkpotStory Function BindExternalFunction

// Begin Class UInkpotStory Function CanContinue
struct Z_Construct_UFunction_UInkpotStory_CanContinue_Statics
{
	struct InkpotStory_eventCanContinue_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * CanContinue\n\x09 * Tests if the story can continue - the story still has content, and no choices. \n\x09 *\n\x09 * @returns True if there is content, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CanContinue\nTests if the story can continue - the story still has content, and no choices.\n\n@returns True if there is content, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventCanContinue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventCanContinue_Parms), &Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "CanContinue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::InkpotStory_eventCanContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::InkpotStory_eventCanContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_CanContinue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execCanContinue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanContinue();
	P_NATIVE_END;
}
// End Class UInkpotStory Function CanContinue

// Begin Class UInkpotStory Function ChooseChoice
struct Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics
{
	struct InkpotStory_eventChooseChoice_Parms
	{
		UInkpotChoice* Choice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChooseChoice\n\x09 * Choose a choice at a decision point in the story.\n\x09 *\n\x09 * @param Choice - A choice, typiclaly from the results given by GetCurrentChoices. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChooseChoice\nChoose a choice at a decision point in the story.\n\n@param Choice - A choice, typiclaly from the results given by GetCurrentChoices." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChooseChoice_Parms, Choice), Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::NewProp_Choice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChooseChoice", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::InkpotStory_eventChooseChoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::InkpotStory_eventChooseChoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChooseChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChooseChoice)
{
	P_GET_OBJECT(UInkpotChoice,Z_Param_Choice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseChoice(Z_Param_Choice);
	P_NATIVE_END;
}
// End Class UInkpotStory Function ChooseChoice

// Begin Class UInkpotStory Function ChooseChoiceIndex
struct Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics
{
	struct InkpotStory_eventChooseChoiceIndex_Parms
	{
		int32 Choice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChooseChoiceIndex\n\x09 * Choose a choice at a decision point in the story.\n\x09 *\n\x09 * @param Choice - An index into the array returned by GetCurrentChoices. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChooseChoiceIndex\nChoose a choice at a decision point in the story.\n\n@param Choice - An index into the array returned by GetCurrentChoices." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Choice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChooseChoiceIndex_Parms, Choice), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::NewProp_Choice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChooseChoiceIndex", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::InkpotStory_eventChooseChoiceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::InkpotStory_eventChooseChoiceIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChooseChoiceIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Choice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseChoiceIndex(Z_Param_Choice);
	P_NATIVE_END;
}
// End Class UInkpotStory Function ChooseChoiceIndex

// Begin Class UInkpotStory Function ChoosePath
struct Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics
{
	struct InkpotStory_eventChoosePath_Parms
	{
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChoosePath\n\x09 * Choose a new point of execution for the current flow.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to start.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChoosePath\nChoose a new point of execution for the current flow.\n\n@param Path - Knot and\\or stitch of where to start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChoosePath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::InkpotStory_eventChoosePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::InkpotStory_eventChoosePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChoosePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChoosePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChoosePath(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UInkpotStory Function ChoosePath

// Begin Class UInkpotStory Function ChoosePathString
struct Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics
{
	struct InkpotStory_eventChoosePathString_Parms
	{
		FString Path;
		TArray<FInkpotValue> Values;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ChoosePathString\n\x09 * Choose a new point of execution for the current flow. Passing paramters to the story.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to start.\n\x09 * @param Values - Array of values to pass to the knot\\stitch.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChoosePathString\nChoose a new point of execution for the current flow. Passing paramters to the story.\n\n@param Path - Knot and\\or stitch of where to start.\n@param Values - Array of values to pass to the knot\\stitch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathString_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathString_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChoosePathString", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::InkpotStory_eventChoosePathString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::InkpotStory_eventChoosePathString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ChoosePathString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execChoosePathString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChoosePathString(Z_Param_Path,Z_Param_Out_Values);
	P_NATIVE_END;
}
// End Class UInkpotStory Function ChoosePathString

// Begin Class UInkpotStory Function ClearAllVariableObservers
struct Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics
{
	struct InkpotStory_eventClearAllVariableObservers_Parms
	{
		FString Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ClearAllVariableObservers\n\x09 * Clears all delegate bindings for the named variable.\n\x09 *\n\x09 * @param Variable - The name of the variable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ClearAllVariableObservers\nClears all delegate bindings for the named variable.\n\n@param Variable - The name of the variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearAllVariableObservers_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ClearAllVariableObservers", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::InkpotStory_eventClearAllVariableObservers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::InkpotStory_eventClearAllVariableObservers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execClearAllVariableObservers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllVariableObservers(Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UInkpotStory Function ClearAllVariableObservers

// Begin Class UInkpotStory Function ClearVariableChange
struct Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics
{
	struct InkpotStory_eventClearVariableChange_Parms
	{
		const UObject* Owner;
		FString Variable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ClearVariableChange\n\x09 * Clears delegate binding created by SetOnVariableChange.\n\x09 *\n\x09 * @param Owner - Object that initially called SetOnVariableChange\n\x09 * @param Variable - The name of the variable.\n\x09 */" },
#endif
		{ "DefaultToSelf", "Owner" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ClearVariableChange\nClears delegate binding created by SetOnVariableChange.\n\n@param Owner - Object that initially called SetOnVariableChange\n@param Variable - The name of the variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearVariableChange_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventClearVariableChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventClearVariableChange_Parms), &Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ClearVariableChange", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::InkpotStory_eventClearVariableChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::InkpotStory_eventClearVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ClearVariableChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execClearVariableChange)
{
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearVariableChange(Z_Param_Owner,Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UInkpotStory Function ClearVariableChange

// Begin Class UInkpotStory Function Continue
struct Z_Construct_UFunction_UInkpotStory_Continue_Statics
{
	struct InkpotStory_eventContinue_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Continue\n\x09 * Executes story script until choices or a newline are encountered.\n\x09 *\n\x09 * @returns The current line of text for the story.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue\nExecutes story script until choices or a newline are encountered.\n\n@returns The current line of text for the story." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_Continue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_Continue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_Continue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "Continue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_Continue_Statics::InkpotStory_eventContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_Continue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_Continue_Statics::InkpotStory_eventContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_Continue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_Continue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execContinue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->Continue();
	P_NATIVE_END;
}
// End Class UInkpotStory Function Continue

// Begin Class UInkpotStory Function ContinueMaximally
struct Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics
{
	struct InkpotStory_eventContinueMaximally_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContinueMaximally\n\x09 * Executes story script until choice or no more content.\n\x09 *\n\x09 * @returns The collated lines of text up to the point of termination.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContinueMaximally\nExecutes story script until choice or no more content.\n\n@returns The collated lines of text up to the point of termination." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximally_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ContinueMaximally", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::InkpotStory_eventContinueMaximally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::InkpotStory_eventContinueMaximally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ContinueMaximally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execContinueMaximally)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ContinueMaximally();
	P_NATIVE_END;
}
// End Class UInkpotStory Function ContinueMaximally

// Begin Class UInkpotStory Function ContinueMaximallyAtPath
struct Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics
{
	struct InkpotStory_eventContinueMaximallyAtPath_Parms
	{
		FString Path;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContinueMaximallyAtMath\n\x09 * Executes story script until choice or no more content, from a specified point in the story.\n\x09 *\n\x09 * @param Path - The knot and\\or the stitch to start the story at, \n\x09 * @returns The collated lines of text up to the point of termination.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContinueMaximallyAtMath\nExecutes story script until choice or no more content, from a specified point in the story.\n\n@param Path - The knot and\\or the stitch to start the story at,\n@returns The collated lines of text up to the point of termination." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximallyAtPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximallyAtPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ContinueMaximallyAtPath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::InkpotStory_eventContinueMaximallyAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::InkpotStory_eventContinueMaximallyAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execContinueMaximallyAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ContinueMaximallyAtPath(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UInkpotStory Function ContinueMaximallyAtPath

// Begin Class UInkpotStory Function DumpContentAtKnot
struct Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics
{
	struct InkpotStory_eventDumpContentAtKnot_Parms
	{
		FString InName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DumpContentAtKnot\n\x09 * Writes all Ink opcodes for content at specified Knot to debug log. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DumpContentAtKnot\nWrites all Ink opcodes for content at specified Knot to debug log." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventDumpContentAtKnot_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::NewProp_InName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "DumpContentAtKnot", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::InkpotStory_eventDumpContentAtKnot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::InkpotStory_eventDumpContentAtKnot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execDumpContentAtKnot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpContentAtKnot(Z_Param_InName);
	P_NATIVE_END;
}
// End Class UInkpotStory Function DumpContentAtKnot

// Begin Class UInkpotStory Function DumpContentAtPath
struct Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics
{
	struct InkpotStory_eventDumpContentAtPath_Parms
	{
		FString InName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DumpContentAtPath\n\x09 * Writes all Ink opcodes for content at specified Knot & Stitch to debug log. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DumpContentAtPath\nWrites all Ink opcodes for content at specified Knot & Stitch to debug log." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventDumpContentAtPath_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::NewProp_InName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "DumpContentAtPath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::InkpotStory_eventDumpContentAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::InkpotStory_eventDumpContentAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_DumpContentAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_DumpContentAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execDumpContentAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpContentAtPath(Z_Param_InName);
	P_NATIVE_END;
}
// End Class UInkpotStory Function DumpContentAtPath

// Begin Class UInkpotStory Function DumpDebug
struct Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DumpDebug\n\x09 * Writes current state of InkVM to debug log. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DumpDebug\nWrites current state of InkVM to debug log." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "DumpDebug", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInkpotStory_DumpDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_DumpDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execDumpDebug)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpDebug();
	P_NATIVE_END;
}
// End Class UInkpotStory Function DumpDebug

// Begin Class UInkpotStory Function DumpMainContent
struct Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DumpMainContent\n\x09 * Writes all Ink opcodes for content of current story to debug log. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DumpMainContent\nWrites all Ink opcodes for content of current story to debug log." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "DumpMainContent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInkpotStory_DumpMainContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_DumpMainContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execDumpMainContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpMainContent();
	P_NATIVE_END;
}
// End Class UInkpotStory Function DumpMainContent

// Begin Class UInkpotStory Function EvaluateFunction
struct Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics
{
	struct InkpotStory_eventEvaluateFunction_Parms
	{
		FString FunctionName;
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
		FString CapturedText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * EvaluateFunction\n\x09 * Evaluates a function defined in Ink script from Blueprint or C++. \n\x09 *\n\x09 * @param FunctionName - Name of the function to call in the script.\n\x09 * @param InValues - The parameters to pass into the function\n\x09 * @param ReturnValue - The to return from the function.\n\x09 * @param CapturedText - Any text that the function may generated in the normal ink output way\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EvaluateFunction\nEvaluates a function defined in Ink script from Blueprint or C++.\n\n@param FunctionName - Name of the function to call in the script.\n@param InValues - The parameters to pass into the function\n@param ReturnValue - The to return from the function.\n@param CapturedText - Any text that the function may generated in the normal ink output way" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CapturedText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvaluateFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvaluateFunction_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 2508912288
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvaluateFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_CapturedText = { "CapturedText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventEvaluateFunction_Parms, CapturedText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::NewProp_CapturedText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "EvaluateFunction", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::InkpotStory_eventEvaluateFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::InkpotStory_eventEvaluateFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_EvaluateFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_EvaluateFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execEvaluateFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_ReturnValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CapturedText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EvaluateFunction(Z_Param_FunctionName,Z_Param_Out_InValues,Z_Param_Out_ReturnValue,Z_Param_Out_CapturedText);
	P_NATIVE_END;
}
// End Class UInkpotStory Function EvaluateFunction

// Begin Class UInkpotStory Function GatherAllStrings
struct Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics
{
	struct InkpotStory_eventGatherAllStrings_Parms
	{
		TMap<FString,FString> OutStrings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GatherAllStrings\n\x09 * Walks the whole of the story and finds all string definitions. \n\x09 * Write result to map, key=id, value=string found. id generated from knot and stitch name\n\x09 *\n\x09 * @param OutStrings - Map to write the strings found into.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GatherAllStrings\nWalks the whole of the story and finds all string definitions.\nWrite result to map, key=id, value=string found. id generated from knot and stitch name\n\n@param OutStrings - Map to write the strings found into." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutStrings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutStrings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutStrings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings_ValueProp = { "OutStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings_Key_KeyProp = { "OutStrings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings = { "OutStrings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGatherAllStrings_Parms, OutStrings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::NewProp_OutStrings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GatherAllStrings", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::InkpotStory_eventGatherAllStrings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::InkpotStory_eventGatherAllStrings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GatherAllStrings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GatherAllStrings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGatherAllStrings)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutStrings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GatherAllStrings(Z_Param_Out_OutStrings);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GatherAllStrings

// Begin Class UInkpotStory Function GetAliveFlowCount
struct Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics
{
	struct InkpotStory_eventGetAliveFlowCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetAliveFlowCount\n\x09 * Gets a the number of flows that are alive.\n\x09 *\n\x09 * @returns Alive flow count.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetAliveFlowCount\nGets a the number of flows that are alive.\n\n@returns Alive flow count." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetAliveFlowCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetAliveFlowCount", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::InkpotStory_eventGetAliveFlowCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::InkpotStory_eventGetAliveFlowCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetAliveFlowCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAliveFlowCount();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetAliveFlowCount

// Begin Class UInkpotStory Function GetAliveFlowNames
struct Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics
{
	struct InkpotStory_eventGetAliveFlowNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetAliveFlowNames\n\x09 * Gets a list of all the flows that are alive.\n\x09 *\n\x09 * @returns Array of flow names.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetAliveFlowNames\nGets a list of all the flows that are alive.\n\n@returns Array of flow names." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetAliveFlowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetAliveFlowNames", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::InkpotStory_eventGetAliveFlowNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::InkpotStory_eventGetAliveFlowNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetAliveFlowNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAliveFlowNames();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetAliveFlowNames

// Begin Class UInkpotStory Function GetBool
struct Z_Construct_UFunction_UInkpotStory_GetBool_Statics
{
	struct InkpotStory_eventGetBool_Parms
	{
		FString Variable;
		bool ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetBool\n\x09 * Gets the value of a boolean variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetBool\nGets the value of a boolean variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetBool_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetBool_Parms), &Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetBool_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetBool_Parms), &Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::InkpotStory_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::InkpotStory_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBool(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetBool

// Begin Class UInkpotStory Function GetCurrentChoices
struct Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics
{
	struct InkpotStory_eventGetCurrentChoices_Parms
	{
		TArray<UInkpotChoice*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentChoices\n\x09 * Returns the current choices of the story as an array of UInkpotChoices. ( localisation to be implemented ) \n\x09 * UInkpotChoices has both the text for the choice and the tags associated with them. \n\x09 * Mainly for use with UMG list types.\n\x09 *\n\x09 * @returns True is the story has choices to display, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentChoices\nReturns the current choices of the story as an array of UInkpotChoices. ( localisation to be implemented )\nUInkpotChoices has both the text for the choice and the tags associated with them.\nMainly for use with UMG list types.\n\n@returns True is the story has choices to display, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentChoices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentChoices", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::InkpotStory_eventGetCurrentChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::InkpotStory_eventGetCurrentChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentChoices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInkpotChoice*>*)Z_Param__Result=P_THIS->GetCurrentChoices();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetCurrentChoices

// Begin Class UInkpotStory Function GetCurrentFlowName
struct Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics
{
	struct InkpotStory_eventGetCurrentFlowName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentFlowName\n\x09 * Gets the name of the currently active flow.\n\x09 *\n\x09 * @returns The flowname of the active flow.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentFlowName\nGets the name of the currently active flow.\n\n@returns The flowname of the active flow." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentFlowName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentFlowName", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::InkpotStory_eventGetCurrentFlowName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::InkpotStory_eventGetCurrentFlowName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentFlowName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentFlowName();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetCurrentFlowName

// Begin Class UInkpotStory Function GetCurrentLine
struct Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics
{
	struct InkpotStory_eventGetCurrentLine_Parms
	{
		UInkpotLine* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentLine\n\x09 * Gets the localised line of text for the story, with tags. ( localisation to be implemented ) \n\x09 * Mainly for use with UMG list types. \n\x09 *\n\x09 * @returns The current line of text, wrapped as a UInkpotLine.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentLine\nGets the localised line of text for the story, with tags. ( localisation to be implemented )\nMainly for use with UMG list types.\n\n@returns The current line of text, wrapped as a UInkpotLine." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentLine_Parms, ReturnValue), Z_Construct_UClass_UInkpotLine_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentLine", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::InkpotStory_eventGetCurrentLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::InkpotStory_eventGetCurrentLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInkpotLine**)Z_Param__Result=P_THIS->GetCurrentLine();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetCurrentLine

// Begin Class UInkpotStory Function GetCurrentTags
struct Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics
{
	struct InkpotStory_eventGetCurrentTags_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentTags\n\x09 * Gets a tags that are present for the current state of the story.\n\x09 *\n\x09 * @returns Array of tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentTags\nGets a tags that are present for the current state of the story.\n\n@returns Array of tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentTags", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::InkpotStory_eventGetCurrentTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::InkpotStory_eventGetCurrentTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetCurrentTags();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetCurrentTags

// Begin Class UInkpotStory Function GetCurrentText
struct Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics
{
	struct InkpotStory_eventGetCurrentText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetCurrentText\n\x09 * Gets the current line of text for the story. \n\x09 *\n\x09 * @returns The current line of text.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetCurrentText\nGets the current line of text for the story.\n\n@returns The current line of text." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentText", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::InkpotStory_eventGetCurrentText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::InkpotStory_eventGetCurrentText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetCurrentText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentText();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetCurrentText

// Begin Class UInkpotStory Function GetFloat
struct Z_Construct_UFunction_UInkpotStory_GetFloat_Statics
{
	struct InkpotStory_eventGetFloat_Parms
	{
		FString Variable;
		float ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetFloat\n\x09 * Gets the value of a floating variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetFloat\nGets the value of a floating variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetFloat_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetFloat_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetFloat_Parms), &Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::InkpotStory_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::InkpotStory_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFloat(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetFloat

// Begin Class UInkpotStory Function GetInt
struct Z_Construct_UFunction_UInkpotStory_GetInt_Statics
{
	struct InkpotStory_eventGetInt_Parms
	{
		FString Variable;
		int32 ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetInt\n\x09 * Gets the value of an Integer variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetInt\nGets the value of an Integer variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetInt_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetInt_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetInt_Parms), &Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetInt", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::InkpotStory_eventGetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::InkpotStory_eventGetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInt(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetInt

// Begin Class UInkpotStory Function GetList
struct Z_Construct_UFunction_UInkpotStory_GetList_Statics
{
	struct InkpotStory_eventGetList_Parms
	{
		FString Variable;
		FInkpotList ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetList\n\x09 * Gets the value of an Ink List in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetList\nGets the value of an Ink List in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetList_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
void Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetList_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetList_Parms), &Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetList_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetList", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetList_Statics::InkpotStory_eventGetList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetList_Statics::InkpotStory_eventGetList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetList(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetList

// Begin Class UInkpotStory Function GetNamedContent
struct Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics
{
	struct InkpotStory_eventGetNamedContent_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetNamedContent\n\x09 * Gets all named sections within a story. \n\x09 * This is essentially all the top level knots of the story.\n\x09 *\n\x09 * @returns List of all named knots.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetNamedContent\nGets all named sections within a story.\nThis is essentially all the top level knots of the story.\n\n@returns List of all named knots." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContent", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::InkpotStory_eventGetNamedContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::InkpotStory_eventGetNamedContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetNamedContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContent();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetNamedContent

// Begin Class UInkpotStory Function GetNamedContentForKnot
struct Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics
{
	struct InkpotStory_eventGetNamedContentForKnot_Parms
	{
		FString KnotName;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetNamedContentForKnot\n\x09 * Gets all named stitches within a knot. \n\x09 *\n\x09 * @returns List of all named stitches within knot.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetNamedContentForKnot\nGets all named stitches within a knot.\n\n@returns List of all named stitches within knot." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KnotName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName = { "KnotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForKnot_Parms, KnotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnotName_MetaData), NewProp_KnotName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForKnot_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContentForKnot", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::InkpotStory_eventGetNamedContentForKnot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::InkpotStory_eventGetNamedContentForKnot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetNamedContentForKnot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KnotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContentForKnot(Z_Param_KnotName);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetNamedContentForKnot

// Begin Class UInkpotStory Function GetNamedContentForPath
struct Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics
{
	struct InkpotStory_eventGetNamedContentForPath_Parms
	{
		FString Path;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContentForPath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::InkpotStory_eventGetNamedContentForPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::InkpotStory_eventGetNamedContentForPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetNamedContentForPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContentForPath(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetNamedContentForPath

// Begin Class UInkpotStory Function GetString
struct Z_Construct_UFunction_UInkpotStory_GetString_Statics
{
	struct InkpotStory_eventGetString_Parms
	{
		FString Variable;
		FString ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetString\n\x09 * Gets the value of a character string in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetString\nGets the value of a character string in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetString_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetString_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetString_Parms), &Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetString_Statics::InkpotStory_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetString_Statics::InkpotStory_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetString(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetString

// Begin Class UInkpotStory Function GetValue
struct Z_Construct_UFunction_UInkpotStory_GetValue_Statics
{
	struct InkpotStory_eventGetValue_Parms
	{
		FString Variable;
		FInkpotValue ReturnValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GetValue\n\x09 * Gets the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to get.\n\x09 * @param ReturnValue - The value of the variable.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GetValue\nGets the value of a variable in the story.\n\n@param Variable - Name of the variable to get.\n@param ReturnValue - The value of the variable.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetValue_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
void Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventGetValue_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetValue_Parms), &Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::InkpotStory_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::InkpotStory_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGetValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_ReturnValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetValue(Z_Param_Variable,Z_Param_Out_ReturnValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function GetValue

// Begin Class UInkpotStory Function GlobalTags
struct Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics
{
	struct InkpotStory_eventGlobalTags_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GlobalTags\n\x09 * Gets a tags that are set at the top of the story.\n\x09 *\n\x09 * @returns Array of tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GlobalTags\nGets a tags that are set at the top of the story.\n\n@returns Array of tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGlobalTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GlobalTags", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::InkpotStory_eventGlobalTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::InkpotStory_eventGlobalTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_GlobalTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execGlobalTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GlobalTags();
	P_NATIVE_END;
}
// End Class UInkpotStory Function GlobalTags

// Begin Class UInkpotStory Function HasChoices
struct Z_Construct_UFunction_UInkpotStory_HasChoices_Statics
{
	struct InkpotStory_eventHasChoices_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * HasChoices\n\x09 * Does the story currently have active choices to display. \n\x09 *\n\x09 * @returns True is the story has choices to display, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HasChoices\nDoes the story currently have active choices to display.\n\n@returns True is the story has choices to display, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventHasChoices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventHasChoices_Parms), &Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "HasChoices", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::InkpotStory_eventHasChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::InkpotStory_eventHasChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_HasChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execHasChoices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasChoices();
	P_NATIVE_END;
}
// End Class UInkpotStory Function HasChoices

// Begin Class UInkpotStory Function IsFlowAlive
struct Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics
{
	struct InkpotStory_eventIsFlowAlive_Parms
	{
		FString FlowName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsFlowAlive\n\x09 * Checks if a flow still has content to display.\n\x09 *\n\x09 * @param FlowName - The name of the flow to check.\n\x09 * @returns True if the flow still has content.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsFlowAlive\nChecks if a flow still has content to display.\n\n@param FlowName - The name of the flow to check.\n@returns True if the flow still has content." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventIsFlowAlive_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowName_MetaData), NewProp_FlowName_MetaData) };
void Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventIsFlowAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventIsFlowAlive_Parms), &Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "IsFlowAlive", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::InkpotStory_eventIsFlowAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::InkpotStory_eventIsFlowAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_IsFlowAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execIsFlowAlive)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlowAlive(Z_Param_FlowName);
	P_NATIVE_END;
}
// End Class UInkpotStory Function IsFlowAlive

// Begin Class UInkpotStory Function IsVariableDefined
struct Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics
{
	struct InkpotStory_eventIsVariableDefined_Parms
	{
		FString Variable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IsVariableDefined\n\x09 * Checks if a variable exists in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to clear.\n\x09 * @returns True if the variable exists, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsVariableDefined\nChecks if a variable exists in the story.\n\n@param Variable - Name of the variable to clear.\n@returns True if the variable exists, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventIsVariableDefined_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventIsVariableDefined_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventIsVariableDefined_Parms), &Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "IsVariableDefined", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::InkpotStory_eventIsVariableDefined_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::InkpotStory_eventIsVariableDefined_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_IsVariableDefined()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_IsVariableDefined_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execIsVariableDefined)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVariableDefined(Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UInkpotStory Function IsVariableDefined

// Begin Class UInkpotStory Function LoadJSON
struct Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics
{
	struct InkpotStory_eventLoadJSON_Parms
	{
		FString InJSON;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * LoadJSON\n\x09 * Unserialises the state of the Ink VM from a JSON string. \n\x09 *\n\x09 * @param InJSON - The serialised state to set the Ink VM to.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LoadJSON\nUnserialises the state of the Ink VM from a JSON string.\n\n@param InJSON - The serialised state to set the Ink VM to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InJSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON = { "InJSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventLoadJSON_Parms, InJSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InJSON_MetaData), NewProp_InJSON_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "LoadJSON", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::InkpotStory_eventLoadJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::InkpotStory_eventLoadJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_LoadJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execLoadJSON)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InJSON);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadJSON(Z_Param_InJSON);
	P_NATIVE_END;
}
// End Class UInkpotStory Function LoadJSON

// Begin Class UInkpotStory Function RemoveFlow
struct Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics
{
	struct InkpotStory_eventRemoveFlow_Parms
	{
		FString FlowName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * RemoveFlow\n\x09 * Removes a flow from the current set of flows .\n\x09 *\n\x09 * @param FlowName - The name of the flow to remove.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RemoveFlow\nRemoves a flow from the current set of flows .\n\n@param FlowName - The name of the flow to remove." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventRemoveFlow_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowName_MetaData), NewProp_FlowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "RemoveFlow", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::InkpotStory_eventRemoveFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::InkpotStory_eventRemoveFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_RemoveFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execRemoveFlow)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFlow(Z_Param_FlowName);
	P_NATIVE_END;
}
// End Class UInkpotStory Function RemoveFlow

// Begin Class UInkpotStory Function SetBool
struct Z_Construct_UFunction_UInkpotStory_SetBool_Statics
{
	struct InkpotStory_eventSetBool_Parms
	{
		FString Variable;
		bool bValue;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetBool\n\x09 * Sets the value of a boolean variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetBool\nSets the value of a boolean variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetBool_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((InkpotStory_eventSetBool_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetBool_Parms), &Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetBool_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetBool_Parms), &Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetBool", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::InkpotStory_eventSetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::InkpotStory_eventSetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_UBOOL(Z_Param_bValue);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBool(Z_Param_Variable,Z_Param_bValue,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SetBool

// Begin Class UInkpotStory Function SetEmpty
struct Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics
{
	struct InkpotStory_eventSetEmpty_Parms
	{
		FString Variable;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetEmpty\n\x09 * Clears the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to clear.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetEmpty\nClears the value of a variable in the story.\n\n@param Variable - Name of the variable to clear.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetEmpty_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetEmpty_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetEmpty_Parms), &Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetEmpty", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::InkpotStory_eventSetEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::InkpotStory_eventSetEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetEmpty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEmpty(Z_Param_Variable,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SetEmpty

// Begin Class UInkpotStory Function SetFloat
struct Z_Construct_UFunction_UInkpotStory_SetFloat_Statics
{
	struct InkpotStory_eventSetFloat_Parms
	{
		FString Variable;
		float Value;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetFloat\n\x09 * Sets the value of a floating point variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetFloat\nSets the value of a floating point variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetFloat_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetFloat_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetFloat_Parms), &Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetFloat", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::InkpotStory_eventSetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::InkpotStory_eventSetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloat(Z_Param_Variable,Z_Param_Value,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SetFloat

// Begin Class UInkpotStory Function SetInt
struct Z_Construct_UFunction_UInkpotStory_SetInt_Statics
{
	struct InkpotStory_eventSetInt_Parms
	{
		FString Variable;
		int32 Value;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetInt\n\x09 * Sets the value of an integer variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetInt\nSets the value of an integer variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetInt_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetInt_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetInt_Parms), &Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetInt", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::InkpotStory_eventSetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::InkpotStory_eventSetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInt(Z_Param_Variable,Z_Param_Value,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SetInt

// Begin Class UInkpotStory Function SetList
struct Z_Construct_UFunction_UInkpotStory_SetList_Statics
{
	struct InkpotStory_eventSetList_Parms
	{
		FString Variable;
		FInkpotList Value;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetList\n\x09 * Sets the value of an Ink List in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetList\nSets the value of an Ink List in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetList_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetList_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2860029660
void Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetList_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetList_Parms), &Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetList_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetList", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetList_Statics::InkpotStory_eventSetList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetList_Statics::InkpotStory_eventSetList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetList(Z_Param_Variable,Z_Param_Out_Value,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SetList

// Begin Class UInkpotStory Function SetOnVariableChange
struct Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics
{
	struct InkpotStory_eventSetOnVariableChange_Parms
	{
		FScriptDelegate Delegate;
		FString Variable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetOnVariableChange\n\x09 * Binds a delegate to when the value of the stated variable changes.\n\x09 *\n\x09 * @param Delegate - The delegate to call when the variable changes.\n\x09 * @param Variable - The name of the variable to watch.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetOnVariableChange\nBinds a delegate to when the value of the stated variable changes.\n\n@param Delegate - The delegate to call when the variable changes.\n@param Variable - The name of the variable to watch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetOnVariableChange_Parms, Delegate), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 1422750606
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetOnVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetOnVariableChange", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::InkpotStory_eventSetOnVariableChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::InkpotStory_eventSetOnVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetOnVariableChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetOnVariableChange)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnVariableChange(FOnInkpotVariableChange(Z_Param_Delegate),Z_Param_Variable);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SetOnVariableChange

// Begin Class UInkpotStory Function SetString
struct Z_Construct_UFunction_UInkpotStory_SetString_Statics
{
	struct InkpotStory_eventSetString_Parms
	{
		FString Variable;
		FString Value;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetString\n\x09 * Sets the value of a character string in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetString\nSets the value of a character string in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetString_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((InkpotStory_eventSetString_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetString_Parms), &Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetString", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetString_Statics::InkpotStory_eventSetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetString_Statics::InkpotStory_eventSetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetString(Z_Param_Variable,Z_Param_Value,Z_Param_Out_bSuccess);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SetString

// Begin Class UInkpotStory Function SetValue
struct Z_Construct_UFunction_UInkpotStory_SetValue_Statics
{
	struct InkpotStory_eventSetValue_Parms
	{
		FString Variable;
		FInkpotValue Value;
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SetValue\n\x09 * Sets the value of a variable in the story.\n\x09 *\n\x09 * @param Variable - Name of the variable to set.\n\x09 * @param Value - The value to set the variable to.\n\x09 * @param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SetValue\nSets the value of a variable in the story.\n\n@param Variable - Name of the variable to set.\n@param Value - The value to set the variable to.\n@param bSuccess - Returns if the operation was a succes. False typically means the variable does not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetValue_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetValue_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2508912288
void Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Success_SetBit(void* Obj)
{
	((InkpotStory_eventSetValue_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetValue_Parms), &Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::InkpotStory_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::InkpotStory_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSetValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT(FInkpotValue,Z_Param_Value);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_Variable,Z_Param_Value,Z_Param_Out_Success);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SetValue

// Begin Class UInkpotStory Function SwitchFlow
struct Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics
{
	struct InkpotStory_eventSwitchFlow_Parms
	{
		FString FlowName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SwitchFlow\n\x09 * Switches the flow of the story. A flow is a path of execution of the story. Simple stories have but one flow, but there can be many.\n\x09 *\n\x09 * @param FlowName - The name of the flow to switch to. If a flow of that name does not exist a new flow will be created. \n\x09 * @returns true if the switch was succesful.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SwitchFlow\nSwitches the flow of the story. A flow is a path of execution of the story. Simple stories have but one flow, but there can be many.\n\n@param FlowName - The name of the flow to switch to. If a flow of that name does not exist a new flow will be created.\n@returns true if the switch was succesful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSwitchFlow_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowName_MetaData), NewProp_FlowName_MetaData) };
void Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotStory_eventSwitchFlow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSwitchFlow_Parms), &Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SwitchFlow", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::InkpotStory_eventSwitchFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::InkpotStory_eventSwitchFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_SwitchFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSwitchFlow)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchFlow(Z_Param_FlowName);
	P_NATIVE_END;
}
// End Class UInkpotStory Function SwitchFlow

// Begin Class UInkpotStory Function SwitchToDefaultFlow
struct Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * SwitchToDefaultFlow\n\x09 * Switch back to executing the default flow.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SwitchToDefaultFlow\nSwitch back to executing the default flow." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SwitchToDefaultFlow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execSwitchToDefaultFlow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToDefaultFlow();
	P_NATIVE_END;
}
// End Class UInkpotStory Function SwitchToDefaultFlow

// Begin Class UInkpotStory Function TagsForContentAtPath
struct Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics
{
	struct InkpotStory_eventTagsForContentAtPath_Parms
	{
		FString Path;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * TagsForContentAtPath\n\x09 * Gets a tags that are set at the top of the knot and\\or stitch passed in.\n\x09 *\n\x09 * @param Path - Knot and\\or stitch of where to look for the tags.\n\x09 * @returns Array of tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TagsForContentAtPath\nGets a tags that are set at the top of the knot and\\or stitch passed in.\n\n@param Path - Knot and\\or stitch of where to look for the tags.\n@returns Array of tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventTagsForContentAtPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventTagsForContentAtPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "TagsForContentAtPath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::InkpotStory_eventTagsForContentAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::InkpotStory_eventTagsForContentAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execTagsForContentAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->TagsForContentAtPath(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UInkpotStory Function TagsForContentAtPath

// Begin Class UInkpotStory Function ToJSON
struct Z_Construct_UFunction_UInkpotStory_ToJSON_Statics
{
	struct InkpotStory_eventToJSON_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ToJSON\n\x09 * Serialises the state of the Ink VM to a JSON string. \n\x09 *\n\x09 * @returns String - The serialised state of the Ink VM \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToJSON\nSerialises the state of the Ink VM to a JSON string.\n\n@returns String - The serialised state of the Ink VM" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventToJSON_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ToJSON", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::InkpotStory_eventToJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::InkpotStory_eventToJSON_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_ToJSON()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execToJSON)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToJSON();
	P_NATIVE_END;
}
// End Class UInkpotStory Function ToJSON

// Begin Class UInkpotStory Function UnbindExternalFunction
struct Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics
{
	struct InkpotStory_eventUnbindExternalFunction_Parms
	{
		FString FunctionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * UnbindExternalFunction\n\x09 * Unbinds a function that was bound by BindExternalFunction. \n\x09 *\n\x09 * @param FunctionName - Name of the function to unbind.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UnbindExternalFunction\nUnbinds a function that was bound by BindExternalFunction.\n\n@param FunctionName - Name of the function to unbind." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventUnbindExternalFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "UnbindExternalFunction", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::InkpotStory_eventUnbindExternalFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::InkpotStory_eventUnbindExternalFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotStory::execUnbindExternalFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindExternalFunction(Z_Param_FunctionName);
	P_NATIVE_END;
}
// End Class UInkpotStory Function UnbindExternalFunction

// Begin Class UInkpotStory
void UInkpotStory::StaticRegisterNativesUInkpotStory()
{
	UClass* Class = UInkpotStory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindExternalFunction", &UInkpotStory::execBindExternalFunction },
		{ "CanContinue", &UInkpotStory::execCanContinue },
		{ "ChooseChoice", &UInkpotStory::execChooseChoice },
		{ "ChooseChoiceIndex", &UInkpotStory::execChooseChoiceIndex },
		{ "ChoosePath", &UInkpotStory::execChoosePath },
		{ "ChoosePathString", &UInkpotStory::execChoosePathString },
		{ "ClearAllVariableObservers", &UInkpotStory::execClearAllVariableObservers },
		{ "ClearVariableChange", &UInkpotStory::execClearVariableChange },
		{ "Continue", &UInkpotStory::execContinue },
		{ "ContinueMaximally", &UInkpotStory::execContinueMaximally },
		{ "ContinueMaximallyAtPath", &UInkpotStory::execContinueMaximallyAtPath },
		{ "DumpContentAtKnot", &UInkpotStory::execDumpContentAtKnot },
		{ "DumpContentAtPath", &UInkpotStory::execDumpContentAtPath },
		{ "DumpDebug", &UInkpotStory::execDumpDebug },
		{ "DumpMainContent", &UInkpotStory::execDumpMainContent },
		{ "EvaluateFunction", &UInkpotStory::execEvaluateFunction },
		{ "GatherAllStrings", &UInkpotStory::execGatherAllStrings },
		{ "GetAliveFlowCount", &UInkpotStory::execGetAliveFlowCount },
		{ "GetAliveFlowNames", &UInkpotStory::execGetAliveFlowNames },
		{ "GetBool", &UInkpotStory::execGetBool },
		{ "GetCurrentChoices", &UInkpotStory::execGetCurrentChoices },
		{ "GetCurrentFlowName", &UInkpotStory::execGetCurrentFlowName },
		{ "GetCurrentLine", &UInkpotStory::execGetCurrentLine },
		{ "GetCurrentTags", &UInkpotStory::execGetCurrentTags },
		{ "GetCurrentText", &UInkpotStory::execGetCurrentText },
		{ "GetFloat", &UInkpotStory::execGetFloat },
		{ "GetInt", &UInkpotStory::execGetInt },
		{ "GetList", &UInkpotStory::execGetList },
		{ "GetNamedContent", &UInkpotStory::execGetNamedContent },
		{ "GetNamedContentForKnot", &UInkpotStory::execGetNamedContentForKnot },
		{ "GetNamedContentForPath", &UInkpotStory::execGetNamedContentForPath },
		{ "GetString", &UInkpotStory::execGetString },
		{ "GetValue", &UInkpotStory::execGetValue },
		{ "GlobalTags", &UInkpotStory::execGlobalTags },
		{ "HasChoices", &UInkpotStory::execHasChoices },
		{ "IsFlowAlive", &UInkpotStory::execIsFlowAlive },
		{ "IsVariableDefined", &UInkpotStory::execIsVariableDefined },
		{ "LoadJSON", &UInkpotStory::execLoadJSON },
		{ "RemoveFlow", &UInkpotStory::execRemoveFlow },
		{ "SetBool", &UInkpotStory::execSetBool },
		{ "SetEmpty", &UInkpotStory::execSetEmpty },
		{ "SetFloat", &UInkpotStory::execSetFloat },
		{ "SetInt", &UInkpotStory::execSetInt },
		{ "SetList", &UInkpotStory::execSetList },
		{ "SetOnVariableChange", &UInkpotStory::execSetOnVariableChange },
		{ "SetString", &UInkpotStory::execSetString },
		{ "SetValue", &UInkpotStory::execSetValue },
		{ "SwitchFlow", &UInkpotStory::execSwitchFlow },
		{ "SwitchToDefaultFlow", &UInkpotStory::execSwitchToDefaultFlow },
		{ "TagsForContentAtPath", &UInkpotStory::execTagsForContentAtPath },
		{ "ToJSON", &UInkpotStory::execToJSON },
		{ "UnbindExternalFunction", &UInkpotStory::execUnbindExternalFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStory);
UClass* Z_Construct_UClass_UInkpotStory_NoRegister()
{
	return UInkpotStory::StaticClass();
}
struct Z_Construct_UClass_UInkpotStory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inkpot/InkpotStory.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnContinue_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnContinue" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnMakeChoice_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnMakeChoice" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnChoosePath_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnChoosePath" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnSwitchFlow_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnSwitchFlow" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnStoryLoadJSON_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnStoryLoadJSON" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnDebugRefresh_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnDebugRefresh" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInFunctionEvaluation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnContinue;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnMakeChoice;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnChoosePath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnSwitchFlow;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnStoryLoadJSON;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnDebugRefresh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Choices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
	static void NewProp_bIsInFunctionEvaluation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInFunctionEvaluation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotStory_BindExternalFunction, "BindExternalFunction" }, // 1682162233
		{ &Z_Construct_UFunction_UInkpotStory_CanContinue, "CanContinue" }, // 68447903
		{ &Z_Construct_UFunction_UInkpotStory_ChooseChoice, "ChooseChoice" }, // 1385326098
		{ &Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex, "ChooseChoiceIndex" }, // 3490596732
		{ &Z_Construct_UFunction_UInkpotStory_ChoosePath, "ChoosePath" }, // 2925559459
		{ &Z_Construct_UFunction_UInkpotStory_ChoosePathString, "ChoosePathString" }, // 2129957165
		{ &Z_Construct_UFunction_UInkpotStory_ClearAllVariableObservers, "ClearAllVariableObservers" }, // 2995237326
		{ &Z_Construct_UFunction_UInkpotStory_ClearVariableChange, "ClearVariableChange" }, // 2399034201
		{ &Z_Construct_UFunction_UInkpotStory_Continue, "Continue" }, // 2944972072
		{ &Z_Construct_UFunction_UInkpotStory_ContinueMaximally, "ContinueMaximally" }, // 2668602164
		{ &Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath, "ContinueMaximallyAtPath" }, // 3120631612
		{ &Z_Construct_UFunction_UInkpotStory_DumpContentAtKnot, "DumpContentAtKnot" }, // 3331576586
		{ &Z_Construct_UFunction_UInkpotStory_DumpContentAtPath, "DumpContentAtPath" }, // 1951952740
		{ &Z_Construct_UFunction_UInkpotStory_DumpDebug, "DumpDebug" }, // 11372845
		{ &Z_Construct_UFunction_UInkpotStory_DumpMainContent, "DumpMainContent" }, // 2089341796
		{ &Z_Construct_UFunction_UInkpotStory_EvaluateFunction, "EvaluateFunction" }, // 1828160707
		{ &Z_Construct_UFunction_UInkpotStory_GatherAllStrings, "GatherAllStrings" }, // 2697211238
		{ &Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount, "GetAliveFlowCount" }, // 1893598813
		{ &Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames, "GetAliveFlowNames" }, // 1131417453
		{ &Z_Construct_UFunction_UInkpotStory_GetBool, "GetBool" }, // 393287286
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentChoices, "GetCurrentChoices" }, // 2258969903
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName, "GetCurrentFlowName" }, // 4181863861
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentLine, "GetCurrentLine" }, // 885700381
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentTags, "GetCurrentTags" }, // 1568930820
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentText, "GetCurrentText" }, // 2004078411
		{ &Z_Construct_UFunction_UInkpotStory_GetFloat, "GetFloat" }, // 1208432188
		{ &Z_Construct_UFunction_UInkpotStory_GetInt, "GetInt" }, // 962512126
		{ &Z_Construct_UFunction_UInkpotStory_GetList, "GetList" }, // 1768685030
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContent, "GetNamedContent" }, // 892748936
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot, "GetNamedContentForKnot" }, // 2131103223
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath, "GetNamedContentForPath" }, // 3937670741
		{ &Z_Construct_UFunction_UInkpotStory_GetString, "GetString" }, // 2416345113
		{ &Z_Construct_UFunction_UInkpotStory_GetValue, "GetValue" }, // 2405919418
		{ &Z_Construct_UFunction_UInkpotStory_GlobalTags, "GlobalTags" }, // 3840701635
		{ &Z_Construct_UFunction_UInkpotStory_HasChoices, "HasChoices" }, // 2853552237
		{ &Z_Construct_UFunction_UInkpotStory_IsFlowAlive, "IsFlowAlive" }, // 3646116262
		{ &Z_Construct_UFunction_UInkpotStory_IsVariableDefined, "IsVariableDefined" }, // 3324130775
		{ &Z_Construct_UFunction_UInkpotStory_LoadJSON, "LoadJSON" }, // 3483322790
		{ &Z_Construct_UFunction_UInkpotStory_RemoveFlow, "RemoveFlow" }, // 1226194745
		{ &Z_Construct_UFunction_UInkpotStory_SetBool, "SetBool" }, // 2315146299
		{ &Z_Construct_UFunction_UInkpotStory_SetEmpty, "SetEmpty" }, // 2886511965
		{ &Z_Construct_UFunction_UInkpotStory_SetFloat, "SetFloat" }, // 962107845
		{ &Z_Construct_UFunction_UInkpotStory_SetInt, "SetInt" }, // 4144984795
		{ &Z_Construct_UFunction_UInkpotStory_SetList, "SetList" }, // 150232405
		{ &Z_Construct_UFunction_UInkpotStory_SetOnVariableChange, "SetOnVariableChange" }, // 3987505305
		{ &Z_Construct_UFunction_UInkpotStory_SetString, "SetString" }, // 4092440806
		{ &Z_Construct_UFunction_UInkpotStory_SetValue, "SetValue" }, // 2896697122
		{ &Z_Construct_UFunction_UInkpotStory_SwitchFlow, "SwitchFlow" }, // 1169390726
		{ &Z_Construct_UFunction_UInkpotStory_SwitchToDefaultFlow, "SwitchToDefaultFlow" }, // 418758893
		{ &Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath, "TagsForContentAtPath" }, // 2105160473
		{ &Z_Construct_UFunction_UInkpotStory_ToJSON, "ToJSON" }, // 1036622344
		{ &Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction, "UnbindExternalFunction" }, // 1045211618
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue = { "EventOnContinue", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnContinue), Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnContinue_MetaData), NewProp_EventOnContinue_MetaData) }; // 5316007
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice = { "EventOnMakeChoice", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnMakeChoice), Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnMakeChoice_MetaData), NewProp_EventOnMakeChoice_MetaData) }; // 3785726338
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath = { "EventOnChoosePath", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnChoosePath), Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnChoosePath_MetaData), NewProp_EventOnChoosePath_MetaData) }; // 2765082829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow = { "EventOnSwitchFlow", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnSwitchFlow), Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnSwitchFlow_MetaData), NewProp_EventOnSwitchFlow_MetaData) }; // 3729156158
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON = { "EventOnStoryLoadJSON", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnStoryLoadJSON), Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnStoryLoadJSON_MetaData), NewProp_EventOnStoryLoadJSON_MetaData) }; // 1351285535
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnDebugRefresh = { "EventOnDebugRefresh", nullptr, (EPropertyFlags)0x0020080810080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnDebugRefresh), Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnDebugRefresh_MetaData), NewProp_EventOnDebugRefresh_MetaData) }; // 5316007
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) };
void Z_Construct_UClass_UInkpotStory_Statics::NewProp_bIsInFunctionEvaluation_SetBit(void* Obj)
{
	((UInkpotStory*)Obj)->bIsInFunctionEvaluation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_bIsInFunctionEvaluation = { "bIsInFunctionEvaluation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotStory), &Z_Construct_UClass_UInkpotStory_Statics::NewProp_bIsInFunctionEvaluation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInFunctionEvaluation_MetaData), NewProp_bIsInFunctionEvaluation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnDebugRefresh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_bIsInFunctionEvaluation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInkpotStory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStory_Statics::ClassParams = {
	&UInkpotStory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInkpotStory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotStory()
{
	if (!Z_Registration_Info_UClass_UInkpotStory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStory.OuterSingleton, Z_Construct_UClass_UInkpotStory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStory.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotStory>()
{
	return UInkpotStory::StaticClass();
}
UInkpotStory::UInkpotStory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStory);
UInkpotStory::~UInkpotStory() {}
// End Class UInkpotStory

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStory, UInkpotStory::StaticClass, TEXT("UInkpotStory"), &Z_Registration_Info_UClass_UInkpotStory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStory), 2316505290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_2884163809(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
