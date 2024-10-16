// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotChoice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotChoice() {}

// Begin Cross Module References
INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice();
INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotLine();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Class UInkpotChoice Function GetIndex
struct Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics
{
	struct InkpotChoice_eventGetIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Choice" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotChoice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotChoice_eventGetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotChoice, nullptr, "GetIndex", nullptr, nullptr, Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::InkpotChoice_eventGetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::InkpotChoice_eventGetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotChoice_GetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotChoice_GetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotChoice::execGetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndex();
	P_NATIVE_END;
}
// End Class UInkpotChoice Function GetIndex

// Begin Class UInkpotChoice
void UInkpotChoice::StaticRegisterNativesUInkpotChoice()
{
	UClass* Class = UInkpotChoice::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIndex", &UInkpotChoice::execGetIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotChoice);
UClass* Z_Construct_UClass_UInkpotChoice_NoRegister()
{
	return UInkpotChoice::StaticClass();
}
struct Z_Construct_UClass_UInkpotChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inkpot/InkpotChoice.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotChoice.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotChoice_GetIndex, "GetIndex" }, // 3364695929
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotChoice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInkpotChoice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInkpotLine,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotChoice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotChoice_Statics::ClassParams = {
	&UInkpotChoice::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotChoice_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotChoice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotChoice()
{
	if (!Z_Registration_Info_UClass_UInkpotChoice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotChoice.OuterSingleton, Z_Construct_UClass_UInkpotChoice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotChoice.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotChoice>()
{
	return UInkpotChoice::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotChoice);
UInkpotChoice::~UInkpotChoice() {}
// End Class UInkpotChoice

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotChoice, UInkpotChoice::StaticClass, TEXT("UInkpotChoice"), &Z_Registration_Info_UClass_UInkpotChoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotChoice), 3947650584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h_3031689446(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotChoice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
