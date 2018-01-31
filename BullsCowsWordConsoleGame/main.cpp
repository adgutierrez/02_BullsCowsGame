#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PrintGuess();
void PlayGame();
string GetGuess();
bool PlayAgain();

int main();

string GuessAttempt[]{ "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth" };
string PlayerGuess = "";

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
	cout << endl;
	cout << " Welcome to Bulls and Cows, a fun word game.\n" << endl;
	cout << " Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n" << endl;
	cout << " Two guesses per letter for a total of " << MaxGuess;
	cout << " guesses\n";
	cout << endl;
	return;
}

		// play the game
void PlayGame()
{
	
	for (int i = 0; i < MaxGuess; i++)
	{
		Count = i;
		cout << endl;
		cout << "   Remaining guesses " << MaxGuess - Count;
		cout << endl;
		GetGuess();
		PrintGuess();
	}
}

		// get player's guess
string GetGuess()
{
	cout << endl;
	cout << "   Enter your " << GuessAttempt[Count];
	cout << " guess?  ";
	getline(cin, PlayerGuess);
	return PlayerGuess;
}

		// print player's guess
void PrintGuess()
{
	cout << endl;
	cout << "     Your " << GuessAttempt[Count]; 
	cout << " guess was:  " << PlayerGuess << endl;
	cout << endl;
	return;
}

		// replay or end game
bool PlayAgain()
{
	string Response = "";
	cout << endl;
	cout << "  Good work\n" << endl;
	cout << "  Would you like to play again y/n?  ";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}