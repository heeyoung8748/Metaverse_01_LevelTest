#include <iostream>
/*
[문제를 파악한 내용]
두 수의 값을 바꾸는 것
[해결 아이디어]
값을 옮겨담아줄 temp 변수를 만들어 자리를 바꿔주었습니다.
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