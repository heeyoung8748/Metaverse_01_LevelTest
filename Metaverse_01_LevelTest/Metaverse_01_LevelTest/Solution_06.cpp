#include <iostream>
using namespace std;

/*
[������ �ľ��� ����]
53���� ī�� �� 14���� ���� ��ġ�� �ʰ� ����� ��.
[�ذ� ���̵��]
53���� ���Ҹ� ���� �迭�� �ΰ� ������ ���� ī��� ���ҿ� üũ�Ͽ� �ߺ��� ���ҽ��ϴ�.
0��°�� ��Ŀ�� �ΰ� ������ 52���� �迭�� 13���� ������ �� ���� �տ� �ٴ� ��ȣ�� �޶������� �߽��ϴ�.
������ ī���� ���� ������Ű�� �̹��� ����� ī�带 üũ�ϴ� �͵� ��� �ڵ带 ���� �� ���� �� ������ �ð��� �˹��ؼ� �ϴ� �������� �ͱ����� �߽��ϴ�.
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
					cout << "��";
					ReturnNum(selectedCard);
					++i;
					cardNum[selectedCard] = 1;
					break;
				case 1:
					cout << "��";
					ReturnNum(selectedCard);
					++i;
					cardNum[selectedCard] = 1;
					break;
				case 2:
					cout << "��";
					ReturnNum(selectedCard);
					++i;
					cardNum[selectedCard] = 1;
					break;
				case 3:
					cout << "��";
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