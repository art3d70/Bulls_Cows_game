#include <iostream>
#include <string>
using namespace std;

int main() {

	constexpr int WORD_LENGTH = 9;
	cout << "Bienvenido al Juego" << endl;
	cout << "Adivina la palabra de " << WORD_LENGTH << " letras" << endl;
	cout << "Tu palabra: " ;
	
	string Guess = "";
	getline(cin, Guess);

	cout << "Tu palabra fue: " << Guess << endl;

	return 0;

}