/* Console executable, uses BullCow Class as view in
MVC pattern. Responsible for user interaction. Game logic - FBullCowGame class
*/

#include <iostream>
#include <string>
#include"FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PrintGuess();
void PlayGame();
FText GetGuess();
bool PlayAgain();

FBullCowGame BCGame;	// instantiate a new game

int32 MaxTries = BCGame.GetMaxTries();
int32 CurrentTry = BCGame.GetCurrentTry();
int32 WordLenght = BCGame.GetWordLenght();
//int32 PlayerGuess = BCGame.GetPlayerGuess();

//FText GuessAttempt[]{ "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth" };
FText PlayerGuess = "";
bool bNewGame = false;
int32 Count = 0;

//int32 main();

		//main body of application
int32 main()
{
	std::cout << BCGame.GetCurrentTry();

	do
	{
	PrintIntro();
	PlayGame();
	bNewGame = PlayAgain();
	} 
	while (bNewGame);
	return 0;
}

		// introduce the game
void PrintIntro()
{
	std::cout << std::endl;
	std::cout << " Welcome to Bulls and Cows, a fun word game.\n" << std::endl;
	std::cout << " Can you guess the " << WordLenght;
	std::cout << " letter isogram I'm thinking of?\n" << std::endl;
	std::cout << " Two guesses per letter for a total of " << MaxTries;
	std::cout << " guesses\n";
	std::cout << std::endl;
	return;
}

		// play the game
void PlayGame()
{
	BCGame.Reset();
	//int32 MaxGuess = WordLenght * 2;

	// loop for the number of turns asking for guess
	// TODO change from FOR to WHILE loop once we are validating tries
	for (int32 i = 0; i < MaxTries; i++)
	{
		Count = i;
		std::cout << std::endl;
		std::cout << "   Remaining guesses " << MaxTries - Count;
		std::cout << std::endl;
		GetGuess();		// TODO make loop check for valid
		// submit valid guess
		//print number of bulls and cow

		PrintGuess();
	}
	// TODO sumarise game
}

		// get player's guess
FText GetGuess()
{
	std::cout << std::endl;
	std::cout << "   Enter your " << CurrentTry;
	std::cout << " guess?  ";
	std::getline(std::cin, PlayerGuess);
	return PlayerGuess;
}

		// print player's guess
void PrintGuess()
{
	std::cout << std::endl;
	std::cout << "     Your " << CurrentTry;
	std::cout << " guess was:  " << PlayerGuess << std::endl;
	std::cout << std::endl;
	return;
}

		// replay or end game
bool PlayAgain()
{
	FText Response = "";
	std::cout << std::endl;
	std::cout << "  Good work\n" << std::endl;
	std::cout << "  Would you like to play again y/n?  ";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}