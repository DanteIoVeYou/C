#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main() 
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//	char const * str;
//}


//Problem 1
//程序死循环解释
//VS开发环境调试下面的代码，画图解释下面代码的问题
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//Problem 2
//题目：

//输入一个整数数组，实现一个函数，

//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，

//所有偶数位于数组的后半部分。

#include<stdio.h>
int IsEven(int x)
{
	if (x % 2)
		return 0;
	else
		return 1;
}
void TurnOver(int* arr, int sz)
{
	int* left = arr;
	int* right = arr + sz - 1;
	while (left<right)
	{
		while (IsEven(*left) == 0) //0------Odd
		{
			left++;
		}
		while (IsEven(*left) == 1 && left < right) //1------Even
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
			right--;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int sz = sizeof(arr) / sizeof(arr[10]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	TurnOver(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}