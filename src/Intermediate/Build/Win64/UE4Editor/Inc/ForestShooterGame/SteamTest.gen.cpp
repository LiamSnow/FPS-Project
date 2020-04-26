// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SteamTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamTest() {}
// Cross Module References
	FORESTSHOOTERGAME_API UClass* Z_Construct_UClass_USteamTest_NoRegister();
	FORESTSHOOTERGAME_API UClass* Z_Construct_UClass_USteamTest();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ForestShooterGame();
// End Cross Module References
	void USteamTest::StaticRegisterNativesUSteamTest()
	{
	}
	UClass* Z_Construct_UClass_USteamTest_NoRegister()
	{
		return USteamTest::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_ForestShooterGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SteamTest.h" },
				{ "ModuleRelativePath", "Public/SteamTest.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USteamTest>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USteamTest::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamTest, 1611783927);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamTest(Z_Construct_UClass_USteamTest, &USteamTest::StaticClass, TEXT("/Script/ForestShooterGame"), TEXT("USteamTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
