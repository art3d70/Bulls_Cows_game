#include "FBullCowGame.h"

void FBullCowGame::Reset(){}

int FBullCowGame::GetMaxTries(){ return MyMaxTries; }

int FBullCowGame::GetCurrentTry(){ return MyCurrentTry; }

bool FBullCowGame::IsGameWon(){	return false; }

bool FBullCowGame::CheckGuesValidity(std::string)
{
	return false;
}
