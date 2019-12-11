#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int intpow(int a, int b);

int main()
{
	int m, n;
	printf("두 개의 정수 입력: ");
	scanf_s("%d%d", &m, &n);
	printf("함수 결과= %d \n", intpow(m, n));

	return 0;
}

int intpow(int a, int b)
{
	int mn = 0;
	mn = a * b;

	return mn;
}