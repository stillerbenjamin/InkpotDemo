// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InkpotEditor/Public/Blotter/BlotterUIEntryVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlotterUIEntryVariable() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryVariable();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// End Cross Module References

// Begin Class UBlotterUIEntryVariable Function ReceiveOnVariableUpdate
struct BlotterUIEntryVariable_eventReceiveOnVariableUpdate_Parms
{
	const UBlotterVariable* Variable;
};
static FName NAME_UBlotterUIEntryVariable_ReceiveOnVariableUpdate = FName(TEXT("ReceiveOnVariableUpdate"));
void UBlotterUIEntryVariable::ReceiveOnVariableUpdate(const UBlotterVariable* Variable)
{
	BlotterUIEntryVariable_eventReceiveOnVariableUpdate_Parms Parms;
	Parms.Variable=Variable;
	ProcessEvent(FindFunctionChecked(NAME_UBlotterUIEntryVariable_ReceiveOnVariableUpdate),&Parms);
}
struct Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnVariableUpdate" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterUIEntryVariable_eventReceiveOnVariableUpdate_Parms, Variable), Z_Construct_UClass_UBlotterVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterUIEntryVariable, nullptr, "ReceiveOnVariableUpdate", nullptr, nullptr, Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::PropPointers), sizeof(BlotterUIEntryVariable_eventReceiveOnVariableUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlotterUIEntryVariable_eventReceiveOnVariableUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlotterUIEntryVariable Function ReceiveOnVariableUpdate

// Begin Class UBlotterUIEntryVariable Function SetVariableFromText
struct Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics
{
	struct BlotterUIEntryVariable_eventSetVariableFromText_Parms
	{
		FText Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterUIEntryVariable_eventSetVariableFromText_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterUIEntryVariable, nullptr, "SetVariableFromText", nullptr, nullptr, Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::BlotterUIEntryVariable_eventSetVariableFromText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::BlotterUIEntryVariable_eventSetVariableFromText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterUIEntryVariable::execSetVariableFromText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariableFromText(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UBlotterUIEntryVariable Function SetVariableFromText

// Begin Class UBlotterUIEntryVariable
void UBlotterUIEntryVariable::StaticRegisterNativesUBlotterUIEntryVariable()
{
	UClass* Class = UBlotterUIEntryVariable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetVariableFromText", &UBlotterUIEntryVariable::execSetVariableFromText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlotterUIEntryVariable);
UClass* Z_Construct_UClass_UBlotterUIEntryVariable_NoRegister()
{
	return UBlotterUIEntryVariable::StaticClass();
}
struct Z_Construct_UClass_UBlotterUIEntryVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blotter/BlotterUIEntryVariable.h" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryVariable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterUIEntryVariable_ReceiveOnVariableUpdate, "ReceiveOnVariableUpdate" }, // 2487047172
		{ &Z_Construct_UFunction_UBlotterUIEntryVariable_SetVariableFromText, "SetVariableFromText" }, // 1711089611
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterUIEntryVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlotterUIEntryVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBlotterUIEntryVariable_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UBlotterUIEntryVariable, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterUIEntryVariable_Statics::ClassParams = {
	&UBlotterUIEntryVariable::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterUIEntryVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlotterUIEntryVariable()
{
	if (!Z_Registration_Info_UClass_UBlotterUIEntryVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterUIEntryVariable.OuterSingleton, Z_Construct_UClass_UBlotterUIEntryVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterUIEntryVariable.OuterSingleton;
}
template<> INKPOTEDITOR_API UClass* StaticClass<UBlotterUIEntryVariable>()
{
	return UBlotterUIEntryVariable::StaticClass();
}
UBlotterUIEntryVariable::UBlotterUIEntryVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlotterUIEntryVariable);
UBlotterUIEntryVariable::~UBlotterUIEntryVariable() {}
// End Class UBlotterUIEntryVariable

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterUIEntryVariable, UBlotterUIEntryVariable::StaticClass, TEXT("UBlotterUIEntryVariable"), &Z_Registration_Info_UClass_UBlotterUIEntryVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterUIEntryVariable), 2978441204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_2310778609(TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryVariable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
