/*
[������ �ľ��� ����]
�־��� �迭�� ���ʿ��� ���������� ������ ������ ���� Ŀ������ ������ ������ �ٲٴ� �Լ��� ������.
[�ذ� ���̵��]
���� ������ Ǯ�鼭 �˰� �� ���������� ����Ͽ����ϴ�. ���� ���� ������ ���� ���ҵ� �� ���� ���� ������ �ִ� ���Һ��� ��������(���� ������) ���ҵ�� ���ذ��� �ش� ���Ұ� �� ũ�ٸ� ���� ������ �ٲ��ֵ��� �ڵ带 ��������ϴ�.
*/

void sortArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < ((n - 1) - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int maxnum = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = maxnum;
			}
		}
	}
}