#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instanciamos la clase

// the entry point of  the app
int main() {

	bool bPlayAgain = false;

	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	return 0; // exit app
}

void PrintIntro() {

	constexpr int WORD_LENGTH = 9;
	std::cout << "Bienvenido al Juego" << std::endl;
	std::cout << "Adivina la palabra de " << WORD_LENGTH << " letras" << std::endl;
	return;
}

void PlayGame() {

	BCGame.Reset();
	int Maxtries = BCGame.GetMaxTries();
	
	// TODO change from FOR to WHILE loop once we are validating try
	for (int count = 1; count <= Maxtries; count++) {
		std::string Guess = GetGuess(); //TODO make loop cheking valid guess

		//submit valid guess to the game
		//print number of bulls and cows

		std::cout << "Tu palabra fue: " << Guess << std::endl;
		std::cout << std::endl;
	}
	//TODO add a game summary

}

std::string GetGuess() {

	int CurrentTry = BCGame.GetCurrentTry();

	std::cout << "Intento "<< CurrentTry << ". Tu palabra: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain() {

	std::cout << "Quieres jugar de nuevo? (s/n): ";
	std::string Response;
	std::getline(std::cin, Response);
	return (Response[0] == 's') || (Response[0] == 'S');
}