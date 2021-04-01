#include<iostream>

using namespace std;

char grid[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'x';

char winner();
void changeplayer();


void display()
{


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}

}

void input()
{
	int num;
	cout << "Enter the desired number " << endl;
	cin >> num;

	if (num == 1)
		grid[0][0] = player;
	else if (num == 2)
		grid[0][1] = player;
	else if (num == 3)
		grid[0][2] = player;
	else if (num == 4)
		grid[1][0] = player;
	else if (num == 5)
		grid[1][1] = player;
	else if (num == 6)
		grid[1][2] = player;
	else if (num == 7)
		grid[2][0] = player;
	else if (num == 8)
		grid[2][1] = player;
	else if (num == 9)
		grid[2][2] = player;



}

int main()
{
	display();
	while (1)
	{

		input();
		display();
		if (winner() == 'x')
		{
			cout << "x wins" << endl;
			break;
		}
		else if (winner() == 'o')
		{
			cout << "o wins" << endl;
			break;
		}
		changeplayer();
	}
	system("pause");
	return 0;
}

void changeplayer()
{
	if (player == 'x')
	{
		player = 'o';
	}
	else
	{
		player = 'x';
	}
}

char winner()
{
	//vertical
	if (grid[0][0] == 'x' && grid[0][1] == 'x' && grid[0][2] == 'x')
		return 'x';
	if (grid[1][0] == 'x' && grid[1][1] == 'x' && grid[1][2] == 'x')
		return 'x';
	if (grid[2][0] == 'x' && grid[2][1] == 'x' && grid[2][2] == 'x')
		return 'x';
	//horizontal 
	if (grid[0][0] == 'x' && grid[1][0] == 'x' && grid[2][0] == 'x')
		return 'x';
	if (grid[0][1] == 'x' && grid[1][1] == 'x' && grid[2][1] == 'x')
		return 'x';
	if (grid[0][2] == 'x' && grid[1][2] == 'x' && grid[2][2] == 'x')
		return 'x';
	//diagonal
	if (grid[0][0] == 'x' && grid[1][1] == 'x' && grid[2][2] == 'x')
		return 'x';
	if (grid[0][2] == 'x' && grid[1][1] == 'x' && grid[2][0] == 'x')
		return 'x';

	//vertical
	if (grid[0][0] == 'o' && grid[0][1] == 'o' && grid[0][2] == 'o')
		return 'o';
	if (grid[1][0] == 'o' && grid[1][1] == 'o' && grid[1][2] == 'o')
		return 'o';
	if (grid[2][0] == 'o' && grid[2][1] == 'o' && grid[2][2] == 'o')
		return 'o';
	//horizontal 
	if (grid[0][0] == 'o' && grid[1][0] == 'o' && grid[2][0] == 'o')
		return 'o';
	if (grid[0][1] == 'o' && grid[1][1] == 'o' && grid[2][1] == 'o')
		return 'o';
	if (grid[0][2] == 'o' && grid[1][2] == 'o' && grid[2][2] == 'o')
		return 'o';
	//diagonal
	if (grid[0][0] == 'o' && grid[1][1] == 'o' && grid[2][2] == 'o')
		return 'o';
	if (grid[0][2] == 'o' && grid[1][1] == 'o' && grid[2][0] == 'o')
		return 'o';

}