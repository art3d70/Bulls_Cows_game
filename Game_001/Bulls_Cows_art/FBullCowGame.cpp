#include "FBullCowGame.h"



FBullCowGame::FBullCowGame()
{
	Reset();
}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int FBullCowGame::GetCurrentTry()const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const {	return false; }

void FBullCowGame::Reset() {
	
	constexpr int MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	MyCurrentTry = 1;
	
}

bool FBullCowGame::CheckGuesValidity(std::string)
{
	return false;
}
