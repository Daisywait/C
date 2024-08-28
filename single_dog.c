#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.
void single_dog(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int flag = 0;//表示没有找到
		int left = 0;
		int right = len - 1;
		int temp=arr[i];
		for(int j=0;j<len;j++)
		{ 
			if (j!=i)
			{
				if (temp == arr[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
		{
			printf("%d\n", temp);
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	single_dog(arr,len);
}