#include <iostream>
using namespace std;

/*
[문제를 파악한 내용]

[해결 아이디어]
빙고판에 숫자 없애는 것까진 했는데 빙고 개수 갱신을 못하겠어요
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
	cout << "현재 " << bingoNum <<"줄의 빙고가 완성되었습니다.\n";
	cout << "숫자를 입력해 주세요: ";
	cin >> selectNum;

	}
}
