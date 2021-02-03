// copyright anssi.grohn@karelia.fi 2019


#include "DialogLoader.h"
#include "EscapeInSpace.h"
#include "Misc/Paths.h"



bool UDialogLoader::FileSaveString(FString SaveTextB, FString FileNameB) 
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));

}


bool UDialogLoader::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));

}