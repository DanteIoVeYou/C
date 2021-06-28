#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int* arr[3] = { &arr[0],&arr[1],&arr[2] };
//	int i = 0;
//	printf("%p\n",arr);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p\n", arr[i]);
//	}
//	return 0;
//}

/*

杨氏矩阵

有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

要求：时间复杂度小于O(N);

*/

int Find_Num(int target, int arr[3][3], int* prow, int* pcol)
{
	int x = 0;
	int y = *pcol - 1;
	while (x <= prow - 1 && y >= 0)
	{
		if (target == arr[x][y])
		{
			*prow = x;
			*pcol = y;
			return 1;
		}
		else if(target>arr[x][y])
		{
			x++;
		}
		else
		{
			y--;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	/*
	1 2 3
	4 5 6
	7 8 9
	*/
	int target = 0;
	int row = 3;
	int col = 3;
	scanf("%d", &target);
	int ret = Find_Num(target, arr, &row, &col);
	if (ret == 1)
	{
		printf("%d %d\nYes\n",row,col);
	}
	else
	{
		printf("No\n");
	}
	return 0;
}