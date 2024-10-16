// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InkpotEditor/Public/Blotter/InkpotBlotter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotBlotter() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterString_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotBlotter();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotBlotter_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// End Cross Module References

// Begin Class UInkpotBlotter Function GetAliveFlowNames
struct Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics
{
	struct InkpotBlotter_eventGetAliveFlowNames_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterString*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"Inkpot|Blotter\")\n//FString GetCurrentFlowName(UInkpotStory* Story);\n" },
#endif
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"Inkpot|Blotter\")\nFString GetCurrentFlowName(UInkpotStory* Story);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetAliveFlowNames_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetAliveFlowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetAliveFlowNames", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::InkpotBlotter_eventGetAliveFlowNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::InkpotBlotter_eventGetAliveFlowNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetAliveFlowNames)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterString*>*)Z_Param__Result=P_THIS->GetAliveFlowNames(Z_Param_Story);
	P_NATIVE_END;
}
// End Class UInkpotBlotter Function GetAliveFlowNames

// Begin Class UInkpotBlotter Function GetChoices
struct Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics
{
	struct InkpotBlotter_eventGetChoices_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterString*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetChoices_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetChoices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetChoices", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::InkpotBlotter_eventGetChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::InkpotBlotter_eventGetChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetChoices)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterString*>*)Z_Param__Result=P_THIS->GetChoices(Z_Param_Story);
	P_NATIVE_END;
}
// End Class UInkpotBlotter Function GetChoices

// Begin Class UInkpotBlotter Function GetCurrentTags
struct Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics
{
	struct InkpotBlotter_eventGetCurrentTags_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterString*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintPure, Category = \"Inkpot|Blotter\")\n//FString currentText = GetCurrentText(UInkpotStory * Story);\n" },
#endif
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"Inkpot|Blotter\")\nFString currentText = GetCurrentText(UInkpotStory * Story);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetCurrentTags_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetCurrentTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetCurrentTags", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::InkpotBlotter_eventGetCurrentTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::InkpotBlotter_eventGetCurrentTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetCurrentTags)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterString*>*)Z_Param__Result=P_THIS->GetCurrentTags(Z_Param_Story);
	P_NATIVE_END;
}
// End Class UInkpotBlotter Function GetCurrentTags

// Begin Class UInkpotBlotter Function GetOrigins
struct Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics
{
	struct InkpotBlotter_eventGetOrigins_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterVariable*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetOrigins_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetOrigins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetOrigins", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::InkpotBlotter_eventGetOrigins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::InkpotBlotter_eventGetOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetOrigins)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterVariable*>*)Z_Param__Result=P_THIS->GetOrigins(Z_Param_Story);
	P_NATIVE_END;
}
// End Class UInkpotBlotter Function GetOrigins

// Begin Class UInkpotBlotter Function GetVariables
struct Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics
{
	struct InkpotBlotter_eventGetVariables_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterVariable*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetVariables_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterVariable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GetVariables", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::InkpotBlotter_eventGetVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::InkpotBlotter_eventGetVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GetVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GetVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGetVariables)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterVariable*>*)Z_Param__Result=P_THIS->GetVariables(Z_Param_Story);
	P_NATIVE_END;
}
// End Class UInkpotBlotter Function GetVariables

// Begin Class UInkpotBlotter Function GlobalTags
struct Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics
{
	struct InkpotBlotter_eventGlobalTags_Parms
	{
		UInkpotStory* Story;
		TArray<UBlotterString*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGlobalTags_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventGlobalTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "GlobalTags", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::InkpotBlotter_eventGlobalTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::InkpotBlotter_eventGlobalTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_GlobalTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_GlobalTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execGlobalTags)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UBlotterString*>*)Z_Param__Result=P_THIS->GlobalTags(Z_Param_Story);
	P_NATIVE_END;
}
// End Class UInkpotBlotter Function GlobalTags

// Begin Class UInkpotBlotter Function OnDebugRefresh
struct Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics
{
	struct InkpotBlotter_eventOnDebugRefresh_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventOnDebugRefresh_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "OnDebugRefresh", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::InkpotBlotter_eventOnDebugRefresh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::InkpotBlotter_eventOnDebugRefresh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execOnDebugRefresh)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDebugRefresh(Z_Param_Story);
	P_NATIVE_END;
}
// End Class UInkpotBlotter Function OnDebugRefresh

// Begin Class UInkpotBlotter Function OnStoryBegin
struct Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics
{
	struct InkpotBlotter_eventOnStoryBegin_Parms
	{
		UInkpotStory* Story;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventOnStoryBegin_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "OnStoryBegin", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::InkpotBlotter_eventOnStoryBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::InkpotBlotter_eventOnStoryBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotBlotter::execOnStoryBegin)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStoryBegin(Z_Param_Story);
	P_NATIVE_END;
}
// End Class UInkpotBlotter Function OnStoryBegin

