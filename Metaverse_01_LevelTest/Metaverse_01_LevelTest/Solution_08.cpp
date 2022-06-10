#include <iostream>
using namespace std;
/*
[문제를 파악한 내용]
왼쪽 상단부터 시작하여 오름차순으로 나선형 배열을 만들 것.
[해결 아이디어]
조작키에 따라 x좌표, y좌표를 이동시켰듯 점차 증가시킨 값을 좌표에 대입하여, 더 이상 대입할 수 없을 때(이미 다음 좌표에 숫자가 있거나, 주어진 N의 크기보다 큰 위치일 때) 방향에 따라 x좌표 혹은 y좌표를 증감시키도록 했습니다.
위 내용까진 구현했는데 잘 실행이 안 되길래 어느 부분이 틀렸나 구글링해서 첫 번째 위치를 미리 1로 적고 while문을 돌리긴 했습니다. ㅎㅎ...
*/
int main()
{
	int snail[100][100] = {0};
	int N;
	cin >> N;
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