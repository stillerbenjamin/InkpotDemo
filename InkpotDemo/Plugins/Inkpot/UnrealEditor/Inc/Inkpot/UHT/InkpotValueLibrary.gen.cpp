// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotValueLibrary.h"
#include "Inkpot/Public/Inkpot/InkpotList.h"
#include "Inkpot/Public/Inkpot/InkpotValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotValueLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotValueLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotValueLibrary_NoRegister();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotList();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Class UInkpotValueLibrary Function DefaultInkpotValue
struct Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics
{
	struct InkpotValueLibrary_eventDefaultInkpotValue_Parms
	{
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DefaultInkpotValue\n\x09 * Default value for returning from functions.\n\x09 * \n\x09 * @returns an empty inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DefaultInkpotValue\nDefault value for returning from functions.\n\n@returns an empty inkpot value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventDefaultInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "DefaultInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::InkpotValueLibrary_eventDefaultInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::InkpotValueLibrary_eventDefaultInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execDefaultInkpotValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::DefaultInkpotValue();
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function DefaultInkpotValue

// Begin Class UInkpotValueLibrary Function InkpotArrayValueAsBool
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsBool\n\x09 * Cast an Inkpot array value to a boolean.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns A boolean.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsBool\nCast an Inkpot array value to a boolean.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns A boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 2508912288
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::InkpotValueLibrary_eventInkpotArrayValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsBool)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsBool(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotArrayValueAsBool

// Begin Class UInkpotValueLibrary Function InkpotArrayValueAsFloat
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsFloat\n\x09 * Cast an Inkpot array value to a floating point number.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns A float.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsFloat\nCast an Inkpot array value to a floating point number.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns A float." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 2508912288
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::InkpotValueLibrary_eventInkpotArrayValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsFloat)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsFloat(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotArrayValueAsFloat

// Begin Class UInkpotValueLibrary Function InkpotArrayValueAsInt
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsInt\n\x09 * Cast an Inkpot array value to an integer.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns An integer.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsInt\nCast an Inkpot array value to an integer.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns An integer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 2508912288
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsInt", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::InkpotValueLibrary_eventInkpotArrayValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsInt)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsInt(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotArrayValueAsInt

// Begin Class UInkpotValueLibrary Function InkpotArrayValueAsList
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsList_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsList\n\x09 * Cast Inkpot array value to an InkpotList.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns An InkpotList.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsList\nCast Inkpot array value to an InkpotList.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns An InkpotList." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsList_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 2508912288
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsList_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsList", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::InkpotValueLibrary_eventInkpotArrayValueAsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::InkpotValueLibrary_eventInkpotArrayValueAsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsList)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsList(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotArrayValueAsList

// Begin Class UInkpotValueLibrary Function InkpotArrayValueAsString
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics
{
	struct InkpotValueLibrary_eventInkpotArrayValueAsString_Parms
	{
		TArray<FInkpotValue> Values;
		int32 Index;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotArrayValueAsString\n\x09 * Cast an Inkpot array value to a string.\n\x09 *\n\x09 * @param Values - The array of Inkpot values.\n\x09 * @param Index - The indexed value in the array to convert.\n\x09 * @returns A string.\n\x09 */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotArrayValueAsString\nCast an Inkpot array value to a string.\n\n@param Values - The array of Inkpot values.\n@param Index - The indexed value in the array to convert.\n@returns A string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsString_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 2508912288
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsString_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotArrayValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotArrayValueAsString", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::InkpotValueLibrary_eventInkpotArrayValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::InkpotValueLibrary_eventInkpotArrayValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotArrayValueAsString)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInkpotValueLibrary::InkpotArrayValueAsString(Z_Param_Out_Values,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotArrayValueAsString

// Begin Class UInkpotValueLibrary Function InkpotValueAsBool
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsBool_Parms
	{
		FInkpotValue Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsBool\n\x09 * Cast an Inkpot value to a boolean.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns A boolean.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsBool\nCast an Inkpot value to a boolean.\n\n@param Value - The Inkpot value to convert.\n@returns A boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsBool_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2508912288
void Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventInkpotValueAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventInkpotValueAsBool_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::InkpotValueLibrary_eventInkpotValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::InkpotValueLibrary_eventInkpotValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsBool)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsBool(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotValueAsBool

// Begin Class UInkpotValueLibrary Function InkpotValueAsFloat
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsFloat_Parms
	{
		FInkpotValue Value;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsFloat\n\x09 * Cast Inkpot value to a floating point number.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns A float.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsFloat\nCast Inkpot value to a floating point number.\n\n@param Value - The Inkpot value to convert.\n@returns A float." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsFloat_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2508912288
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::InkpotValueLibrary_eventInkpotValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::InkpotValueLibrary_eventInkpotValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsFloat)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsFloat(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotValueAsFloat

// Begin Class UInkpotValueLibrary Function InkpotValueAsInt
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsInt_Parms
	{
		FInkpotValue Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsInt\n\x09 * Cast Inkpot value to an integer.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns An integer.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsInt\nCast Inkpot value to an integer.\n\n@param Value - The Inkpot value to convert.\n@returns An integer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsInt_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2508912288
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsInt", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::InkpotValueLibrary_eventInkpotValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::InkpotValueLibrary_eventInkpotValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsInt)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsInt(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotValueAsInt

// Begin Class UInkpotValueLibrary Function InkpotValueAsList
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsList_Parms
	{
		FInkpotValue Value;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsList\n\x09 * Cast Inkpot value to an InkpotList.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns An InkpotList.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsList\nCast Inkpot value to an InkpotList.\n\n@param Value - The Inkpot value to convert.\n@returns An InkpotList." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsList_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2508912288
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsList", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::InkpotValueLibrary_eventInkpotValueAsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::InkpotValueLibrary_eventInkpotValueAsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsList)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsList(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotValueAsList

// Begin Class UInkpotValueLibrary Function InkpotValueAsString
struct Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics
{
	struct InkpotValueLibrary_eventInkpotValueAsString_Parms
	{
		FInkpotValue Value;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InkpotValueAsString\n\x09 * Cast Ink value to a string.\n\x09 *\n\x09 * @param Value - The Inkpot value to convert.\n\x09 * @returns A string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InkpotValueAsString\nCast Ink value to a string.\n\n@param Value - The Inkpot value to convert.\n@returns A string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsString_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2508912288
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventInkpotValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "InkpotValueAsString", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::InkpotValueLibrary_eventInkpotValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::InkpotValueLibrary_eventInkpotValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execInkpotValueAsString)
{
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInkpotValueLibrary::InkpotValueAsString(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function InkpotValueAsString

// Begin Class UInkpotValueLibrary Function MakeBoolInkpotValue
struct Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics
{
	struct InkpotValueLibrary_eventMakeBoolInkpotValue_Parms
	{
		bool bValue;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeBoolInkpotValue\n\x09 * Create an Inkpot Value from a boolean.\n\x09 *\n\x09 * @param bValue - The boolean to convert.\n\x09 * @returns A new inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeBoolInkpotValue\nCreate an Inkpot Value from a boolean.\n\n@param bValue - The boolean to convert.\n@returns A new inkpot value." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((InkpotValueLibrary_eventMakeBoolInkpotValue_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotValueLibrary_eventMakeBoolInkpotValue_Parms), &Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeBoolInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "MakeBoolInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::InkpotValueLibrary_eventMakeBoolInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::InkpotValueLibrary_eventMakeBoolInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execMakeBoolInkpotValue)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::MakeBoolInkpotValue(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function MakeBoolInkpotValue

// Begin Class UInkpotValueLibrary Function MakeFloatInkpotValue
struct Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics
{
	struct InkpotValueLibrary_eventMakeFloatInkpotValue_Parms
	{
		float Value;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeFloatInkpotValue\n\x09 * Create an Inkpot value from a floating point number.\n\x09 *\n\x09 * @param Value - The floating point number to convert.\n\x09 * @returns A new inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeFloatInkpotValue\nCreate an Inkpot value from a floating point number.\n\n@param Value - The floating point number to convert.\n@returns A new inkpot value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeFloatInkpotValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeFloatInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "MakeFloatInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::InkpotValueLibrary_eventMakeFloatInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::InkpotValueLibrary_eventMakeFloatInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execMakeFloatInkpotValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::MakeFloatInkpotValue(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function MakeFloatInkpotValue

// Begin Class UInkpotValueLibrary Function MakeIntInkpotValue
struct Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics
{
	struct InkpotValueLibrary_eventMakeIntInkpotValue_Parms
	{
		int32 Value;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeIntInkpotValue\n\x09 * Create an Inkpot Value from an integer.\n\x09 *\n\x09 * @param Value - The integer to convert.\n\x09 * @returns A new inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeIntInkpotValue\nCreate an Inkpot Value from an integer.\n\n@param Value - The integer to convert.\n@returns A new inkpot value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeIntInkpotValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeIntInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "MakeIntInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::InkpotValueLibrary_eventMakeIntInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::InkpotValueLibrary_eventMakeIntInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execMakeIntInkpotValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::MakeIntInkpotValue(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function MakeIntInkpotValue

// Begin Class UInkpotValueLibrary Function MakeStringInkpotValue
struct Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics
{
	struct InkpotValueLibrary_eventMakeStringInkpotValue_Parms
	{
		FString Value;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeStringInkpotValue\n\x09 * Create an Inkpot value from a string.\n\x09 *\n\x09 * @param Value - The string to convert.\n\x09 * @returns A new inkpot value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeStringInkpotValue\nCreate an Inkpot value from a string.\n\n@param Value - The string to convert.\n@returns A new inkpot value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeStringInkpotValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotValueLibrary_eventMakeStringInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotValueLibrary, nullptr, "MakeStringInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::InkpotValueLibrary_eventMakeStringInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::InkpotValueLibrary_eventMakeStringInkpotValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotValueLibrary::execMakeStringInkpotValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=UInkpotValueLibrary::MakeStringInkpotValue(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UInkpotValueLibrary Function MakeStringInkpotValue

// Begin Class UInkpotValueLibrary
void UInkpotValueLibrary::StaticRegisterNativesUInkpotValueLibrary()
{
	UClass* Class = UInkpotValueLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DefaultInkpotValue", &UInkpotValueLibrary::execDefaultInkpotValue },
		{ "InkpotArrayValueAsBool", &UInkpotValueLibrary::execInkpotArrayValueAsBool },
		{ "InkpotArrayValueAsFloat", &UInkpotValueLibrary::execInkpotArrayValueAsFloat },
		{ "InkpotArrayValueAsInt", &UInkpotValueLibrary::execInkpotArrayValueAsInt },
		{ "InkpotArrayValueAsList", &UInkpotValueLibrary::execInkpotArrayValueAsList },
		{ "InkpotArrayValueAsString", &UInkpotValueLibrary::execInkpotArrayValueAsString },
		{ "InkpotValueAsBool", &UInkpotValueLibrary::execInkpotValueAsBool },
		{ "InkpotValueAsFloat", &UInkpotValueLibrary::execInkpotValueAsFloat },
		{ "InkpotValueAsInt", &UInkpotValueLibrary::execInkpotValueAsInt },
		{ "InkpotValueAsList", &UInkpotValueLibrary::execInkpotValueAsList },
		{ "InkpotValueAsString", &UInkpotValueLibrary::execInkpotValueAsString },
		{ "MakeBoolInkpotValue", &UInkpotValueLibrary::execMakeBoolInkpotValue },
		{ "MakeFloatInkpotValue", &UInkpotValueLibrary::execMakeFloatInkpotValue },
		{ "MakeIntInkpotValue", &UInkpotValueLibrary::execMakeIntInkpotValue },
		{ "MakeStringInkpotValue", &UInkpotValueLibrary::execMakeStringInkpotValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotValueLibrary);
UClass* Z_Construct_UClass_UInkpotValueLibrary_NoRegister()
{
	return UInkpotValueLibrary::StaticClass();
}
struct Z_Construct_UClass_UInkpotValueLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/InkpotValueLibrary.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValueLibrary.h" },
		{ "ScriptName", "InkpotValueLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotValueLibrary_DefaultInkpotValue, "DefaultInkpotValue" }, // 1805635737
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsBool, "InkpotArrayValueAsBool" }, // 4275162756
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsFloat, "InkpotArrayValueAsFloat" }, // 2815917430
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsInt, "InkpotArrayValueAsInt" }, // 2953242598
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsList, "InkpotArrayValueAsList" }, // 1667238450
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotArrayValueAsString, "InkpotArrayValueAsString" }, // 414292473
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsBool, "InkpotValueAsBool" }, // 1520636287
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsFloat, "InkpotValueAsFloat" }, // 4016540557
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsInt, "InkpotValueAsInt" }, // 1246006991
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsList, "InkpotValueAsList" }, // 1137956000
		{ &Z_Construct_UFunction_UInkpotValueLibrary_InkpotValueAsString, "InkpotValueAsString" }, // 737643064
		{ &Z_Construct_UFunction_UInkpotValueLibrary_MakeBoolInkpotValue, "MakeBoolInkpotValue" }, // 1520627797
		{ &Z_Construct_UFunction_UInkpotValueLibrary_MakeFloatInkpotValue, "MakeFloatInkpotValue" }, // 3775228706
		{ &Z_Construct_UFunction_UInkpotValueLibrary_MakeIntInkpotValue, "MakeIntInkpotValue" }, // 104282546
		{ &Z_Construct_UFunction_UInkpotValueLibrary_MakeStringInkpotValue, "MakeStringInkpotValue" }, // 2486074828
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotValueLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInkpotValueLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotValueLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotValueLibrary_Statics::ClassParams = {
	&UInkpotValueLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotValueLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotValueLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotValueLibrary()
{
	if (!Z_Registration_Info_UClass_UInkpotValueLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotValueLibrary.OuterSingleton, Z_Construct_UClass_UInkpotValueLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotValueLibrary.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotValueLibrary>()
{
	return UInkpotValueLibrary::StaticClass();
}
UInkpotValueLibrary::UInkpotValueLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotValueLibrary);
UInkpotValueLibrary::~UInkpotValueLibrary() {}
// End Class UInkpotValueLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotValueLibrary, UInkpotValueLibrary::StaticClass, TEXT("UInkpotValueLibrary"), &Z_Registration_Info_UClass_UInkpotValueLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotValueLibrary), 3317130437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_111372418(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValueLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
