// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AffiliationSetter.generated.h"


/**
 * 
 */
UCLASS()
class IMTS_API UAffiliationSetter : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "MyCatagory")
		static FString testMethod(int a, int b);

};
