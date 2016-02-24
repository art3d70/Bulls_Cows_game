#include "FBullCowGame.h"

void FBullCowGame::Reset(){}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int FBullCowGame::GetCurrentTry()const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const {	return false; }

bool FBullCowGame::CheckGuesValidity(std::string)
{
	return false;
}
