//用递归实现打印一个整数数的每一位
//void Factiral(int num)
//{
//	if (num / 10 > 0)
//		Factiral(num / 10);
//		printf("%d ", num % 10);
//}	
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Factiral(num);
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int pro = 1;
//	scanf("%d", &n);
//	if (n <= 1)
//		pro = 1;
//	else
//		for (i = 1; i <= n; i++)
//		{
//			pro *= i;
//		}
//	printf("%d\n", pro);
//	return 0;
//}

//递归
//#include<stdio.h>
//int Factorial(int n)
//{
//	if (n >= 2)
//		return n * Factorial(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int pro = Factorial(n);
//	printf("%d\n", pro);
//
//	return 0;
//}

//递归和非递归实现strlen
//非递归
//#include<stdio.h>
//int My_Strlen(char* arr)
//{
//	int count = 0;
//	while (*(arr++))
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "akhdkaaaaa";
//	int len = My_Strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//递归
//#include<stdio.h>
//int My_Strlen(char* arr)
//{
//	if (*arr)
//		return 1 + My_Strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcaad";
//	int len = My_Strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//递归实现字符串的逆序
void reverse_string(char* string)
{
	int count = 0;
	while (*string)
	{
		count++;
	}
	if (string < string + (count + 1) / 2)
	{
		reverse_string(string + 1);
	}
	char tmp = *string;
	*string = *(string + count - 1);
	*(string + count - 1) = tmp;
	
}
#include<stdio.h>
int main()
{
	int arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n / 10 > 0)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}


//递归实现n的k次方
//int Involution(int n,int k)
//{
//	if (k > 0)
//		return n * Involution(n, k - 1);
//	else
//		return 1;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", Involution(n, k));
//	return 0;
//}

//递归和非递归分别实现求第n个斐波那契数
//非递归
//#include<stdio.h>
//int Fibonacci(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fibonacci(n));
//	return 0;
//}

//递归
//#include<stdio.h>
//int Fibonacci(int n)
//{
//	if (n > 2)
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fibonacci(n));
//	return 0;
//}
