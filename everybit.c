#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ʹ�õݹ�д
void everybit(int n)
{
	if (n <10)
	{
		printf("%d ", n);
	}
	else
	{
		everybit(n / 10);
		printf("%d ", n % 10);
	}
}
int main()
{
	everybit(123);
}