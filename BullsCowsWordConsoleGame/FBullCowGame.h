#pragma once
#include <string>
using FString = std::string;
using int32 = int;

// all values intialised to zero
struct BullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	FBullCowGame();	// constructor

	int32 GetMaxTries() const;
	int32 GetWordLenght() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;
	int32 GetPlayerGuess(FString);

	void Reset();	//TODO make a more rich return value
	bool CheckGuessValidity(FString); // TODO make a more rich return value
	BullCowCount SubmitGuess(FString);

private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
	int32 MyWordLenght;
	int32 MyPlayerGuess;
};

