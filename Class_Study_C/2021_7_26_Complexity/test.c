//#define _CRT_SECURE_NO_WARNINGS 1
////Problem 1 Missing num
///*
//* 
//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
//
//
//https://leetcode-cn.com/problems/missing-number-lcci/
//*/
//
//int Find(int* arr, int sz)
//{
//	int i = 0;
//	int sum = 0;
//	int arrsum = 0;
//	for (i = 0; i < sz + 1; i++)
//	{
//		sum += i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		arrsum += arr[i];
//	}
//	return sum - arrsum;
//}
//
//int Find2(int* arr, int sz)
//{
//	int a = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		a = a ^ arr[i];
//	}
//	for (i = 0; i < sz + 1; i++)
//	{
//		a = a ^ i;
//	}
//	return a;
//}
//#include<stdio.h>
//int main()
//{
//
//	int arr[] = { 2,3,9,0,7,1,6,8,4 };
//	
//	printf("%d\n", Find2(arr, sizeof(arr) / sizeof(arr[0])));
//	return 0;
//}
//
////Problem 2
///*
//
//һ���������� nums �����������֮�⣬�������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�Ҫ��ʱ�临�Ӷ���O(n)���ռ临�Ӷ���O(1)��
//
//https://leetcode-cn.com/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof/
//*/
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,1,2,2,4,4,5,5,12,12,32,56,34,32,56,7,4343,7 };
//
//	return 0;
//}

//Problem 3
//�����ַ���
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
//void Rotate(int* arr, int num, int sz)
//{
//	int* arr2 = (int*)calloc(num, sizeof(arr[0]));
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		if (i + num + 1 > sz)
//			arr2[i + num - sz] = arr[i];
//		else
//			arr2[i + num] = arr[i];
//	}
//}

void Rotate(int* arr, int num, int sz)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		int j = 0;
		int tmp = arr[sz - 1];
		for (j = 0; j < sz - 1; j++)
		{
			arr[sz-1-j] = arr[sz-1-j-1];
		}
		arr[0] = tmp;
	}
}
Print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	Rotate(arr, 3, sz);
	Print(arr, sz);
	return 0;
}