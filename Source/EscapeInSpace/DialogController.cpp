// copyright anssi.grohn@karelia.fi 2019


#include "DialogController.h"
#include "EscapeInSpace.h"
#include "Misc/Paths.h"

bool UDialogController::FileSaveString2(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));

}


bool UDialogController::FileLoadString2(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));

}