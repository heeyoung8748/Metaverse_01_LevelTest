#include <iostream>
/*
[������ �ľ��� ����]
�� ���� ���� �ٲٴ� ��
[�ذ� ���̵��]
���� �Űܴ���� temp ������ ����� �ڸ��� �ٲ��־����ϴ�.
*/
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}