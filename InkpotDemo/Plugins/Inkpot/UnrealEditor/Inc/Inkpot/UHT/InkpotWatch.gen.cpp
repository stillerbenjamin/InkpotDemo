// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotWatch.h"
#include "Inkpot/Public/Inkpot/InkpotValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotWatch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotWatch();
INKPOT_API UClass* Z_Construct_UClass_UInkpotWatch_NoRegister();
INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Delegate FOnVariableChangeMulti
struct Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics
{
	struct _Script_Inkpot_eventOnVariableChangeMulti_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotWatch.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnVariableChangeMulti_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnVariableChangeMulti_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnVariableChangeMulti_Parms, NewValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnVariableChangeMulti__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::_Script_Inkpot_eventOnVariableChangeMulti_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::_Script_Inkpot_eventOnVariableChangeMulti_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnVariableChangeMulti_DelegateWrapper(const FMulticastScriptDelegate& OnVariableChangeMulti, UInkpotStory* Story, const FString& Variable, FInkpotValue const& NewValue)
{
	struct _Script_Inkpot_eventOnVariableChangeMulti_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue NewValue;
	};
	_Script_Inkpot_eventOnVariableChangeMulti_Parms Parms;
	Parms.Story=Story;
	Parms.Variable=Variable;
	Parms.NewValue=NewValue;
	OnVariableChangeMulti.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnVariableChangeMulti

// Begin Class UInkpotWatch Function OnBeginStory
struct Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics
{
	struct InkpotWatch_eventOnBeginStory_Parms
	{
		UInkpotStory* InStory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotWatch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::NewProp_InStory = { "InStory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotWatch_eventOnBeginStory_Parms, InStory), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::NewProp_InStory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotWatch, nullptr, "OnBeginStory", nullptr, nullptr, Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::InkpotWatch_eventOnBeginStory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::InkpotWatch_eventOnBeginStory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotWatch_OnBeginStory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotWatch_OnBeginStory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotWatch::execOnBeginStory)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_InStory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginStory(Z_Param_InStory);
	P_NATIVE_END;
}
// End Class UInkpotWatch Function OnBeginStory

// Begin Class UInkpotWatch Function OnVariableChange
struct Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics
{
	struct InkpotWatch_eventOnVariableChange_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotWatch.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotWatch_eventOnVariableChange_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotWatch_eventOnVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotWatch_eventOnVariableChange_Parms, NewValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) }; // 2508912288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotWatch, nullptr, "OnVariableChange", nullptr, nullptr, Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::InkpotWatch_eventOnVariableChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::InkpotWatch_eventOnVariableChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInkpotWatch_OnVariableChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotWatch_OnVariableChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInkpotWatch::execOnVariableChange)
{
	P_GET_OBJECT(UInkpotStory,Z_Param_Story);
	P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
	P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVariableChange(Z_Param_Story,Z_Param_Variable,Z_Param_Out_NewValue);
	P_NATIVE_END;
}
// End Class UInkpotWatch Function OnVariableChange

// Begin Class UInkpotWatch
void UInkpotWatch::StaticRegisterNativesUInkpotWatch()
{
	UClass* Class = UInkpotWatch::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginStory", &UInkpotWatch::execOnBeginStory },
		{ "OnVariableChange", &UInkpotWatch::execOnVariableChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotWatch);
UClass* Z_Construct_UClass_UInkpotWatch_NoRegister()
{
	return UInkpotWatch::StaticClass();
}
struct Z_Construct_UClass_UInkpotWatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Inkpot" },
		{ "IncludePath", "Inkpot/InkpotWatch.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventOnVariableChange_MetaData[] = {
		{ "Category", "Inkpot|Watch" },
		{ "DisplayName", "OnVariableChange" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotWatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableWatch_MetaData[] = {
		{ "Category", "Inkpot|Watch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* the name of the Ink declared variable that we want to get change notifications for */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotWatch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the name of the Ink declared variable that we want to get change notifications for" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnVariableChange;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableWatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotWatch_OnBeginStory, "OnBeginStory" }, // 61024076
		{ &Z_Construct_UFunction_UInkpotWatch_OnVariableChange, "OnVariableChange" }, // 3624758771
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotWatch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotWatch_Statics::NewProp_EventOnVariableChange = { "EventOnVariableChange", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotWatch, EventOnVariableChange), Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventOnVariableChange_MetaData), NewProp_EventOnVariableChange_MetaData) }; // 4060160330
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotWatch_Statics::NewProp_VariableWatch = { "VariableWatch", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotWatch, VariableWatch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableWatch_MetaData), NewProp_VariableWatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotWatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotWatch_Statics::NewProp_EventOnVariableChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotWatch_Statics::NewProp_VariableWatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotWatch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInkpotWatch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotWatch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotWatch_Statics::ClassParams = {
	&UInkpotWatch::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInkpotWatch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotWatch_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotWatch_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotWatch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotWatch()
{
	if (!Z_Registration_Info_UClass_UInkpotWatch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotWatch.OuterSingleton, Z_Construct_UClass_UInkpotWatch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotWatch.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotWatch>()
{
	return UInkpotWatch::StaticClass();
}
UInkpotWatch::UInkpotWatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotWatch);
UInkpotWatch::~UInkpotWatch() {}
// End Class UInkpotWatch

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotWatch, UInkpotWatch::StaticClass, TEXT("UInkpotWatch"), &Z_Registration_Info_UClass_UInkpotWatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotWatch), 2727442474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_1582460008(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotWatch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
