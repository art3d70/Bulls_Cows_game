#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();

// the entry point of  the app
int main() {

	PrintIntro();
	PlayGame();

	return 0;
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