#include<iostream>

using namespace std;

int main()
{
	int n;
	int chances = 7;
	char word[100];
	char hint[100];
	int h;
	int j;
	char guess;
	int check = 0;
	
	cout << "welcome to hangman !!"<<endl;
	cout << "player 1 please enter the number of letters in the word"<<endl;
	cin >> n;
	char hangman[7] = { 'H','A','N','G','M','A','N' };
	
	cout << "player 1 please enter the word"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> word[i];
	}

	cout << "player 1 please enter the number of letters in the hint " << endl;
	cin >> h;

	cout << "player 1 please enter the hint" << endl;
	for (int i = 0; i <h; i++)
	{
		cin >> hint[i];
	}
	system("cls");
	
	
	
	while (chances > 0) {

		for (int i = 0; i < n; i++)
		{
			cout << "_ ";
		}
		cout << endl;
		cout << "hint: ";
		for (int i = 0; i < h; i++)
		{
			cout << hint[i];
		}
		cout << endl;

		for (int i = 0; i < chances; i++)
		{
			cout << hangman[i];
		}
		cout << endl;

		cout << "player 2 please enter the number of the letter you want to guess \n ps - it starts from 0" << endl;
		cin >> j;
		cout << "player2 please enter the letter " << endl;
		cin >> guess;
		if (guess == word[j])
		{
			cout << " your guess is right"<<endl;
			
				check++;
		}
		else
		{
			cout << " OOPS! your guess is wrong"<<endl;
			chances--;
		}
		if (check == n)
		{
			cout << "congrats! you guessed the word right"<<endl;
			break;
		}
	}
	if (check != n)
		cout << "better luck next time";
	


	return 0;
}