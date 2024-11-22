# HTTPToolset

<p align="center">
  <a href="https://github.com/couriourc/UE_HTTPToolset">
    <img src="Resources/Icon128.png" alt="Logo" width="68">
  </a>
</p>

## Includes

| Class                 | Parent                    | Blueprint Functions                                                                                                                 | Domain  |
|-----------------------|---------------------------|-------------------------------------------------------------------------------------------------------------------------------------|---------|
| <hr/>                 | UObject                   | <hr/>                                                                                                                               | <hr/>   |
| UMultipartParser      | UObject                   | const FString Boundary() const                                                                                                      | Runtime |
| UMultipartParser      | UObject                   | UFUNCTION(BlueprintCallable, Category="MultipartParser") void AddParameter(const FString name, const FString value)                 | Runtime |
| UMultipartParser      | UObject                   | UFUNCTION(BlueprintCallable, Category="MultipartParser") void AddFile(const FString name, const FString value)                      | Runtime |
| UMultipartParser      | UObject                   | UFUNCTION(BlueprintCallable, Category="MultipartParser") const FString GenBodyContent();                                            | Runtime |
| UMultipartParser      | UObject                   | UFUNCTION(BlueprintCallable, Category="MultipartParser") void GenBinaryContent(FString& ContentType, TArray<uint8>& BinaryContent); | Runtime |
| <hr/>                 | UBlueprintFunctionLibrary | <hr/>                                                                                                                               | <hr/>   |
| UHTTPToolsetBPLibrary | UBlueprintFunctionLibrary | UFUNCTION(BlueprintCallable, Category="MultipartParser") void GenBinaryContent(FString& ContentType, TArray<uint8>& BinaryContent); | Runtime |
