// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InkpotEditor/Public/Asset/InkpotStoryAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotStoryAssetFactory() {}

// Begin Cross Module References
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotStoryAssetFactory();
INKPOTEDITOR_API UClass* Z_Construct_UClass_UInkpotStoryAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_InkpotEditor();
// End Cross Module References

// Begin Class UInkpotStoryAssetFactory
void UInkpotStoryAssetFactory::StaticRegisterNativesUInkpotStoryAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStoryAssetFactory);
UClass* Z_Construct_UClass_UInkpotStoryAssetFactory_NoRegister()
{
	return UInkpotStoryAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UInkpotStoryAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Asset/InkpotStoryAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InkpotEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::ClassParams = {
	&UInkpotStoryAssetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotStoryAssetFactory()
{
	if (!Z_Registration_Info_UClass_UInkpotStoryAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryAssetFactory.OuterSingleton, Z_Construct_UClass_UInkpotStoryAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStoryAssetFactory.OuterSingleton;
}
template<> INKPOTEDITOR_API UClass* StaticClass<UInkpotStoryAssetFactory>()
{
	return UInkpotStoryAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStoryAssetFactory);
UInkpotStoryAssetFactory::~UInkpotStoryAssetFactory() {}
// End Class UInkpotStoryAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStoryAssetFactory, UInkpotStoryAssetFactory::StaticClass, TEXT("UInkpotStoryAssetFactory"), &Z_Registration_Info_UClass_UInkpotStoryAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryAssetFactory), 3403186604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h_3885389230(TEXT("/Script/InkpotEditor"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_InkpotEditor_Public_Asset_InkpotStoryAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
