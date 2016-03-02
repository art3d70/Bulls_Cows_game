#pragma once
#include <string>

class FBullCowGame {
public:
	FBullCowGame(); //Construct

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO make a more rich value
	bool CheckGuesValidity(std::string); //TODO make a more rich value
	// provide a method for counting bulls & cows, and increasing turn #
	

private:

	int MyCurrentTry = 1;
	int MyMaxTries = 5 ;

};