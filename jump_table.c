#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("***** 1.Add 2.Sub *****\n");
	printf("***** 3.Mul 4.Div *****\n");
	printf("*****   0.exit    *****\n");
	printf("***********************\n");
}
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int calc(int(*p)(int, int))
{
	int a, b;
	printf("请输入两个操作数：\n");
	scanf("%d %d", &a, &b);
	int z = p(a, b);
	return z;
}
int main()
{
	int(*jum_table[5])(int, int) = { 0,Add,Sub,Mul,Div };
	menu();
	int input=1;
	while (input)
	{
		printf("请输入你要进行的操作：\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("%d\n", calc(jum_table[input]));//也可以写成jump_table[input](a,b)
		}
		else if (input == 0)
		{
			printf("退出游戏。\n");
		}
		else
		{
			printf("输入错误，请重新输入\n");
			printf("请输入你要进行的操作：\n");
			scanf("%d", &input);
		}
	}
}