// Begin Class UInkpotBlotter Function ReceiveOnDebugRefresh
struct InkpotBlotter_eventReceiveOnDebugRefresh_Parms
{
	UInkpotStory* Story;
};
static FName NAME_UInkpotBlotter_ReceiveOnDebugRefresh = FName(TEXT("ReceiveOnDebugRefresh"));
void UInkpotBlotter::ReceiveOnDebugRefresh(UInkpotStory* Story)
{
	InkpotBlotter_eventReceiveOnDebugRefresh_Parms Parms;
	Parms.Story=Story;
	ProcessEvent(FindFunctionChecked(NAME_UInkpotBlotter_ReceiveOnDebugRefresh),&Parms);
}
struct Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "DisplayName", "OnDebugRefresh" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotBlotter_eventReceiveOnDebugRefresh_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::NewProp_Story,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotBlotter, nullptr, "ReceiveOnDebugRefresh", nullptr, nullptr, Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::PropPointers), sizeof(InkpotBlotter_eventReceiveOnDebugRefresh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::Function_MetaDataParams) };
static_assert(sizeof(InkpotBlotter_eventReceiveOnDebugRefresh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInkpotBlotter Function ReceiveOnDebugRefresh

// Begin Class UInkpotBlotter
void UInkpotBlotter::StaticRegisterNativesUInkpotBlotter()
{
	UClass* Class = UInkpotBlotter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAliveFlowNames", &UInkpotBlotter::execGetAliveFlowNames },
		{ "GetChoices", &UInkpotBlotter::execGetChoices },
		{ "GetCurrentTags", &UInkpotBlotter::execGetCurrentTags },
		{ "GetOrigins", &UInkpotBlotter::execGetOrigins },
		{ "GetVariables", &UInkpotBlotter::execGetVariables },
		{ "GlobalTags", &UInkpotBlotter::execGlobalTags },
		{ "OnDebugRefresh", &UInkpotBlotter::execOnDebugRefresh },
		{ "OnStoryBegin", &UInkpotBlotter::execOnStoryBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotBlotter);
UClass* Z_Construct_UClass_UInkpotBlotter_NoRegister()
{
	return UInkpotBlotter::StaticClass();
}
struct Z_Construct_UClass_UInkpotBlotter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blotter/InkpotBlotter.h" },
		{ "ModuleRelativePath", "Public/Blotter/InkpotBlotter.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotBlotter_GetAliveFlowNames, "GetAliveFlowNames" }, // 3040030994
		{ &Z_Construct_UFunction_UInkpotBlotter_GetChoices, "GetChoices" }, // 2047887719
		{ &Z_Construct_UFunction_UInkpotBlotter_GetCurrentTags, "GetCurrentTags" }, // 3344408992
		{ &Z_Construct_UFunction_UInkpotBlotter_GetOrigins, "GetOrigins" }, // 513601767
		{ &Z_Construct_UFunction_UInkpotBlotter_GetVariables, "GetVariables" }, // 1734890389
		{ &Z_Construct_UFunction_UInkpotBlotter_GlobalTags, "GlobalTags" }, // 2760938245
		{ &Z_Construct_UFunction_UInkpotBlotter_OnDebugRefresh, "OnDebugRefresh" }, // 4276913413
		{ &Z_Construct_UFunction_UInkpotBlotter_OnStoryBegin, "OnStoryBegin" }, // 2233655857
		{ &Z_Construct_UFunction_UInkpotBlotter_ReceiveOnDebugRefresh, "ReceiveOnDebugRefresh" }, // 1183349975
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotBlotter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInkpotBlotter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotBlotter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotBlotter_Statics::ClassParams = {
	&UInkpotBlotter::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotBlotter_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotBlotter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotBlotter()
{
	if (!Z_Registration_Info_UClass_UInkpotBlotter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotBlotter.OuterSingleton, Z_Construct_UClass_UInkpotBlotter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotBlotter.OuterSingleton;
}
template<> INKPOTEDITOR_API UClass* StaticClass<UInkpotBlotter>()
{
	return UInkpotBlotter::StaticClass();
}
UInkpotBlotter::UInkpotBlotter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotBlotter);
UInkpotBlotter::~UInkpotBlotter() {}
// End Class UInkpotBlotter

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotBlotter, UInkpotBlotter::StaticClass, TEXT("UInkpotBlotter"), &Z_Registration_Info_UClass_UInkpotBlotter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotBlotter), 3759121130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_1433377716(TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_InkpotBlotter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
