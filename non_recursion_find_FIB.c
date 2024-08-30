#define _CRT_SECURE_NO_WARNINGS
//1 1 2 3 5 8 13 21 ......
#include<stdio.h>
int  Fib(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		int a = 0, b = 1, c = 0;
		for (int i = 2; i <= n; i++)
		{
			c = a + b;
			a=b;
			b=c;
		}
		return c;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d",Fib(n));
	return 0;
}