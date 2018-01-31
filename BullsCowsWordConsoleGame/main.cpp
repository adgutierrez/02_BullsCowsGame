#include <iostream>
#include <string>



void PrintIntro();
void PrintGuess();
void PlayGame();
std::string GetGuess();
bool PlayAgain();

int main();

std::string GuessAttempt[]{ "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth" };
std::string PlayerGuess = "";

bool bNewGame = false;
constexpr int WORD_LENGTH = 3;
int MaxGuess = WORD_LENGTH * 2;
int Count = 0;

		//main body of application
int main()
{
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
	std::cout << " Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n" << std::endl;
	std::cout << " Two guesses per letter for a total of " << MaxGuess;
	std::cout << " guesses\n";
	std::cout << std::endl;
	return;
}

		// play the game
void PlayGame()
{
	
	for (int i = 0; i < MaxGuess; i++)
	{
		Count = i;
		std::cout << std::endl;
		std::cout << "   Remaining guesses " << MaxGuess - Count;
		std::cout << std::endl;
		GetGuess();
		PrintGuess();
	}
}

		// get player's guess
std::string GetGuess()
{
	std::cout << std::endl;
	std::cout << "   Enter your " << GuessAttempt[Count];
	std::cout << " guess?  ";
	std::getline(std::cin, PlayerGuess);
	return PlayerGuess;
}

		// print player's guess
void PrintGuess()
{
	std::cout << std::endl;
	std::cout << "     Your " << GuessAttempt[Count]; 
	std::cout << " guess was:  " << PlayerGuess << std::endl;
	std::cout << std::endl;
	return;
}

		// replay or end game
bool PlayAgain()
{
	std::string Response = "";
	std::cout << std::endl;
	std::cout << "  Good work\n" << std::endl;
	std::cout << "  Would you like to play again y/n?  ";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}