#include <iostream>
using namespace std;

/*
[문제를 파악한 내용]
53장의 카드 중 14장을 서로 겹치지 않게 배분할 것.
[해결 아이디어]
53개의 원소를 가진 배열을 두고 이전에 나온 카드는 원소에 체크하여 중복을 막았습니다.
0번째를 조커로 두고 나머지 52개의 배열을 13으로 나눠서 몫에 따라 앞에 붙는 기호가 달라지도록 했습니다.
나눠준 카드의 수를 증가시키고 이번에 사용한 카드를 체크하는 것도 어떻게 코드를 줄일 수 있을 것 같은데 시간이 촉박해서 일단 떠오르는 것까지만 했습니다.
*/

void ReturnNum(int selectedCard)
{
	int cardnumber = selectedCard % 13 + 2;
	switch(cardnumber)
	{
	case 11:
		cout << "A, ";
		break;
	case 12:
		cout << "K, ";
		break;
	case 13:
		cout << "Q, ";
		break;
	case 14:
		cout << "J, ";
		break;
	default:
		cout << cardnumber << ", ";
		break;
	}
}

int main()
{
	srand(time(NULL));
	// char num[14] = {'0', '2', '3', '4', '5', '6', '7', '8', '9', '10','J', 'Q', 'K', 'A' };
	int player = 0;
	int cardNum[53] = { 0 };
	while (player < 2)
	{
		player++;
		cout << "Player " << player << " : ";
		int i = 0;
		while (i < 7)
		{
			int selectedCard = rand() % 53;
			if (selectedCard == 0 && cardNum[0] == 0)
			{
				cout << "Joker, ";
				cardNum[0] = 1;
				++i;
			}
			if (cardNum[selectedCard] == 0)
			{
				int cardnumber = selectedCard % 13 + 2;
				switch (selectedCard / 4)
				{
				case 0:
					cout << "♠";
					ReturnNum(selectedCard);
					++i;
					cardNum[selectedCard] = 1;
					break;
				case 1:
					cout << "♣";
					ReturnNum(selectedCard);
					++i;
					cardNum[selectedCard] = 1;
					break;
				case 2:
					cout << "♥";
					ReturnNum(selectedCard);
					++i;
					cardNum[selectedCard] = 1;
					break;
				case 3:
					cout << "◆";
					ReturnNum(selectedCard);
					++i;
					cardNum[selectedCard] = 1;
					break;

				}
			}
		}
		cout << endl;
	}
}