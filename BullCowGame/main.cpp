#include <iostream>
#include <string>
#include"FBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame;  // Instantiate a new game.

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
	
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;
	//loop for the number of turns asking for guesses
	
	for (int count = 1; count <= MaxTries; count++)
	{
	std::string Guess = GetGuess();
		std::cout << "You guessed: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

std::string GetGuess() {
	// Get input from the player.
	int CurrentTry = BCGame.GetCurrentTry();
	std::cout << "Try "<< CurrentTry << ". Enter your guess: ";
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
