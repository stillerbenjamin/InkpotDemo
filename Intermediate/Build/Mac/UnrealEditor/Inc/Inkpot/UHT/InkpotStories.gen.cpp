// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotStories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotStories() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStories();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStories_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryFactoryBase_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryHistory_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Class UInkpotStories
void UInkpotStories::StaticRegisterNativesUInkpotStories()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStories);
UClass* Z_Construct_UClass_UInkpotStories_NoRegister()
{
	return UInkpotStories::StaticClass();
}
struct Z_Construct_UClass_UInkpotStories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/InkpotStories.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStories.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStories.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStories.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryHistories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStories.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStories.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stories_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Stories;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryAssets_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StoryAssets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StoryAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryHistories_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StoryHistories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StoryHistories;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryFactory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStories>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_Stories_ValueProp = { "Stories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_Stories_Key_KeyProp = { "Stories_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_Stories = { "Stories", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStories, Stories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stories_MetaData), NewProp_Stories_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryAssets_ValueProp = { "StoryAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInkpotStoryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryAssets_Key_KeyProp = { "StoryAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryAssets = { "StoryAssets", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStories, StoryAssets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryAssets_MetaData), NewProp_StoryAssets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryHistories_ValueProp = { "StoryHistories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInkpotStoryHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryHistories_Key_KeyProp = { "StoryHistories_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryHistories = { "StoryHistories", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStories, StoryHistories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryHistories_MetaData), NewProp_StoryHistories_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryFactory = { "StoryFactory", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStories, StoryFactory), Z_Construct_UClass_UInkpotStoryFactoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryFactory_MetaData), NewProp_StoryFactory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_Stories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_Stories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_Stories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryAssets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryAssets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryHistories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryHistories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryHistories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStories_Statics::NewProp_StoryFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStories_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInkpotStories_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStories_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStories_Statics::ClassParams = {
	&UInkpotStories::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInkpotStories_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStories_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStories_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStories_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotStories()
{
	if (!Z_Registration_Info_UClass_UInkpotStories.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStories.OuterSingleton, Z_Construct_UClass_UInkpotStories_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStories.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotStories>()
{
	return UInkpotStories::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStories);
UInkpotStories::~UInkpotStories() {}
// End Class UInkpotStories

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStories_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStories, UInkpotStories::StaticClass, TEXT("UInkpotStories"), &Z_Registration_Info_UClass_UInkpotStories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStories), 402968712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStories_h_3948650841(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStories_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
