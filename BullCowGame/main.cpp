#include <iostream>
#include <string>
#include"FBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
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
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you think of the " << WORD_LENGTH << " letter isogram I am thinking of?\n\n";
	return;
}

void PlayGame()
{
	FBullCowGame BCGame;  // Instantiate a new game.

	//loop for the number of turns asking for guesses
	constexpr int NumberOfTurns = 5;
	for (int count = 1; count <= NumberOfTurns; count++)
	{
	std::string Guess = GetGuess();
		std::cout << "You guessed: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

std::string GetGuess() {
	// Get input from the player.
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
	}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again y/n?";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
