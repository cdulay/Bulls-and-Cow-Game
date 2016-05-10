#pragma once
#include <string>


class FBullCowGame {
public:
	void Reset(); // TODO Make a more richer return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGameValid(std::string); //TODO Make a more richer return value.



private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};