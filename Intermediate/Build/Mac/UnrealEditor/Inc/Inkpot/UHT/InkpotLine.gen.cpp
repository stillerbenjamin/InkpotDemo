// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotLine() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOT_API UClass* Z_Construct_UClass_UInkpotLine();
INKPOT_API UClass* Z_Construct_UClass_UInkpotLine_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Class UInkpotLine Function GetStory
struct Z_Construct_UFunction_UInkpotLine_GetStory_Statics
{
	struct InkpotLine_eventGetStory_Parms
	{
		UInkpotStory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotLine_GetStory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLine_eventGetStory_Parms, ReturnValue), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_GetStory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_GetStory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_GetStory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "GetStory", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_GetStory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::InkpotLine_eventGetStory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_GetStory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::InkpotLine_eventGetStory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotLine_GetStory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_GetStory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotLine::execGetStory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInkpotStory**)Z_Param__Result=P_THIS->GetStory();
	P_NATIVE_END;
}
// End Class UInkpotLine Function GetStory

// Begin Class UInkpotLine Function GetString
struct Z_Construct_UFunction_UInkpotLine_GetString_Statics
{
	struct InkpotLine_eventGetString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLine_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLine_eventGetString_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_GetString_Statics::InkpotLine_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_GetString_Statics::InkpotLine_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotLine_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotLine::execGetString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetString();
	P_NATIVE_END;
}
// End Class UInkpotLine Function GetString

// Begin Class UInkpotLine Function GetTags
struct Z_Construct_UFunction_UInkpotLine_GetTags_Statics
{
	struct InkpotLine_eventGetTags_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLine_GetTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLine_GetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLine_eventGetTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_GetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_GetTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_GetTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "GetTags", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_GetTags_Statics::InkpotLine_eventGetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_GetTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_GetTags_Statics::InkpotLine_eventGetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotLine_GetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_GetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotLine::execGetTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetTags();
	P_NATIVE_END;
}
// End Class UInkpotLine Function GetTags

// Begin Class UInkpotLine Function GetText
struct Z_Construct_UFunction_UInkpotLine_GetText_Statics
{
	struct InkpotLine_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInkpotLine_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLine_eventGetText_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_GetText_Statics::InkpotLine_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_GetText_Statics::InkpotLine_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotLine_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotLine::execGetText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText();
	P_NATIVE_END;
}
// End Class UInkpotLine Function GetText

// Begin Class UInkpotLine Function IsDirty
struct Z_Construct_UFunction_UInkpotLine_IsDirty_Statics
{
	struct InkpotLine_eventIsDirty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InkpotLine_eventIsDirty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotLine_eventIsDirty_Parms), &Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "IsDirty", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::InkpotLine_eventIsDirty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::InkpotLine_eventIsDirty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotLine_IsDirty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_IsDirty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotLine::execIsDirty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDirty();
	P_NATIVE_END;
}
// End Class UInkpotLine Function IsDirty

// Begin Class UInkpotLine Function SetDirty
struct Z_Construct_UFunction_UInkpotLine_SetDirty_Statics
{
	struct InkpotLine_eventSetDirty_Parms
	{
		bool bIsDirty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::NewProp_bIsDirty_SetBit(void* Obj)
{
	((InkpotLine_eventSetDirty_Parms*)Obj)->bIsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotLine_eventSetDirty_Parms), &Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::NewProp_bIsDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "SetDirty", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::InkpotLine_eventSetDirty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::InkpotLine_eventSetDirty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotLine_SetDirty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_SetDirty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotLine::execSetDirty)
{
	P_GET_UBOOL(Z_Param_bIsDirty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirty(Z_Param_bIsDirty);
	P_NATIVE_END;
}
// End Class UInkpotLine Function SetDirty

// Begin Class UInkpotLine
void UInkpotLine::StaticRegisterNativesUInkpotLine()
{
	UClass* Class = UInkpotLine::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStory", &UInkpotLine::execGetStory },
		{ "GetString", &UInkpotLine::execGetString },
		{ "GetTags", &UInkpotLine::execGetTags },
		{ "GetText", &UInkpotLine::execGetText },
		{ "IsDirty", &UInkpotLine::execIsDirty },
		{ "SetDirty", &UInkpotLine::execSetDirty },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotLine);
UClass* Z_Construct_UClass_UInkpotLine_NoRegister()
{
	return UInkpotLine::StaticClass();
}
struct Z_Construct_UClass_UInkpotLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inkpot/InkpotLine.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static void NewProp_bIsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotLine_GetStory, "GetStory" }, // 3143332505
		{ &Z_Construct_UFunction_UInkpotLine_GetString, "GetString" }, // 1548492769
		{ &Z_Construct_UFunction_UInkpotLine_GetTags, "GetTags" }, // 2910999281
		{ &Z_Construct_UFunction_UInkpotLine_GetText, "GetText" }, // 3042423867
		{ &Z_Construct_UFunction_UInkpotLine_IsDirty, "IsDirty" }, // 2197024022
		{ &Z_Construct_UFunction_UInkpotLine_SetDirty, "SetDirty" }, // 3338969495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotLine_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotLine, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInkpotLine_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotLine, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
void Z_Construct_UClass_UInkpotLine_Statics::NewProp_bIsDirty_SetBit(void* Obj)
{
	((UInkpotLine*)Obj)->bIsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotLine_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotLine), &Z_Construct_UClass_UInkpotLine_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDirty_MetaData), NewProp_bIsDirty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotLine_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotLine_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotLine_Statics::NewProp_bIsDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInkpotLine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotLine_Statics::ClassParams = {
	&UInkpotLine::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInkpotLine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotLine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotLine()
{
	if (!Z_Registration_Info_UClass_UInkpotLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotLine.OuterSingleton, Z_Construct_UClass_UInkpotLine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotLine.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotLine>()
{
	return UInkpotLine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotLine);
UInkpotLine::~UInkpotLine() {}
// End Class UInkpotLine

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotLine, UInkpotLine::StaticClass, TEXT("UInkpotLine"), &Z_Registration_Info_UClass_UInkpotLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotLine), 3101969267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_3907453952(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
