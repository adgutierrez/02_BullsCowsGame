#pragma once
#include <string>

class FBullCowGame
{
public:
	void Reset();
	int GetMaxTries();
	int GetCurrentTry();
	int GetWordLenght();
	int GetPlayerGuess();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);

private:
	int MyCurrentTry;
	int MyMaxTries;
};

