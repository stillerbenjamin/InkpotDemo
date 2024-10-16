// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Asset/InkpotStoryAsset.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotStoryAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Class UInkpotStoryAsset
void UInkpotStoryAsset::StaticRegisterNativesUInkpotStoryAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStoryAsset);
UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister()
{
	return UInkpotStoryAsset::StaticClass();
}
struct Z_Construct_UClass_UInkpotStoryAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Asset/InkpotStoryAsset.h" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, JSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSON_MetaData), NewProp_JSON_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00420008000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInkpotStoryAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryAsset_Statics::ClassParams = {
	&UInkpotStoryAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotStoryAsset()
{
	if (!Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton, Z_Construct_UClass_UInkpotStoryAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotStoryAsset>()
{
	return UInkpotStoryAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStoryAsset);
UInkpotStoryAsset::~UInkpotStoryAsset() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FARCHIVE_SERIALIZER(UInkpotStoryAsset)
#endif // WITH_EDITORONLY_DATA
// End Class UInkpotStoryAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStoryAsset, UInkpotStoryAsset::StaticClass, TEXT("UInkpotStoryAsset"), &Z_Registration_Info_UClass_UInkpotStoryAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryAsset), 598816048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_2148466978(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
