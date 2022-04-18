// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter/NaveJugadorPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveJugadorPlayerController() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveJugadorPlayerController_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveJugadorPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Starfighter();
// End Cross Module References
	DEFINE_FUNCTION(ANaveJugadorPlayerController::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	void ANaveJugadorPlayerController::StaticRegisterNativesANaveJugadorPlayerController()
	{
		UClass* Class = ANaveJugadorPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &ANaveJugadorPlayerController::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANaveJugadorPlayerController_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveJugadorPlayerController_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveJugadorPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveJugadorPlayerController_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveJugadorPlayerController, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveJugadorPlayerController_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugadorPlayerController_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveJugadorPlayerController_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveJugadorPlayerController_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANaveJugadorPlayerController_NoRegister()
	{
		return ANaveJugadorPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANaveJugadorPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveJugadorPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANaveJugadorPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANaveJugadorPlayerController_SetupInputComponent, "SetupInputComponent" }, // 2014849498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugadorPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NaveJugadorPlayerController.h" },
		{ "ModuleRelativePath", "NaveJugadorPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveJugadorPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveJugadorPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveJugadorPlayerController_Statics::ClassParams = {
		&ANaveJugadorPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveJugadorPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugadorPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveJugadorPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveJugadorPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveJugadorPlayerController, 2647355346);
	template<> STARFIGHTER_API UClass* StaticClass<ANaveJugadorPlayerController>()
	{
		return ANaveJugadorPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveJugadorPlayerController(Z_Construct_UClass_ANaveJugadorPlayerController, &ANaveJugadorPlayerController::StaticClass, TEXT("/Script/Starfighter"), TEXT("ANaveJugadorPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveJugadorPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
