#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
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
	cout << "Bienvenido al Juego" << endl;
	cout << "Adivina la palabra de " << WORD_LENGTH << " letras" << endl;
	return;
}

void PlayGame() {

	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		string Guess = GetGuess();
		cout << "Tu palabra fue: " << Guess << endl;
		cout << endl;
	}
}

string GetGuess() {

	cout << "Tu palabra: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain() {

	cout << "Quieres jugar de nuevo? (s/n): ";
	string Response;
	getline(cin, Response);
	return (Response[0] == 's') || (Response[0] == 'S');
}