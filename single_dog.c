#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//���磺
//�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.
void single_dog(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int flag = 0;//��ʾû���ҵ�
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