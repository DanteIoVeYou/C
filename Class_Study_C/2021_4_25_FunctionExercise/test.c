#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//Bubble_Sort
//void PosBubbleSort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void NegBubbleSort(int* arr,int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 -i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,3,2,4,55,2,3,4,5,66,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	PosBubbleSort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	NegBubbleSort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/*
创建一个整形数组，完成对数组的操作

实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。
*/

//void Init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(arr++) = 0;
//	}
//}
//
//void Print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//}
//
//void Reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,55,2,3,4,2,1,23,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	printf("原始数组\n");
//	Print(arr,sz);
//	printf("\n");
//
//	Reverse(arr, sz);
//	printf("数组逆置\n");
//	Print(arr, sz);
//	printf("\n");
//
//	Init(arr, sz);
//	printf("初始化为0\n");
//	Print(arr, sz);
//	printf("\n");
//	return 0;
//}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void Reverse(int* arr1, int* arr2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 4,5,6,7,8 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("Before\n");
//	int i = 0;
//	printf("arr1:");
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2:");
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr2[i]);
//	}
//	printf("\n");
//
//	Reverse(arr1, arr2, sz);
//
//
//	printf("After\n");
//	printf("arr1:");
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2:");
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}
