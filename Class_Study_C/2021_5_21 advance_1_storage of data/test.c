#define _CRT_SECURE_NO_WARNINGS 1
//Problem 1
//在屏幕上打印杨辉三角。
//#include<stdio.h>
//int factorial(int n)
//{
//	if (n > 1)
//		return n * factorial(n - 1);
//	else
//		return 1;
//}
//int C(int m, int n)
//{
//	return factorial(n) / factorial(m) / factorial(n - m);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = 0;
//	for (n = 0; n < num; n++)
//	{
//		int m = 0;
//		for (m = 0; m <= n; m++)
//		{
//			printf("%d ", C(m, n));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//Problem 2
/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。



以下为4个嫌疑犯的供词:



A说：不是我。

B说：是C。

C说：是D。

D说：C在胡说

已知3个人说了真话，1个人说的是假话。



现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/

//#include<stdio.h>
//int main()
//{
//	//0--凶手 1--不是凶手
//	int a = 0;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	if ((a == 1) + (c == 0) + (d == 0) + (d == 1) == 3)
//		printf("a\n");
//	a = 1;
//	b = 0;
//	c = 1;
//	d = 1;
//	if ((a == 1) + (c == 0) + (d == 0) + (d == 1) ==3)
//		printf("b\n");
//	a = 1;
//	b = 1;
//	c = 0;
//	d = 1;
//	if ((a == 1) + (c == 0) + (d == 0) + (d == 1) == 3)
//		printf("c\n");
//	a = 1;
//	b = 1;
//	c = 1;
//	d = 0;
//	if ((a == 1) + (c == 0) + (d == 0) + (d == 1) == 3)
//		printf("d\n");
//	return 0;
//}

//Problem 3
/*
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：



A选手说：B第二，我第三；

B选手说：我第二，E第四；

C选手说：我第一，D第二；

D选手说：C最后，我第三；

E选手说：我第四，A第一；

比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
*/
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int e = 5;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (
//							((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1) &&
//							(a + b + c + d + e==15)&&
//							a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}