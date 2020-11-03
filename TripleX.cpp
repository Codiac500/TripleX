#include <iostream>
#include <stdio.h>
using namespace std;

int Difficulty = 1;
int MaxDifficulty = 5;
bool DidWin;

void PlayGame(int difficulty)
{
	int CodeA = 4;
	int CodeB = 3;
	int CodeC = 2;

	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;

	cout << endl;
	cout << "Enter the code numbers with an x at the end...";
	cout << "The code has a sum of " << CodeSum << endl;
	cout << "The code has a product of " << CodeProduct << endl;

	int PlayerGuessA, PlayerGuessB, PlayerGuessC;
	char PlayerGuessX;
	cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC >> PlayerGuessX;
	cout << endl;

	if (PlayerGuessA == CodeA && PlayerGuessB == CodeB && PlayerGuessC == CodeC && PlayerGuessX == 'x')
	{
		DidWin = 1;
		cout << "You win!";
	}
	else
	{
		DidWin = 2;
		cout << "You lose!";
	}
}

int main()
{
	cout << "You're an agent breaking into a secure server room..." << endl;
	cout << "Enter the correct code to continue..." << endl;

	while (Difficulty <= MaxDifficulty)
	{
		PlayGame(Difficulty);
		if(DidWin == 1)
		{
			Difficulty++;
		}
		else if (DidWin == 0)
		{
			Difficulty--;
		}
	
	}
	
	cin.clear();
	cin.ignore();

	cout << "\n\nYou're a Master Hacker!" << endl;

	return 0;
}