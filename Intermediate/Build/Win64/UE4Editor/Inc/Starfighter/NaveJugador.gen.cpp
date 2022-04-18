// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter/NaveJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveJugador() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveJugador_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveJugador();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Starfighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
// End Cross Module References
	void ANaveJugador::StaticRegisterNativesANaveJugador()
	{
	}
	UClass* Z_Construct_UClass_ANaveJugador_NoRegister()
	{
		return ANaveJugador::StaticClass();
	}
	struct Z_Construct_UClass_ANaveJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_NaveJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_NaveJugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveJugador.h" },
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugador_Statics::NewProp_SM_NaveJugador_MetaData[] = {
		{ "Category", "NaveJugador" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveJugador_Statics::NewProp_SM_NaveJugador = { "SM_NaveJugador", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveJugador, SM_NaveJugador), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveJugador_Statics::NewProp_SM_NaveJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::NewProp_SM_NaveJugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugador_Statics::NewProp_FloatingMovement_MetaData[] = {
		{ "Category", "NaveJugador" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveJugador_Statics::NewProp_FloatingMovement = { "FloatingMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveJugador, FloatingMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveJugador_Statics::NewProp_FloatingMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::NewProp_FloatingMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveJugador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveJugador_Statics::NewProp_SM_NaveJugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveJugador_Statics::NewProp_FloatingMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveJugador_Statics::ClassParams = {
		&ANaveJugador::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveJugador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveJugador, 2978561720);
	template<> STARFIGHTER_API UClass* StaticClass<ANaveJugador>()
	{
		return ANaveJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveJugador(Z_Construct_UClass_ANaveJugador, &ANaveJugador::StaticClass, TEXT("/Script/Starfighter"), TEXT("ANaveJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
