# HTTPToolset

<img src="Resources/Icon128.png" width="100"   align="center">

## Includes

| Class                 | Parent                    | Blueprint Functions                                                                                                                   | Domain    |
|-----------------------|---------------------------|---------------------------------------------------------------------------------------------------------------------------------------|-----------|
| --------------------  | UObject                   | ------------------------------------------------------------------------------------------------------------------------------------- | --------- |
| UMultipartParser      | UObject                   | const FString Boundary() const                                                                                                        | Runtime   |
| UMultipartParser      | UObject                   | UFUNCTION(BlueprintCallable, Category="MultipartParser") void AddParameter(const FString name, const FString value)                   | Runtime   |
| UMultipartParser      | UObject                   | UFUNCTION(BlueprintCallable, Category="MultipartParser") void AddFile(const FString name, const FString value)                        | Runtime   |
| UMultipartParser      | UObject                   | UFUNCTION(BlueprintCallable, Category="MultipartParser") const FString GenBodyContent();                                              | Runtime   |
| UMultipartParser      | UObject                   | UFUNCTION(BlueprintCallable, Category="MultipartParser") void GenBinaryContent(FString& ContentType, TArray<uint8>& BinaryContent);   | Runtime   |
| --------------------  | UBlueprintFunctionLibrary | ------------------------------------------------------------------------------------------------------------------------------------- | --------- |
| UHTTPToolsetBPLibrary | UBlueprintFunctionLibrary | UFUNCTION(BlueprintCallable, Category="MultipartParser") void GenBinaryContent(FString& ContentType, TArray<uint8>& BinaryContent);   | Runtime   |
