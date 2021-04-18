// 判断素数的函数

//#include<stdio.h>
//#include<math.h>
//void Prime(int num)
//{
//	int j = 0;
//	int flag = 1;
//	for (j = 2; j <= sqrt(num); j++)
//	{
//		if (!(num % j))
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("%d\n", num);
//		
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i=i+2)
//	{
//		Prime(i);
//	}
//	return 0;
//}

//判断闰年的函数

//#include<stdio.h>
//void Judge_Leapyear(int year)
//{
//	if ((!(year % 4) && (year % 100)) || !(year % 400))
//		printf("%d is a leap year\n",year);
//	else
//		printf("%d is not a leap year\n",year);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	Judge_Leapyear(year);
//	return 0;
//}

//交换两个数字的函数

//void Swap(int* i, int* j)
//{
//	int tmp = *i;
//	*i = *j;
//	*j = tmp;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &i, &j);
//	printf("i=%d j=%d\n", i, j);
//	Swap(&i, &j);
//	printf("i=%d j=%d\n", i, j);
//
//}

//打印n*n的乘法口诀表

//#include<stdio.h>
//void Multable(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Multable(n);
//	return 0;
//}
