#include <iostream>
using namespace std;

/*
[문제를 파악한 내용]
1000 미만의 3의 승수를 출력...
[해결 아이디어]
값이 1000보다 크거나 같아지기 전까지 3을 곱해서 그 값을 출력하도록 작성했습니다.
*/


int main()
{
	int a = 1;
	while (a < 1000)
	{
		a *= 3;
		if (a < 1000)
		{
		std::cout << a << "\n";
		}
	}

	return 0;
}

