#include <iostream>
using namespace std;

/*
[������ �ľ��� ����]

[�ذ� ���̵��]
�����ǿ� ���� ���ִ� �ͱ��� �ߴµ� ���� ���� �����ϴ� ����� �𸣰ڽ��ϴ�.
������ ��Ż�� ������ ������� ��ó�� �̸� �����ǿ� ���ڸ� ������ְ�, �Է��� ���ڿ� ��ġ�ϴ� �������� ���ڴ� ���� ó���ϵ��� �߽��ϴ�.
*/


int main()
{
	srand(time(NULL));
	int bingo[5][5] = { 0 };
	int alreadyexist[26] = { 0 };
	int bingoNum = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			while (bingo[i][j] == 0)
			{

				int randnum = rand() % 25 + 1;
				if (alreadyexist[randnum - 1] == 0)
				{
					bingo[i][j] = randnum;
					alreadyexist[randnum - 1] = 1;
				}
			}
		}
	}
	int selectNum = 0;
	while (1)
	{
	system("cls");
	bool isthisbingo = false;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (bingo[i][j] == selectNum)
			{
				cout << "     ";
				bingo[i][j] = NULL;
			}
			else if (bingo[i][j] == 0)
			{
				cout << "     ";
			}
			else if (bingo[i][j] < 10)
			{
				cout << "    " << bingo[i][j];
			}
			else
			{
				cout << "   " << bingo[i][j];
			}
		}
		cout << endl;
		cout << endl;
	}
	cout << "���� " << bingoNum <<"���� ���� �ϼ��Ǿ����ϴ�.\n";
	cout << "���ڸ� �Է��� �ּ���: ";
	cin >> selectNum;

	}
}

