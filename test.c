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
int rightshift(int a, int b)//将数字a向右移动b位
{
	return a >> b;
}
int leftshift(int a, int b)//将数字a向左移动b位
{
	return a << b;//看看这样写可以吗
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
	int x, y,z;//不初始化看看会怎么样吗？
	printf("请输入两个操作数:");
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
		printf("请输入接下来的操作：\n");
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
				printf("退出计算器。\n");
				break;
			default:
				printf("输入错误请重新输入\n");
				break;
			}
		}//看看没有else会怎么样
	}

}