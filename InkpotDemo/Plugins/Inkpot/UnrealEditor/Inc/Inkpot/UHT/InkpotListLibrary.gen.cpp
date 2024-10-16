// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotListLibrary.h"
#include "Inkpot/Public/Inkpot/InkpotList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotListLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotListLibrary();
INKPOT_API UClass* Z_Construct_UClass_UInkpotListLibrary_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotList();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Class UInkpotListLibrary Function All
struct Z_Construct_UFunction_UInkpotListLibrary_All_Statics
{
	struct InkpotListLibrary_eventAll_Parms
	{
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * All\n\x09 * Returns a list containing the all of the items as defined by the list origin.\n\x09 * Equivalent of calling LIST_ALL( A ) in ink \n\x09 * ( List will need a validated origin )\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A new inkpot list that cotains all the items defined in the origin.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "all" },
		{ "DisplayName", "All" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All\nReturns a list containing the all of the items as defined by the list origin.\nEquivalent of calling LIST_ALL( A ) in ink\n( List will need a validated origin )\n\n@param A - InkpotList.\n@returns A new inkpot list that cotains all the items defined in the origin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_All_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAll_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_All_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventAll_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_All_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_All_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_All_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_All_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "All", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_All_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::InkpotListLibrary_eventAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_All_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_All_Statics::InkpotListLibrary_eventAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_All()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_All_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execAll)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::All(Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function All

// Begin Class UInkpotListLibrary Function ContainsItem
struct Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics
{
	struct InkpotListLibrary_eventContainsItem_Parms
	{
		FInkpotList Source;
		FString ItemName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContainsItem\n\x09 * Returns true if the list contains an item matching the given name.\n\x09 *\n\x09 * @param Source - InkpotList to test.\n\x09 * @param ItemName - String, item name.\n\x09 * @returns true if Source contains ItemName, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "?" },
		{ "DisplayName", "Contains Item" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContainsItem\nReturns true if the list contains an item matching the given name.\n\n@param Source - InkpotList to test.\n@param ItemName - String, item name.\n@returns true if Source contains ItemName, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsItem_Parms, Source), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 2860029660
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsItem_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
void Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventContainsItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventContainsItem_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ContainsItem", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::InkpotListLibrary_eventContainsItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::InkpotListLibrary_eventContainsItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ContainsItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ContainsItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execContainsItem)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Source);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::ContainsItem(Z_Param_Out_Source,Z_Param_ItemName);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function ContainsItem

// Begin Class UInkpotListLibrary Function ContainsList
struct Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics
{
	struct InkpotListLibrary_eventContainsList_Parms
	{
		FInkpotList Source;
		FInkpotList Querant;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ContainsList\n\x09 * Returns true if the the first list contains all the items that are in the second list. \n\x09 * Equivalent to calling (A ? B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns true if A contains B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "?" },
		{ "DisplayName", "Contains List" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ContainsList\nReturns true if the the first list contains all the items that are in the second list.\nEquivalent to calling (A ? B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns true if A contains B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Querant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Querant;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsList_Parms, Source), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_Querant = { "Querant", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventContainsList_Parms, Querant), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Querant_MetaData), NewProp_Querant_MetaData) }; // 2860029660
void Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventContainsList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventContainsList_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_Querant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ContainsList", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::InkpotListLibrary_eventContainsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::InkpotListLibrary_eventContainsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ContainsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ContainsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execContainsList)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Source);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Querant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::ContainsList(Z_Param_Out_Source,Z_Param_Out_Querant);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function ContainsList

// Begin Class UInkpotListLibrary Function Equals
struct Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics
{
	struct InkpotListLibrary_eventEquals_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Equals\n\x09 * Returns true if the both lists contain the same items, false otherwise.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A == B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equals" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equals\nReturns true if the both lists contain the same items, false otherwise.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A == B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventEquals_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventEquals_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
void Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventEquals_Parms), &Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Equals", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::InkpotListLibrary_eventEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::InkpotListLibrary_eventEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execEquals)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::Equals(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function Equals

// Begin Class UInkpotListLibrary Function GreaterThan
struct Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics
{
	struct InkpotListLibrary_eventGreaterThan_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GreaterThan\n\x09 * Returns true if all the item values in the first list are greater than all the item values in the second list. \n\x09 * Equivalent to calling (A > B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A > B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", ">" },
		{ "DisplayName", "Greater Than" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GreaterThan\nReturns true if all the item values in the first list are greater than all the item values in the second list.\nEquivalent to calling (A > B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A > B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventGreaterThan_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventGreaterThan_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
void Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventGreaterThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventGreaterThan_Parms), &Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "GreaterThan", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::InkpotListLibrary_eventGreaterThan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::InkpotListLibrary_eventGreaterThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_GreaterThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_GreaterThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execGreaterThan)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::GreaterThan(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function GreaterThan

// Begin Class UInkpotListLibrary Function GreaterThanOrEquals
struct Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics
{
	struct InkpotListLibrary_eventGreaterThanOrEquals_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GreaterThanOrEquals\n\x09 * Returns true if the item values in the first list overlap or are all greater than the item values in the second list. \n\x09 * None of the item values in the current list must fall below the item values in the passed in list. \n\x09 * Equivalent to (A >= B) in ink, or LIST_MIN(A) >= LIST_MIN(B) && LIST_MAX(A) >= LIST_MAX(B).\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A >= B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", ">=" },
		{ "DisplayName", "Greater than or equals" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GreaterThanOrEquals\nReturns true if the item values in the first list overlap or are all greater than the item values in the second list.\nNone of the item values in the current list must fall below the item values in the passed in list.\nEquivalent to (A >= B) in ink, or LIST_MIN(A) >= LIST_MIN(B) && LIST_MAX(A) >= LIST_MAX(B).\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A >= B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventGreaterThanOrEquals_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventGreaterThanOrEquals_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
void Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventGreaterThanOrEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventGreaterThanOrEquals_Parms), &Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "GreaterThanOrEquals", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::InkpotListLibrary_eventGreaterThanOrEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::InkpotListLibrary_eventGreaterThanOrEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execGreaterThanOrEquals)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::GreaterThanOrEquals(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function GreaterThanOrEquals

// Begin Class UInkpotListLibrary Function HasIntersection
struct Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics
{
	struct InkpotListLibrary_eventHasIntersection_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * HasIntersection\n\x09 * Returns true if there is an intersection of both lists passed in \n\x09 * - i.e. both lists share some items\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if there is an intersection, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "(^)" },
		{ "DisplayName", "Has Intersection" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HasIntersection\nReturns true if there is an intersection of both lists passed in\n- i.e. both lists share some items\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if there is an intersection, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventHasIntersection_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventHasIntersection_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
void Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventHasIntersection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventHasIntersection_Parms), &Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "HasIntersection", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::InkpotListLibrary_eventHasIntersection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::InkpotListLibrary_eventHasIntersection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_HasIntersection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_HasIntersection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execHasIntersection)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::HasIntersection(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function HasIntersection

// Begin Class UInkpotListLibrary Function Intersect
struct Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics
{
	struct InkpotListLibrary_eventIntersect_Parms
	{
		FInkpotList A;
		FInkpotList B;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Intersect\n\x09 * Returns a new list that is the intersection of both lists passed in \n\x09 * - i.e. a list of the items that are shared between the two lists. \n\x09 * Equivalent to calling (A ^ B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns A new Inkpotlist.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "^" },
		{ "DisplayName", "Intersect" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intersect\nReturns a new list that is the intersection of both lists passed in\n- i.e. a list of the items that are shared between the two lists.\nEquivalent to calling (A ^ B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns A new Inkpotlist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventIntersect_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventIntersect_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventIntersect_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Intersect", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::InkpotListLibrary_eventIntersect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::InkpotListLibrary_eventIntersect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Intersect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Intersect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execIntersect)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Intersect(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function Intersect

// Begin Class UInkpotListLibrary Function Inverse
struct Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics
{
	struct InkpotListLibrary_eventInverse_Parms
	{
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Inverse\n\x09 * Returns a list containing the inverse of the list passed in with respect to the origin.\n\x09 * Equivalent of calling LIST_INVERT( A ) in ink \n\x09 * ( List will need a validated origin )\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A new inkpot list that is the inverse of the passed in list.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "~" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inverse\nReturns a list containing the inverse of the list passed in with respect to the origin.\nEquivalent of calling LIST_INVERT( A ) in ink\n( List will need a validated origin )\n\n@param A - InkpotList.\n@returns A new inkpot list that is the inverse of the passed in list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventInverse_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventInverse_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Inverse", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::InkpotListLibrary_eventInverse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::InkpotListLibrary_eventInverse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Inverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Inverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execInverse)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Inverse(Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function Inverse

// Begin Class UInkpotListLibrary Function LessThan
struct Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics
{
	struct InkpotListLibrary_eventLessThan_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * LessThan\n\x09 * Returns true if all the item values first list are less than all the item values in the second list. \n\x09 * Equivalent to calling (A < B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A < B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "<" },
		{ "DisplayName", "Less than" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LessThan\nReturns true if all the item values first list are less than all the item values in the second list.\nEquivalent to calling (A < B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A < B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventLessThan_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventLessThan_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
void Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventLessThan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventLessThan_Parms), &Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "LessThan", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::InkpotListLibrary_eventLessThan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::InkpotListLibrary_eventLessThan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_LessThan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_LessThan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execLessThan)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::LessThan(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function LessThan

// Begin Class UInkpotListLibrary Function LessThanOrEquals
struct Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics
{
	struct InkpotListLibrary_eventLessThanOrEquals_Parms
	{
		FInkpotList A;
		FInkpotList B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * LessThanOrEquals\n\x09 * Returns true if the item values in the first list overlap or are all less than the item values in the second list. \n\x09 * None of the item values in the current list must go above the item values in the passed in list. \n\x09 * Equivalent to (A <= B) in ink, or LIST_MAX(A) <= LIST_MAX(B) && LIST_MIN(A) <= LIST_MIN(B).\n\x09 * \n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns True if A <= B, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "<=" },
		{ "DisplayName", "Less than or equals" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LessThanOrEquals\nReturns true if the item values in the first list overlap or are all less than the item values in the second list.\nNone of the item values in the current list must go above the item values in the passed in list.\nEquivalent to (A <= B) in ink, or LIST_MAX(A) <= LIST_MAX(B) && LIST_MIN(A) <= LIST_MIN(B).\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns True if A <= B, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventLessThanOrEquals_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventLessThanOrEquals_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
void Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotListLibrary_eventLessThanOrEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventLessThanOrEquals_Parms), &Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "LessThanOrEquals", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::InkpotListLibrary_eventLessThanOrEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::InkpotListLibrary_eventLessThanOrEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execLessThanOrEquals)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInkpotListLibrary::LessThanOrEquals(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function LessThanOrEquals

// Begin Class UInkpotListLibrary Function MakeInkpotList
struct Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics
{
	struct InkpotListLibrary_eventMakeInkpotList_Parms
	{
		UInkpotStory* Story;
		FString Origin;
		FString Value;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeInkpotList \n\x09 * Creates an Inkpot List from the origin name and a comma delimeted string of item names.\n\x09 * \n\x09 * Note: \n\x09 * If all items are dot prefixed with the origin name, origin can be left empty.\n\x09 *\n\x09 * @param Story - The story in which the origin is defined.\n\x09 * @param Origin - The origin, this will be the name of the list in the Ink script. May be empty if all items specify origin.\n\x09 * @param Value - A comma delimeted list of item names. Item names may have a dot delimeted origin name prefix from other origins.  \n\x09 * @returns An Inkpotlist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeInkpotList\nCreates an Inkpot List from the origin name and a comma delimeted string of item names.\n\nNote:\nIf all items are dot prefixed with the origin name, origin can be left empty.\n\n@param Story - The story in which the origin is defined.\n@param Origin - The origin, this will be the name of the list in the Ink script. May be empty if all items specify origin.\n@param Value - A comma delimeted list of item names. Item names may have a dot delimeted origin name prefix from other origins.\n@returns An Inkpotlist." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotList_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotList_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotList_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MakeInkpotList", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::InkpotListLibrary_eventMakeInkpotList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::InkpotListLibrary_eventMakeInkpotList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMakeInkpotList)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_PROPERTY(FStrProperty,Z_Param_Origin);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MakeInkpotList(Z_Param_Story,Z_Param_Origin,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function MakeInkpotList

// Begin Class UInkpotListLibrary Function MakeInkpotListFromStringArray
struct Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics
{
	struct InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms
	{
		UInkpotStory* Story;
		FString Origin;
		TArray<FString> Values;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MakeInkpotListFromStringArray\n\x09 * Creates an Inkpot List from the origin name and an array of item names.\n\x09 * \n\x09 * Note: \n\x09 * If all items are dot prefixed with the origin name, origin can be left empty.\n\x09 * \n\x09 * @param Story - The story in which the origin is defined.\n\x09 * @param Origin - The origin, this will be the name of the list in the Ink script. May be empty if all items specify origin.\n\x09 * @param Values - An array of strings for the item names. Item names may have a dot delimeted origin name prefix from other origins.  \n\x09 * @returns A new Inkpotlist. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MakeInkpotListFromStringArray\nCreates an Inkpot List from the origin name and an array of item names.\n\nNote:\nIf all items are dot prefixed with the origin name, origin can be left empty.\n\n@param Story - The story in which the origin is defined.\n@param Origin - The origin, this will be the name of the list in the Ink script. May be empty if all items specify origin.\n@param Values - An array of strings for the item names. Item names may have a dot delimeted origin name prefix from other origins.\n@returns A new Inkpotlist." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MakeInkpotListFromStringArray", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::InkpotListLibrary_eventMakeInkpotListFromStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMakeInkpotListFromStringArray)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_PROPERTY(FStrProperty,Z_Param_Origin);
	P_GET_TARRAY(FString,Z_Param_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MakeInkpotListFromStringArray(Z_Param_Story,Z_Param_Origin,Z_Param_Values);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function MakeInkpotListFromStringArray

// Begin Class UInkpotListLibrary Function MaxItem
struct Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics
{
	struct InkpotListLibrary_eventMaxItem_Parms
	{
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MaxItem\n\x09 * Returns a list containing the max item from the passed in list.\n\x09 * Equivalent of calling ( LIST_MAX( A ) ) in ink \n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A new inkpot list with the max item.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "max" },
		{ "DisplayName", "MaxItem" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxItem\nReturns a list containing the max item from the passed in list.\nEquivalent of calling ( LIST_MAX( A ) ) in ink\n\n@param A - InkpotList.\n@returns A new inkpot list with the max item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMaxItem_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMaxItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MaxItem", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::InkpotListLibrary_eventMaxItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::InkpotListLibrary_eventMaxItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MaxItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MaxItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMaxItem)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MaxItem(Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function MaxItem

// Begin Class UInkpotListLibrary Function MinItem
struct Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics
{
	struct InkpotListLibrary_eventMinItem_Parms
	{
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * MinItem\n\x09 * Returns a list containing the min item from the passed in list.\n\x09 * Equivalent of calling ( LIST_MIN( A ) ) in ink \n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A new inkpot list with the min item.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "min" },
		{ "DisplayName", "MinItem" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MinItem\nReturns a list containing the min item from the passed in list.\nEquivalent of calling ( LIST_MIN( A ) ) in ink\n\n@param A - InkpotList.\n@returns A new inkpot list with the min item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMinItem_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventMinItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "MinItem", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::InkpotListLibrary_eventMinItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::InkpotListLibrary_eventMinItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_MinItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_MinItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execMinItem)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::MinItem(Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function MinItem

// Begin Class UInkpotListLibrary Function ToString
struct Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics
{
	struct InkpotListLibrary_eventToString_Parms
	{
		FInkpotList Value;
		FString ReturnValue;
		bool bUseOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ToString ( Inkpot List )\n\x09 * prints the contents of the list to a comma delimeted string.\n\x09 *\n\x09 * @param Value - The list to convert.\n\x09 * @param ReturnValue - The list as a comma delimeted string of item names.\n\x09 * @param bUseOrigin - Should the item names have their origin as a dot delimeted prefix.\n\x09 */" },
#endif
		{ "CPP_Default_bUseOrigin", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToString ( Inkpot List )\nprints the contents of the list to a comma delimeted string.\n\n@param Value - The list to convert.\n@param ReturnValue - The list as a comma delimeted string of item names.\n@param bUseOrigin - Should the item names have their origin as a dot delimeted prefix." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static void NewProp_bUseOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToString_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2860029660
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_bUseOrigin_SetBit(void* Obj)
{
	((InkpotListLibrary_eventToString_Parms*)Obj)->bUseOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_bUseOrigin = { "bUseOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventToString_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_bUseOrigin_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::NewProp_bUseOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::InkpotListLibrary_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::InkpotListLibrary_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execToString)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ReturnValue);
	P_GET_UBOOL(Z_Param_bUseOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotListLibrary::ToString(Z_Param_Out_Value,Z_Param_Out_ReturnValue,Z_Param_bUseOrigin);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function ToString

// Begin Class UInkpotListLibrary Function ToStringArray
struct Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics
{
	struct InkpotListLibrary_eventToStringArray_Parms
	{
		FInkpotList Value;
		TArray<FString> ReturnValue;
		bool bUseOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ToStringArray ( Inkpot List )\n\x09 * Converts an inkpot list to an array of strings.\n\x09 *\n\x09 * @param Value - List to convert.\n\x09 * @param ReturnValue - The list as a string array of item names.\n\x09 * @param bUseOrigin - Should the item names have their origin as a dot delimeted prefix.\n\x09 */" },
#endif
		{ "CPP_Default_bUseOrigin", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ToStringArray ( Inkpot List )\nConverts an inkpot list to an array of strings.\n\n@param Value - List to convert.\n@param ReturnValue - The list as a string array of item names.\n@param bUseOrigin - Should the item names have their origin as a dot delimeted prefix." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static void NewProp_bUseOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToStringArray_Parms, Value), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2860029660
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventToStringArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_bUseOrigin_SetBit(void* Obj)
{
	((InkpotListLibrary_eventToStringArray_Parms*)Obj)->bUseOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_bUseOrigin = { "bUseOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotListLibrary_eventToStringArray_Parms), &Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_bUseOrigin_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_ReturnValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::NewProp_bUseOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "ToStringArray", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::InkpotListLibrary_eventToStringArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::InkpotListLibrary_eventToStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_ToStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_ToStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execToStringArray)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_Value);
	P_GET_TARRAY_REF(FString,Z_Param_Out_ReturnValue);
	P_GET_UBOOL(Z_Param_bUseOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInkpotListLibrary::ToStringArray(Z_Param_Out_Value,Z_Param_Out_ReturnValue,Z_Param_bUseOrigin);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function ToStringArray

// Begin Class UInkpotListLibrary Function Union
struct Z_Construct_UFunction_UInkpotListLibrary_Union_Statics
{
	struct InkpotListLibrary_eventUnion_Parms
	{
		FInkpotList A;
		FInkpotList B;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Union\n\x09 * Returns a new list that is the combination of both lists passed in. \n\x09 * Equivalent to calling (A + B) in ink..\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns A new Inkpotlist.\n\x09 */" },
#endif
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "Union" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Union\nReturns a new list that is the combination of both lists passed in.\nEquivalent to calling (A + B) in ink..\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns A new Inkpotlist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventUnion_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventUnion_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventUnion_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Union", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::InkpotListLibrary_eventUnion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::InkpotListLibrary_eventUnion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Union()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Union_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execUnion)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Union(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function Union

// Begin Class UInkpotListLibrary Function Validate
struct Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics
{
	struct InkpotListLibrary_eventValidate_Parms
	{
		UInkpotStory* Story;
		FInkpotList A;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Validate\n\x09 * Validates the lists origin againt a story.\n\x09 * This makes sure that the list is valid in the context of the passed in story.\n\x09 * ie checks that the origin name of the list matches a list declaration in the ink story. \n\x09 * \n\x09 * Only required for lists that were created with no story context for certain operations (inverse, all).\n\x09 * List validation will happen automatically when a list value is passed to the Ink runtime story. \n\x09 * Lists passed to Blueprint from Ink will not need validation. \n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @returns A reference to the list passed in.\n\x09 */" },
#endif
		{ "DisplayName", "Validate" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate\nValidates the lists origin againt a story.\nThis makes sure that the list is valid in the context of the passed in story.\nie checks that the origin name of the list matches a list declaration in the ink story.\n\nOnly required for lists that were created with no story context for certain operations (inverse, all).\nList validation will happen automatically when a list value is passed to the Ink runtime story.\nLists passed to Blueprint from Ink will not need validation.\n\n@param A - InkpotList.\n@returns A reference to the list passed in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventValidate_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventValidate_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventValidate_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Validate", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::InkpotListLibrary_eventValidate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::InkpotListLibrary_eventValidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Validate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Validate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execValidate)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Validate(Z_Param_Story,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function Validate

// Begin Class UInkpotListLibrary Function Without
struct Z_Construct_UFunction_UInkpotListLibrary_Without_Statics
{
	struct InkpotListLibrary_eventWithout_Parms
	{
		FInkpotList A;
		FInkpotList B;
		FInkpotList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|List" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Without\n\x09 * Returns a new list that is the first list with items in the second list removed. \n\x09 * Equivalent to calling (A - B) in ink.\n\x09 *\n\x09 * @param A - InkpotList.\n\x09 * @param B - InkpotList.\n\x09 * @returns A new Inkpotlist.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Without" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Without\nReturns a new list that is the first list with items in the second list removed.\nEquivalent to calling (A - B) in ink.\n\n@param A - InkpotList.\n@param B - InkpotList.\n@returns A new Inkpotlist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventWithout_Parms, A), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventWithout_Parms, B), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 2860029660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotListLibrary_eventWithout_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotList, METADATA_PARAMS(0, nullptr) }; // 2860029660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotListLibrary, nullptr, "Without", nullptr, nullptr, Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::InkpotListLibrary_eventWithout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::InkpotListLibrary_eventWithout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotListLibrary_Without()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotListLibrary_Without_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotListLibrary::execWithout)
{
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_A);
	P_GET_STRUCT_REF(FInkpotList,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotList*)Z_Param__Result=UInkpotListLibrary::Without(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UInkpotListLibrary Function Without

// Begin Class UInkpotListLibrary
void UInkpotListLibrary::StaticRegisterNativesUInkpotListLibrary()
{
	UClass* Class = UInkpotListLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "All", &UInkpotListLibrary::execAll },
		{ "ContainsItem", &UInkpotListLibrary::execContainsItem },
		{ "ContainsList", &UInkpotListLibrary::execContainsList },
		{ "Equals", &UInkpotListLibrary::execEquals },
		{ "GreaterThan", &UInkpotListLibrary::execGreaterThan },
		{ "GreaterThanOrEquals", &UInkpotListLibrary::execGreaterThanOrEquals },
		{ "HasIntersection", &UInkpotListLibrary::execHasIntersection },
		{ "Intersect", &UInkpotListLibrary::execIntersect },
		{ "Inverse", &UInkpotListLibrary::execInverse },
		{ "LessThan", &UInkpotListLibrary::execLessThan },
		{ "LessThanOrEquals", &UInkpotListLibrary::execLessThanOrEquals },
		{ "MakeInkpotList", &UInkpotListLibrary::execMakeInkpotList },
		{ "MakeInkpotListFromStringArray", &UInkpotListLibrary::execMakeInkpotListFromStringArray },
		{ "MaxItem", &UInkpotListLibrary::execMaxItem },
		{ "MinItem", &UInkpotListLibrary::execMinItem },
		{ "ToString", &UInkpotListLibrary::execToString },
		{ "ToStringArray", &UInkpotListLibrary::execToStringArray },
		{ "Union", &UInkpotListLibrary::execUnion },
		{ "Validate", &UInkpotListLibrary::execValidate },
		{ "Without", &UInkpotListLibrary::execWithout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotListLibrary);
UClass* Z_Construct_UClass_UInkpotListLibrary_NoRegister()
{
	return UInkpotListLibrary::StaticClass();
}
struct Z_Construct_UClass_UInkpotListLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Inkpot/InkpotListLibrary.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotListLibrary.h" },
		{ "ScriptName", "InkpotListLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotListLibrary_All, "All" }, // 2173433980
		{ &Z_Construct_UFunction_UInkpotListLibrary_ContainsItem, "ContainsItem" }, // 2641234592
		{ &Z_Construct_UFunction_UInkpotListLibrary_ContainsList, "ContainsList" }, // 3055248868
		{ &Z_Construct_UFunction_UInkpotListLibrary_Equals, "Equals" }, // 1960732898
		{ &Z_Construct_UFunction_UInkpotListLibrary_GreaterThan, "GreaterThan" }, // 821049727
		{ &Z_Construct_UFunction_UInkpotListLibrary_GreaterThanOrEquals, "GreaterThanOrEquals" }, // 1671920267
		{ &Z_Construct_UFunction_UInkpotListLibrary_HasIntersection, "HasIntersection" }, // 1582756726
		{ &Z_Construct_UFunction_UInkpotListLibrary_Intersect, "Intersect" }, // 3882045535
		{ &Z_Construct_UFunction_UInkpotListLibrary_Inverse, "Inverse" }, // 207610693
		{ &Z_Construct_UFunction_UInkpotListLibrary_LessThan, "LessThan" }, // 2534050956
		{ &Z_Construct_UFunction_UInkpotListLibrary_LessThanOrEquals, "LessThanOrEquals" }, // 3335529638
		{ &Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotList, "MakeInkpotList" }, // 1835052740
		{ &Z_Construct_UFunction_UInkpotListLibrary_MakeInkpotListFromStringArray, "MakeInkpotListFromStringArray" }, // 3111878011
		{ &Z_Construct_UFunction_UInkpotListLibrary_MaxItem, "MaxItem" }, // 3783539836
		{ &Z_Construct_UFunction_UInkpotListLibrary_MinItem, "MinItem" }, // 2504746680
		{ &Z_Construct_UFunction_UInkpotListLibrary_ToString, "ToString" }, // 1572091451
		{ &Z_Construct_UFunction_UInkpotListLibrary_ToStringArray, "ToStringArray" }, // 3817626850
		{ &Z_Construct_UFunction_UInkpotListLibrary_Union, "Union" }, // 3442972608
		{ &Z_Construct_UFunction_UInkpotListLibrary_Validate, "Validate" }, // 403742500
		{ &Z_Construct_UFunction_UInkpotListLibrary_Without, "Without" }, // 150381940
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotListLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInkpotListLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotListLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotListLibrary_Statics::ClassParams = {
	&UInkpotListLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotListLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotListLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotListLibrary()
{
	if (!Z_Registration_Info_UClass_UInkpotListLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotListLibrary.OuterSingleton, Z_Construct_UClass_UInkpotListLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotListLibrary.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotListLibrary>()
{
	return UInkpotListLibrary::StaticClass();
}
UInkpotListLibrary::UInkpotListLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotListLibrary);
UInkpotListLibrary::~UInkpotListLibrary() {}
// End Class UInkpotListLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotListLibrary, UInkpotListLibrary::StaticClass, TEXT("UInkpotListLibrary"), &Z_Registration_Info_UClass_UInkpotListLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotListLibrary), 2250242204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_1925064371(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotListLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
