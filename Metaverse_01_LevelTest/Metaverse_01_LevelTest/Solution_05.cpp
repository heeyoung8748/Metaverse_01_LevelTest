#include <iostream>
using namespace std;
/*
[문제를 파악한 내용]
중복되지 않는 랜덤한 숫자를 출력하는 것
[해결 아이디어]
최대값이 정해지지 않은 채로 중복되지 않도록 하는 방법을 몰라 우선 예시에 나온 60을 최대값으로 정하고 풀었습니다. rand()를 이용하여 랜덤한 숫자를 뽑은 후, 배열에 그 숫자와 동일한 순서의 원소가 0이라면 출력하고, 1이라면 출력하지 않도록 했습니다.
*/

/*
int main()
{
	int maxnum, selectnum;
	cout << "최대값: ";
	cin >> maxnum;
	cout << "생성숫자: ";
	cin >> selectnum;

	int arr[60] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < selectnum; i++)
	{
		int num = rand() % maxnum + 1;
		if (arr[num] == 0)
		{
			cout << num << "\n";
			arr[num] = 1;
		}
	}
	
	return 0;
}
*/