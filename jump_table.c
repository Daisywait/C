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
	printf("������������������\n");
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
		printf("��������Ҫ���еĲ�����\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("%d\n", calc(jum_table[input]));//Ҳ����д��jump_table[input](a,b)
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ��\n");
		}
		else
		{
			printf("�����������������\n");
			printf("��������Ҫ���еĲ�����\n");
			scanf("%d", &input);
		}
	}
}