#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
void PrintGuess();

constexpr int WORD_LENGTH = 4;
string Guess = "";

		//main body of application
int main()
{
	PrintIntro();
	GetGuess();
	PrintGuess();

	return 0;
}
		// introduce the game
void PrintIntro()
{
	cout << endl;
	cout << " Welcome to Bulls and Cows, a fun word game.\n" << endl;
	cout << " Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n" << endl;
	return;
}

		// get player's guess
string GetGuess()
{
	
	cout << " Enter your guess: ";
	getline(cin, Guess);
	return Guess;
}

		// print player's guess
void PrintGuess()
{
	cout << endl;
	cout << "   Your guess was: " << Guess << endl;
	cout << endl;
	return;
}
