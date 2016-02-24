#pragma once
#include <string>

class FBullCowGame {
public:

	void reset(); //TODO make a more rich value
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuesValidity(std::string); //TODO make a more rich value
	

private:

	int MyCurrentTry;
	int MyMaxTries;

};