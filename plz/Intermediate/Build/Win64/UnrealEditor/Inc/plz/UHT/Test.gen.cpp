// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "plz/Public/Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PLZ_API UClass* Z_Construct_UClass_ATest();
PLZ_API UClass* Z_Construct_UClass_ATest_NoRegister();
UPackage* Z_Construct_UPackage__Script_plz();
// End Cross Module References

// Begin Class ATest
void ATest::StaticRegisterNativesATest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATest);
UClass* Z_Construct_UClass_ATest_NoRegister()
{
	return ATest::StaticClass();
}
struct Z_Construct_UClass_ATest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test.h" },
		{ "ModuleRelativePath", "Public/Test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_plz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest_Statics::ClassParams = {
	&ATest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATest()
{
	if (!Z_Registration_Info_UClass_ATest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest.OuterSingleton, Z_Construct_UClass_ATest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATest.OuterSingleton;
}
template<> PLZ_API UClass* StaticClass<ATest>()
{
	return ATest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATest);
ATest::~ATest() {}
// End Class ATest

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitStudy_Unreal8th_CH2_Assignment5_plz_Source_plz_Public_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATest, ATest::StaticClass, TEXT("ATest"), &Z_Registration_Info_UClass_ATest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest), 3993864961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitStudy_Unreal8th_CH2_Assignment5_plz_Source_plz_Public_Test_h_3259903269(TEXT("/Script/plz"),
	Z_CompiledInDeferFile_FID_GitStudy_Unreal8th_CH2_Assignment5_plz_Source_plz_Public_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitStudy_Unreal8th_CH2_Assignment5_plz_Source_plz_Public_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
