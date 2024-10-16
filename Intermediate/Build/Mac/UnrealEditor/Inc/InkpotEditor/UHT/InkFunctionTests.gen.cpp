// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InkpotEditor/Public/Test/InkFunctionTests.h"
#include "Inkpot/Public/Inkpot/InkpotValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkFunctionTests() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkFunctionTests();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkFunctionTests_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// End Cross Module References

// Begin Class UInkFunctionTests Function Message
struct Z_Construct_UFunction_UInkFunctionTests_Message_Statics
{
	struct InkFunctionTests_eventMessage_Parms
	{
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventMessage_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 2508912288
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkFunctionTests_Message_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Message_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkFunctionTests_Message_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkFunctionTests, nullptr, "Message", nullptr, nullptr, Z_Construct_UFunction_UInkFunctionTests_Message_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::InkFunctionTests_eventMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkFunctionTests_Message_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkFunctionTests_Message_Statics::InkFunctionTests_eventMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkFunctionTests_Message()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkFunctionTests_Message_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkFunctionTests::execMessage)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=P_THIS->Message(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// End Class UInkFunctionTests Function Message

// Begin Class UInkFunctionTests Function Multiply
struct Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics
{
	struct InkFunctionTests_eventMultiply_Parms
	{
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventMultiply_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 2508912288
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventMultiply_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkFunctionTests, nullptr, "Multiply", nullptr, nullptr, Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::InkFunctionTests_eventMultiply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::InkFunctionTests_eventMultiply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkFunctionTests_Multiply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkFunctionTests_Multiply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkFunctionTests::execMultiply)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=P_THIS->Multiply(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// End Class UInkFunctionTests Function Multiply

// Begin Class UInkFunctionTests Function Test
struct Z_Construct_UFunction_UInkFunctionTests_Test_Statics
{
	struct InkFunctionTests_eventTest_Parms
	{
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Test_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkFunctionTests_Test_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventTest_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 2508912288
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Test_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventTest_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkFunctionTests_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Test_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Test_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Test_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Test_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkFunctionTests_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkFunctionTests, nullptr, "Test", nullptr, nullptr, Z_Construct_UFunction_UInkFunctionTests_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Test_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkFunctionTests_Test_Statics::InkFunctionTests_eventTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkFunctionTests_Test_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkFunctionTests_Test_Statics::InkFunctionTests_eventTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkFunctionTests_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkFunctionTests_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkFunctionTests::execTest)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=P_THIS->Test(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// End Class UInkFunctionTests Function Test

// Begin Class UInkFunctionTests Function Times
struct Z_Construct_UFunction_UInkFunctionTests_Times_Statics
{
	struct InkFunctionTests_eventTimes_Parms
	{
		TArray<FInkpotValue> InValues;
		FInkpotValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventTimes_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) }; // 2508912288
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkFunctionTests_eventTimes_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkFunctionTests_Times_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkFunctionTests_Times_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkFunctionTests_Times_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkFunctionTests, nullptr, "Times", nullptr, nullptr, Z_Construct_UFunction_UInkFunctionTests_Times_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::InkFunctionTests_eventTimes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkFunctionTests_Times_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkFunctionTests_Times_Statics::InkFunctionTests_eventTimes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkFunctionTests_Times()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkFunctionTests_Times_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkFunctionTests::execTimes)
{
	P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInkpotValue*)Z_Param__Result=P_THIS->Times(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// End Class UInkFunctionTests Function Times

// Begin Class UInkFunctionTests
void UInkFunctionTests::StaticRegisterNativesUInkFunctionTests()
{
	UClass* Class = UInkFunctionTests::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Message", &UInkFunctionTests::execMessage },
		{ "Multiply", &UInkFunctionTests::execMultiply },
		{ "Test", &UInkFunctionTests::execTest },
		{ "Times", &UInkFunctionTests::execTimes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkFunctionTests);
UClass* Z_Construct_UClass_UInkFunctionTests_NoRegister()
{
	return UInkFunctionTests::StaticClass();
}
struct Z_Construct_UClass_UInkFunctionTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test/InkFunctionTests.h" },
		{ "ModuleRelativePath", "Public/Test/InkFunctionTests.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkFunctionTests_Message, "Message" }, // 2127485404
		{ &Z_Construct_UFunction_UInkFunctionTests_Multiply, "Multiply" }, // 3730006156
		{ &Z_Construct_UFunction_UInkFunctionTests_Test, "Test" }, // 1618982291
		{ &Z_Construct_UFunction_UInkFunctionTests_Times, "Times" }, // 405169026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkFunctionTests>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInkFunctionTests_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkFunctionTests_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkFunctionTests_Statics::ClassParams = {
	&UInkFunctionTests::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkFunctionTests_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkFunctionTests_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkFunctionTests()
{
	if (!Z_Registration_Info_UClass_UInkFunctionTests.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkFunctionTests.OuterSingleton, Z_Construct_UClass_UInkFunctionTests_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkFunctionTests.OuterSingleton;
}
template<> INKPOTEDITOR_API UClass* StaticClass<UInkFunctionTests>()
{
	return UInkFunctionTests::StaticClass();
}
UInkFunctionTests::UInkFunctionTests(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkFunctionTests);
UInkFunctionTests::~UInkFunctionTests() {}
// End Class UInkFunctionTests

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkFunctionTests, UInkFunctionTests::StaticClass, TEXT("UInkFunctionTests"), &Z_Registration_Info_UClass_UInkFunctionTests, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkFunctionTests), 3441659150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_1801742325(TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Test_InkFunctionTests_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
