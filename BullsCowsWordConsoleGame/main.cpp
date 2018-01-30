#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PrintGuess();
string GetGuess();

string PlayerGuess = "";
string GuessAttempt[]{ "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth" };

constexpr int WORD_LENGTH = 3;
int MaxGuess = WORD_LENGTH * 2;
int Count = 0;

		//main body of application
int main()
{
	PrintIntro();

	for (int i = 0; i < MaxGuess; i++)
	{
		GetGuess();
		PrintGuess();
		Count = Count++;
	}
	
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

		// get player's guess
string GetGuess()
{
	cout << endl;
	cout << " Enter your " << GuessAttempt[Count];
	cout << " guess?  ";
	getline(cin, PlayerGuess);
	return PlayerGuess;
}

		// print player's guess
void PrintGuess()
{
	cout << endl;
	cout << "   Your guess was: " << PlayerGuess << endl;
	cout << endl;
	return;
}
