// Fill out your copyright notice in the Description page of Project Settings.


#include "AffiliationSetter.h"

FString UAffiliationSetter::testMethod(int a, int b)
{
	int foo = a + b;
	return (FString::Printf(TEXT("Hello unreal: Our value is %d + %d = %d"), a, b, foo));
}


