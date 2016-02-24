#include <iostream>
#include <string>


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

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

	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		std::string Guess = GetGuess();
		std::cout << "Tu palabra fue: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

std::string GetGuess() {

	std::cout << "Tu palabra: ";
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