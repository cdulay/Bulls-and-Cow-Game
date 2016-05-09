#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

//Entry point of application
int main() 
{
	bool bPlayAgain = false;	
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	return 0;
}


// Introduce the game.
void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you think of the " << WORD_LENGTH << " letter isogram I am thinking of?\n\n";
	return;
}

void PlayGame()
{
	//loop for the number of turns asking for guesses
	constexpr int NumberOfTurns = 5;
	for (int count = 1; count <= NumberOfTurns; count++)
	{
		string Guess = GetGuess();
		cout << "You guessed: " << Guess << endl;
		cout << endl;
	}
}

string GetGuess() {
	// Get input from the player.
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
	}

bool AskToPlayAgain()
{
	cout << "Do you want to play again y/n?";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
