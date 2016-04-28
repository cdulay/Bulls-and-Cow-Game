#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

int tries = 1;

//Entry point of application
int main() 
{

	PrintIntro();

	//loop for the number of turns asking for guesses
	constexpr int NumberOfTurns = 5;
	for (int i = 1; i <= NumberOfTurns; i++)
	{
		GetGuessAndPrintBack();
		cout << endl;
	}

	cout << endl;
	return 0;
}

// Introduce the game.
void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you think of the " << WORD_LENGTH << " letter isogram I am thinking of?\n\n";
	return;
}


string GetGuessAndPrintBack() {
	// Get input from the player.
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// Repeat guess back to player.
	cout << "You guessed: " << Guess << endl;
	return Guess;
	}