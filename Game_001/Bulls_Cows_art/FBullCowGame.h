#pragma once
#include <string>

class FBullCowGame {
public:

	void Reset(); //TODO make a more rich value
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuesValidity(std::string); //TODO make a more rich value
	

private:

	int MyCurrentTry = 1;
	int MyMaxTries = 5 ;

};