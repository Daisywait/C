#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void days(int month)
{
	switch (month)
	{
	case 1:
		printf("%d", 31);
		break;
	case 3:
		printf("%d", 31);
		break;
	case 4:
		printf("%d", 30);
		break;
	case 5:
		printf("%d", 31);
		break;
	case 6:
		printf("%d", 30);
		break;
	case 7:
		printf("%d", 31);
		break;
	case 8:
		printf("%d", 31);
		break;
	case 9:
		printf("%d", 30);
		break;
	case 10:
		printf("%d", 31);
		break;
	case 11:
		printf("%d", 30);
		break;
	case 12:
		printf("%d", 31);
		break;
	}
}
int main()
{
	int year=0, month=0;
	scanf("%d %d", &year,&month);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//»ÚƒÍ
	{
		if (month == 2)
		{
			printf("%d\n", 29);
		}
		else
		{
			days(month);
		}
	}
	else
	{
		if (month == 2)
		{
			printf("%d\n", 28);
		}
		else
		{
			days(month);
		}
	}
}
