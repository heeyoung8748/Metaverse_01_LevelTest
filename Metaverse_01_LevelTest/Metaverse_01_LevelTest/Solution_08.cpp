#include <iostream>
using namespace std;

int main()
{
	int snail[100][100];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			snail[i][j] = 0;
		}
	}

	int x = 0;
	int y = 0;
	int a = 1;
	snail[x][y] = a;
	a++;

	while (a <= N * N)
	{
		while (y + 1 < N&& snail[x][y + 1] == 0)
		{
			y++;
			snail[x][y] = a;
			a++;
		}
		while (x + 1 < N && snail[x + 1][y] == 0)
		{
			x++;
			snail[x][y] = a;
			a++;
		}
		while (y - 1 >= 0 && snail[x][y - 1] == 0)
		{
			y--;
			snail[x][y] = a;
			a++;
		}
		while (x - 1 >= 0 && snail[x - 1][y] == 0)
		{
			x--;
			snail[x][y] = a;
			a++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << snail[i][j] << "  ";
		}
		cout << endl;
	}
}