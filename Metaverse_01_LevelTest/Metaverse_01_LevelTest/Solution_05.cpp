#include <iostream>
using namespace std;
/*
[������ �ľ��� ����]
�ߺ����� �ʴ� ������ ���ڸ� ����ϴ� ��
[�ذ� ���̵��]
�ִ밪�� �������� ���� ä�� �ߺ����� �ʵ��� �ϴ� ����� ���� �켱 ���ÿ� ���� 60�� �ִ밪���� ���ϰ� Ǯ�����ϴ�. rand()�� �̿��Ͽ� ������ ���ڸ� ���� ��, �迭�� �� ���ڿ� ������ ������ ���Ұ� 0�̶�� ����ϰ�, 1�̶�� ������� �ʵ��� �߽��ϴ�.
*/

/*
int main()
{
	int maxnum, selectnum;
	cout << "�ִ밪: ";
	cin >> maxnum;
	cout << "��������: ";
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