// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Increase.generated.h"

USTRUCT(BlueprintType)
struct FIncrease
{
    GENERATED_BODY()

    FORCEINLINE FIncrease();

    explicit FORCEINLINE FIncrease(FString Name, int32 Value, int32 Duration);

    UPROPERTY(BlueprintReadWrite)
        FString Name = FString(TEXT(""));

    UPROPERTY(BlueprintReadWrite)
        int32 Value = 0;

    UPROPERTY(BlueprintReadWrite)
        int32 Duration = 0;
};

FORCEINLINE FIncrease::FIncrease()
{
}

FORCEINLINE FIncrease::FIncrease(const FString InName, const int32 InValue, const int32 InDuration) : Name(InName), Value(InValue), Duration(InDuration)
{
}
//
//FORCEINLINE SetName(const CName) {
//    Name = CName;
//}
//FORCEINLINE FString GetName() {
//    return Name;
//}
//
//FORCEINLINE SetValue(const CValue) {
//    Value = CValue;
//}
//FORCEINLINE int32 GetValue() {
//    return Value;
//}
//
//FORCEINLINE SetDuration(const CDuration) {
//    Duration = CDuration;
//}
//FORCEINLINE int32 GetDuration() {
//    return Duration;
//}