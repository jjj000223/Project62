#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int intpow(int a, int b);

int main()
{
	int m, n;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d%d", &m, &n);
	printf("�Լ� ���= %d \n", intpow(m, n));

	return 0;
}

int intpow(int a, int b)
{
	int mn = 0;
	mn = a * b;

	return mn;
}