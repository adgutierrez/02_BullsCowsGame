#include "FBullCowGame.h"
using int32 = int;
FBullCowGame::FBullCowGame(){ Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int32 FBullCowGame::GetWordLenght() const { return MyWordLenght; }

void FBullCowGame::Reset() 
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	MyWordLenght = 3;
	return;
}

bool FBullCowGame::IsGameWon() const { return false; }
int32 FBullCowGame::GetPlayerGuess(FString) { return 0; }
bool FBullCowGame::CheckGuessValidity(FString) { return false; }

// receive a VALID guess, ++ turn and return count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	// incriment the turn number
	MyCurrentTry++;
	// setup a return variable
	BullCowCount BullCowCount;

	//loop through all letters against the hidden word
		//compare letters against the hidden word

	return BullCowCount;
}
