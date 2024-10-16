// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotList() {}

// Begin Cross Module References
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotList();
INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin ScriptStruct FInkpotList
static_assert(std::is_polymorphic<FInkpotList>() == std::is_polymorphic<FInkpotValue>(), "USTRUCT FInkpotList cannot be polymorphic unless super FInkpotValue is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InkpotList;
class UScriptStruct* FInkpotList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InkpotList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InkpotList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInkpotList, (UObject*)Z_Construct_UPackage__Script_Inkpot(), TEXT("InkpotList"));
	}
	return Z_Registration_Info_UScriptStruct_InkpotList.OuterSingleton;
}
template<> INKPOT_API UScriptStruct* StaticStruct<FInkpotList>()
{
	return FInkpotList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInkpotList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotList.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInkpotList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInkpotList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	Z_Construct_UScriptStruct_FInkpotValue,
	&NewStructOps,
	"InkpotList",
	nullptr,
	0,
	sizeof(FInkpotList),
	alignof(FInkpotList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInkpotList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInkpotList()
{
	if (!Z_Registration_Info_UScriptStruct_InkpotList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InkpotList.InnerSingleton, Z_Construct_UScriptStruct_FInkpotList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InkpotList.InnerSingleton;
}
// End ScriptStruct FInkpotList

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInkpotList::StaticStruct, Z_Construct_UScriptStruct_FInkpotList_Statics::NewStructOps, TEXT("InkpotList"), &Z_Registration_Info_UScriptStruct_InkpotList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInkpotList), 2860029660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h_3852455926(TEXT("/Script/Inkpot"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotList_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
