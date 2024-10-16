// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotStoryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotStoryFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryFactory();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryFactory_NoRegister();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryFactoryBase();
INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryFactoryBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References

// Begin Class UInkpotStoryFactoryBase
void UInkpotStoryFactoryBase::StaticRegisterNativesUInkpotStoryFactoryBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStoryFactoryBase);
UClass* Z_Construct_UClass_UInkpotStoryFactoryBase_NoRegister()
{
	return UInkpotStoryFactoryBase::StaticClass();
}
struct Z_Construct_UClass_UInkpotStoryFactoryBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/InkpotStoryFactory.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ABadStory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ABadStory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryFactoryBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::NewProp_ABadStory = { "ABadStory", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryFactoryBase, ABadStory), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ABadStory_MetaData), NewProp_ABadStory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::NewProp_ABadStory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::ClassParams = {
	&UInkpotStoryFactoryBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotStoryFactoryBase()
{
	if (!Z_Registration_Info_UClass_UInkpotStoryFactoryBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryFactoryBase.OuterSingleton, Z_Construct_UClass_UInkpotStoryFactoryBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStoryFactoryBase.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotStoryFactoryBase>()
{
	return UInkpotStoryFactoryBase::StaticClass();
}
UInkpotStoryFactoryBase::UInkpotStoryFactoryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStoryFactoryBase);
UInkpotStoryFactoryBase::~UInkpotStoryFactoryBase() {}
// End Class UInkpotStoryFactoryBase

// Begin Class UInkpotStoryFactory
void UInkpotStoryFactory::StaticRegisterNativesUInkpotStoryFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStoryFactory);
UClass* Z_Construct_UClass_UInkpotStoryFactory_NoRegister()
{
	return UInkpotStoryFactory::StaticClass();
}
struct Z_Construct_UClass_UInkpotStoryFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/InkpotStoryFactory.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInkpotStoryFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInkpotStoryFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryFactory_Statics::ClassParams = {
	&UInkpotStoryFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInkpotStoryFactory()
{
	if (!Z_Registration_Info_UClass_UInkpotStoryFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryFactory.OuterSingleton, Z_Construct_UClass_UInkpotStoryFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInkpotStoryFactory.OuterSingleton;
}
template<> INKPOT_API UClass* StaticClass<UInkpotStoryFactory>()
{
	return UInkpotStoryFactory::StaticClass();
}
UInkpotStoryFactory::UInkpotStoryFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStoryFactory);
UInkpotStoryFactory::~UInkpotStoryFactory() {}
// End Class UInkpotStoryFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStoryFactoryBase, UInkpotStoryFactoryBase::StaticClass, TEXT("UInkpotStoryFactoryBase"), &Z_Registration_Info_UClass_UInkpotStoryFactoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryFactoryBase), 3383174881U) },
		{ Z_Construct_UClass_UInkpotStoryFactory, UInkpotStoryFactory::StaticClass, TEXT("UInkpotStoryFactory"), &Z_Registration_Info_UClass_UInkpotStoryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryFactory), 889557070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryFactory_h_4057537241(TEXT("/Script/Inkpot"),
	Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stillerbenjamin_Documents_Unreal_Projects_InkpotDemo_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
