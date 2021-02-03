// copyright anssi.grohn@karelia.fi 2019

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DialogController.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPEINSPACE_API UDialogController : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintCallable, Category = "custom")
		static bool FileSaveString2(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintCallable, Category = "custom")
		static bool FileLoadString2(FString FileNameA, FString& SaveTextA);
};
