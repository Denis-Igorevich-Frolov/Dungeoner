// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Structure/Increase.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SortingArray.generated.h"

/**
 *
 */
UCLASS()
class DUNGEONER_API USortingArray : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
        
public:
    UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
    static void IntegerSort(UPARAM(ref) TArray<int32>& ArrayToSort, bool Descending, TArray<int32>& SortedArray);

    UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
    static void FloatSort(UPARAM(ref) TArray<float>& ArrayToSort, bool Descending, TArray<float>& SortedArray);

    UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
    static void StringSort(UPARAM(ref) TArray<FString>& ArrayToSort, bool Descending, TArray<FString>& SortedArray);

    UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
    static void IncreaseSort(UPARAM(ref) TArray<FIncrease>& Increases, bool Descending, TArray<FIncrease>& SortedIncreases);
};
