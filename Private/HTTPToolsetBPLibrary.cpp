// Copyright Epic Games, Inc. All Rights Reserved.

#include "HTTPToolsetBPLibrary.h"
#include "MultipartParser.h"

UHTTPToolsetBPLibrary::UHTTPToolsetBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

TArray<uint8> UHTTPToolsetBPLibrary::StringToByte(FString data)
{
	TArray<uint8> byteArray;
	FTCHARToUTF8 Convert(*data);
	byteArray.Append((uint8*)((ANSICHAR*)Convert.Get()), Convert.Length());
	return byteArray;
}

UMultipartParser* UHTTPToolsetBPLibrary::MakeMultipartParser()
{
	return NewObject<UMultipartParser>();
}
