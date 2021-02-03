// copyright anssi.grohn@karelia.fi 2019

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DialogLoader.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPEINSPACE_API UDialogLoader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintCallable, Category = "custom")
		static bool FileSaveString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintCallable, Category = "custom")
		static bool FileLoadString(FString FileNameA, FString& SaveTextA);
};
