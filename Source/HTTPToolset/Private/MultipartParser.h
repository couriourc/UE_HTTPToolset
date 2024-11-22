/*********************************************************************************
*     File Name           :     gen_multipart.h
*     Created By          :     CouriourC
*     Creation Date       :     [2017-02-20 16:50]
*     Last Modified       :     [AUTO_UPDATE_BEFORE_SAVE]
*     Description         :     Generate multipart/form-data POST body
*     Main From			  :		https://github.com/AndsonYe/MultipartEncoder
**********************************************************************************/
#pragma once

#include <vector>
#include <string>
#include <tuple>

#include  "MultipartParser.generated.h"

UCLASS(Blueprintable, meta=(DisplayName="FormData"))
class UMultipartParser : public UObject
{
	GENERATED_BODY()

public:
	UMultipartParser();

	const std::string& body_content()
	{
		return body_content_;
	}

	UFUNCTION(BlueprintPure)
	const FString Boundary() const;

	UFUNCTION(BlueprintCallable, Category="MultipartParser")
	void AddParameter(const FString name, const FString value)
	{
		params_.push_back(std::move(std::pair<std::string, std::string>(TCHAR_TO_UTF8(*name), TCHAR_TO_UTF8(*value))));
	}

	UFUNCTION(BlueprintCallable, Category="MultipartParser")
	void AddFile(const FString name, const FString value)
	{
		files_.push_back(std::move(std::pair<std::string, std::string>(TCHAR_TO_UTF8(*name), TCHAR_TO_UTF8(*value))));
	}

	UFUNCTION(BlueprintCallable, Category="MultipartParser")
	const FString GenBodyContent();

	UFUNCTION(BlueprintCallable, Category="MultipartParser")
	void GenBinaryContent(FString& ContentType, TArray<uint8>& BinaryContent);

private:
	void _get_file_name_type(const std::string& file_path, std::string* filenae, std::string* content_type);

	static const std::string boundary_prefix_;
	static const std::string rand_chars_;
	std::string boundary_;
	std::string body_content_;
	std::vector<std::pair<std::string, std::string>> params_;
	std::vector<std::pair<std::string, std::string>> files_;
};
