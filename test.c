#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("***** 1.Add 2.Sub *****\n");
	printf("***** 3.Mul 4.Div *****\n");
	printf("***** 5.rightshift*****\n");
	printf("***** 6.leftshift *****\n");
	printf("***** 7.xor 8.bitwise**\n");
	printf("*****   0.exit    *****\n");
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
int rightshift(int a, int b)//������a�����ƶ�bλ
{
	return a >> b;
}
int leftshift(int a, int b)//������a�����ƶ�bλ
{
	return a << b;//��������д������
}
int Xor(int a, int b)
{
	return a ^ b;
}
int Bitwise_and(int a, int b)
{
	return a & b;
}

void calc(int(*p)(int, int))
{
	int x, y,z;//����ʼ����������ô����
	printf("����������������:");
	scanf("%d %d", &x, &y);
	z = p(x, y);
	printf("%d\n", z);
}
int main()
{
	menu();
	int input=1;
	while(input)
	{
		printf("������������Ĳ�����\n");
		scanf("%d", &input);
		if(input>=1&&input<=8)
		{
			switch (input)
			{
			case 1:
				calc(Add);
				break;
			case 2:
				calc(Sub);
				break;
			case 3:
				calc(Mul);
				break;
			case 4:
				calc(Div);
				break;
			case 5:
				calc(rightshift);
				break;
			case 6:
				calc(leftshift);
				break;
			case 7:
				calc(Xor);
				break;
			case 8:
				calc(Bitwise_and);
				break;
			case 0:
				printf("�˳���������\n");
				break;
			default:
				printf("�����������������\n");
				break;
			}
		}//����û��else����ô��
	}

}