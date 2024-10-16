// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InkpotEditor/Public/Blotter/BlotterVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlotterVariable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UBlotterVariable_NoRegister();
INKPOTEDITOR_API UEnum* Z_Construct_UEnum_InkpotEditor_EBlotterVariableType();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// End Cross Module References

// Begin Enum EBlotterVariableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlotterVariableType;
static UEnum* EBlotterVariableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlotterVariableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlotterVariableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InkpotEditor_EBlotterVariableType, (UObject*)Z_Construct_UPackage__Script_InkpotEditor(), TEXT("EBlotterVariableType"));
	}
	return Z_Registration_Info_UEnum_EBlotterVariableType.OuterSingleton;
}
template<> INKPOTEDITOR_API UEnum* StaticEnum<EBlotterVariableType>()
{
	return EBlotterVariableType_StaticEnum();
}
struct Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ChoicePoint.Name", "EBlotterVariableType::ChoicePoint" },
		{ "Container.Name", "EBlotterVariableType::Container" },
		{ "ControlCommand.Name", "EBlotterVariableType::ControlCommand" },
		{ "Divert.Name", "EBlotterVariableType::Divert" },
		{ "Glue.Name", "EBlotterVariableType::Glue" },
		{ "ListOrigin.Name", "EBlotterVariableType::ListOrigin" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
		{ "NativeFunctionCall.Name", "EBlotterVariableType::NativeFunctionCall" },
		{ "None.Name", "EBlotterVariableType::None" },
		{ "Object.Name", "EBlotterVariableType::Object" },
		{ "Tag.Name", "EBlotterVariableType::Tag" },
		{ "Value.Name", "EBlotterVariableType::Value" },
		{ "ValueBool.Name", "EBlotterVariableType::ValueBool" },
		{ "ValueDivertTarget.Name", "EBlotterVariableType::ValueDivertTarget" },
		{ "ValueFloat.Name", "EBlotterVariableType::ValueFloat" },
		{ "ValueInt.Name", "EBlotterVariableType::ValueInt" },
		{ "ValueList.Name", "EBlotterVariableType::ValueList" },
		{ "ValueString.Name", "EBlotterVariableType::ValueString" },
		{ "ValueVariablePointer.Name", "EBlotterVariableType::ValueVariablePointer" },
		{ "VariableAssignment.Name", "EBlotterVariableType::VariableAssignment" },
		{ "VariableReference.Name", "EBlotterVariableType::VariableReference" },
		{ "Void.Name", "EBlotterVariableType::Void" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlotterVariableType::None", (int64)EBlotterVariableType::None },
		{ "EBlotterVariableType::ChoicePoint", (int64)EBlotterVariableType::ChoicePoint },
		{ "EBlotterVariableType::Container", (int64)EBlotterVariableType::Container },
		{ "EBlotterVariableType::ControlCommand", (int64)EBlotterVariableType::ControlCommand },
		{ "EBlotterVariableType::Divert", (int64)EBlotterVariableType::Divert },
		{ "EBlotterVariableType::Glue", (int64)EBlotterVariableType::Glue },
		{ "EBlotterVariableType::NativeFunctionCall", (int64)EBlotterVariableType::NativeFunctionCall },
		{ "EBlotterVariableType::Tag", (int64)EBlotterVariableType::Tag },
		{ "EBlotterVariableType::ValueBool", (int64)EBlotterVariableType::ValueBool },
		{ "EBlotterVariableType::ValueDivertTarget", (int64)EBlotterVariableType::ValueDivertTarget },
		{ "EBlotterVariableType::ValueFloat", (int64)EBlotterVariableType::ValueFloat },
		{ "EBlotterVariableType::ValueInt", (int64)EBlotterVariableType::ValueInt },
		{ "EBlotterVariableType::ValueList", (int64)EBlotterVariableType::ValueList },
		{ "EBlotterVariableType::ValueString", (int64)EBlotterVariableType::ValueString },
		{ "EBlotterVariableType::ValueVariablePointer", (int64)EBlotterVariableType::ValueVariablePointer },
		{ "EBlotterVariableType::Value", (int64)EBlotterVariableType::Value },
		{ "EBlotterVariableType::VariableAssignment", (int64)EBlotterVariableType::VariableAssignment },
		{ "EBlotterVariableType::VariableReference", (int64)EBlotterVariableType::VariableReference },
		{ "EBlotterVariableType::Void", (int64)EBlotterVariableType::Void },
		{ "EBlotterVariableType::Object", (int64)EBlotterVariableType::Object },
		{ "EBlotterVariableType::ListOrigin", (int64)EBlotterVariableType::ListOrigin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InkpotEditor,
	nullptr,
	"EBlotterVariableType",
	"EBlotterVariableType",
	Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InkpotEditor_EBlotterVariableType()
{
	if (!Z_Registration_Info_UEnum_EBlotterVariableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlotterVariableType.InnerSingleton, Z_Construct_UEnum_InkpotEditor_EBlotterVariableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlotterVariableType.InnerSingleton;
}
// End Enum EBlotterVariableType

// Begin Class UBlotterVariable Function GetDisplayValue
struct Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics
{
	struct BlotterVariable_eventGetDisplayValue_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetDisplayValue_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetDisplayValue", nullptr, nullptr, Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::BlotterVariable_eventGetDisplayValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::BlotterVariable_eventGetDisplayValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetDisplayValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetDisplayValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetDisplayValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayValue();
	P_NATIVE_END;
}
// End Class UBlotterVariable Function GetDisplayValue

// Begin Class UBlotterVariable Function GetIndex
struct Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics
{
	struct BlotterVariable_eventGetIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetIndex", nullptr, nullptr, Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::BlotterVariable_eventGetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::BlotterVariable_eventGetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndex();
	P_NATIVE_END;
}
// End Class UBlotterVariable Function GetIndex

// Begin Class UBlotterVariable Function GetName
struct Z_Construct_UFunction_UBlotterVariable_GetName_Statics
{
	struct BlotterVariable_eventGetName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlotterVariable_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UBlotterVariable_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::BlotterVariable_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetName_Statics::BlotterVariable_eventGetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetName();
	P_NATIVE_END;
}
// End Class UBlotterVariable Function GetName

// Begin Class UBlotterVariable Function GetType
struct Z_Construct_UFunction_UBlotterVariable_GetType_Statics
{
	struct BlotterVariable_eventGetType_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlotterVariable_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventGetType_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_UBlotterVariable_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::BlotterVariable_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_GetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_GetType_Statics::BlotterVariable_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// End Class UBlotterVariable Function GetType

// Begin Class UBlotterVariable Function IsIndexEven
struct Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics
{
	struct BlotterVariable_eventIsIndexEven_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterVariable_eventIsIndexEven_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventIsIndexEven_Parms), &Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "IsIndexEven", nullptr, nullptr, Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::BlotterVariable_eventIsIndexEven_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::BlotterVariable_eventIsIndexEven_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_IsIndexEven()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_IsIndexEven_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execIsIndexEven)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsIndexEven();
	P_NATIVE_END;
}
// End Class UBlotterVariable Function IsIndexEven

// Begin Class UBlotterVariable Function IsReadOnly
struct Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics
{
	struct BlotterVariable_eventIsReadOnly_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlotterVariable_eventIsReadOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlotterVariable_eventIsReadOnly_Parms), &Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "IsReadOnly", nullptr, nullptr, Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::BlotterVariable_eventIsReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::BlotterVariable_eventIsReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_IsReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_IsReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execIsReadOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReadOnly();
	P_NATIVE_END;
}
// End Class UBlotterVariable Function IsReadOnly

// Begin Class UBlotterVariable Function SetDisplayValue
struct Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics
{
	struct BlotterVariable_eventSetDisplayValue_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Blotter" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlotterVariable_eventSetDisplayValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlotterVariable, nullptr, "SetDisplayValue", nullptr, nullptr, Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::BlotterVariable_eventSetDisplayValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::BlotterVariable_eventSetDisplayValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlotterVariable_SetDisplayValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlotterVariable_SetDisplayValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlotterVariable::execSetDisplayValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisplayValue(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBlotterVariable Function SetDisplayValue

// Begin Class UBlotterVariable
void UBlotterVariable::StaticRegisterNativesUBlotterVariable()
{
	UClass* Class = UBlotterVariable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDisplayValue", &UBlotterVariable::execGetDisplayValue },
		{ "GetIndex", &UBlotterVariable::execGetIndex },
		{ "GetName", &UBlotterVariable::execGetName },
		{ "GetType", &UBlotterVariable::execGetType },
		{ "IsIndexEven", &UBlotterVariable::execIsIndexEven },
		{ "IsReadOnly", &UBlotterVariable::execIsReadOnly },
		{ "SetDisplayValue", &UBlotterVariable::execSetDisplayValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlotterVariable);
UClass* Z_Construct_UClass_UBlotterVariable_NoRegister()
{
	return UBlotterVariable::StaticClass();
}
struct Z_Construct_UClass_UBlotterVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Blotter/BlotterVariable.h" },
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Story_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blotter/BlotterVariable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TypeText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlotterVariable_GetDisplayValue, "GetDisplayValue" }, // 1747055161
		{ &Z_Construct_UFunction_UBlotterVariable_GetIndex, "GetIndex" }, // 359502075
		{ &Z_Construct_UFunction_UBlotterVariable_GetName, "GetName" }, // 2761652091
		{ &Z_Construct_UFunction_UBlotterVariable_GetType, "GetType" }, // 963448656
		{ &Z_Construct_UFunction_UBlotterVariable_IsIndexEven, "IsIndexEven" }, // 2143400658
		{ &Z_Construct_UFunction_UBlotterVariable_IsReadOnly, "IsReadOnly" }, // 1587036662
		{ &Z_Construct_UFunction_UBlotterVariable_SetDisplayValue, "SetDisplayValue" }, // 3077925251
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlotterVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Story_MetaData), NewProp_Story_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_TypeText = { "TypeText", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, TypeText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeText_MetaData), NewProp_TypeText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Type), Z_Construct_UEnum_InkpotEditor_EBlotterVariableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2723013198
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlotterVariable, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlotterVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Story,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_TypeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlotterVariable_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlotterVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlotterVariable_Statics::ClassParams = {
	&UBlotterVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlotterVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlotterVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlotterVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlotterVariable()
{
	if (!Z_Registration_Info_UClass_UBlotterVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlotterVariable.OuterSingleton, Z_Construct_UClass_UBlotterVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlotterVariable.OuterSingleton;
}
template<> INKPOTEDITOR_API UClass* StaticClass<UBlotterVariable>()
{
	return UBlotterVariable::StaticClass();
}
UBlotterVariable::UBlotterVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlotterVariable);
UBlotterVariable::~UBlotterVariable() {}
// End Class UBlotterVariable

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlotterVariableType_StaticEnum, TEXT("EBlotterVariableType"), &Z_Registration_Info_UEnum_EBlotterVariableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2723013198U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlotterVariable, UBlotterVariable::StaticClass, TEXT("UBlotterVariable"), &Z_Registration_Info_UClass_UBlotterVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlotterVariable), 2999934685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_2230307088(TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Blotter_BlotterVariable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
