// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InkpotEditor/Public/Blotter/BlotterUIEntryString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlotterUIEntryString() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterString_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryString();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterUIEntryString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// End Cross Module References

// Begin Class UBlotterUIEntryString Function ReceiveOnTextUpdate
struct BlotterUIEntryString_eventReceiveOnTextUpdate_Parms
{
	const UBlotterString* Variable;
};
static FName NAME_UBlotterUIEntryString_ReceiveOnTextUpdate = FName(TEXT("ReceiveOnTextUpdate"));
void UBlotterUIEntryString::ReceiveOnTextUpdate(const UBlotterString* Variable)
{
	BlotterUIEntryString_eventReceiveOnTextUpdate_Parms Parms;
	Parms.Variable=Variable;
	ProcessEvent(FindFunctionChecked(NAME_UBlotterUIEntryString_ReceiveOnTextUpdate),&Parms);
}
struct Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnTextUpdate" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryString.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterUIEntryString_eventReceiveOnTextUpdate_Parms, Variable), Z_Construct_UClass_UBlotterString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterUIEntryString, nullptr, "ReceiveOnTextUpdate", nullptr, nullptr, Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::PropPointers), sizeof(BlotterUIEntryString_eventReceiveOnTextUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(BlotterUIEntryString_eventReceiveOnTextUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBlotterUIEntryString Function ReceiveOnTextUpdate

// Begin Class UBlotterUIEntryString
void UBlotterUIEntryString::StaticRegisterNativesUBlotterUIEntryString()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlotterUIEntryString);
UClass* Z_Construct_UClass_UBlotterUIEntryString_NoRegister()
{
	return UBlotterUIEntryString::StaticClass();
}
struct Z_Construct_UClass_UBlotterUIEntryString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blotter/BlotterUIEntryString.h" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterUIEntryString.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterUIEntryString_ReceiveOnTextUpdate, "ReceiveOnTextUpdate" }, // 2623746822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterUIEntryString>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlotterUIEntryString_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryString_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBlotterUIEntryString_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UBlotterUIEntryString, IUserObjectListEntry), false },  // 228470651
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterUIEntryString_Statics::ClassParams = {
	&UBlotterUIEntryString::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterUIEntryString_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterUIEntryString_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlotterUIEntryString()
{
	if (!Z_Registration_Info_UClass_UBlotterUIEntryString.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterUIEntryString.OuterSingleton, Z_Construct_UClass_UBlotterUIEntryString_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterUIEntryString.OuterSingleton;
}
template<> INKPOTEDITOR_API UClass* StaticClass<UBlotterUIEntryString>()
{
	return UBlotterUIEntryString::StaticClass();
}
UBlotterUIEntryString::UBlotterUIEntryString(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlotterUIEntryString);
UBlotterUIEntryString::~UBlotterUIEntryString() {}
// End Class UBlotterUIEntryString

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryString_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterUIEntryString, UBlotterUIEntryString::StaticClass, TEXT("UBlotterUIEntryString"), &Z_Registration_Info_UClass_UBlotterUIEntryString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterUIEntryString), 2343329870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryString_h_1110438462(TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterUIEntryString_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
