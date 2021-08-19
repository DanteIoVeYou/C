#define _CRT_SECURE_NO_WARNINGS 1
//Problem 1
////写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
////#define SWAP(X) (  ( (X & 0xAAAAAAAA)>>1 ) | ( (X & 0x55555555) << 1)  )
//#define SWAP(X) (  ( (X & 0b10101010101010101010101010101010)>>1 ) | ( (X & 0b01010101010101010101010101010101) << 1)  )
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	a = SWAP(a);
//	printf("%d\n", a);
//	return 0;
//}


//Problem 2
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
//#include<stdio.h>
//#include<stddef.h>
////#define  MY_offsetof(StructName,StructMember) 
//struct a {
//	int x;
//	int y;
//	char z;
//	int w;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct a,w));
//	return 0;
//}

//#include<stdio.h>
//#include<stddef.h>
//#define MAX 19
//#define ch char
////#define  MY_offsetof(StructName,StructMember) 
//struct a {
//	int x;
//	int y;
//	char z;
//	int w;
//};
//int main()
//{
//	//printf("%s\n%d\n%s\n%s\n", __FILE__,__LINE__, __DATE__,__TIME__);
//	ch arr[] = "string";
//	printf("%s", "adasd");
//	return 0;
//}

//#include<stdio.h>
//int i = 20;
//#define PRINT(VALUE,FORMAT) printf("the value of " #VALUE " is " FORMAT "\n",VALUE)
//int main()
//{
//	PRINT(i+3, "%d");
//	return 0;
//}
//
//#include<stdio.h>
//#define ANSWER(NUM,VALUE)\
//answer##NUM = VALUE
//int main()
//{
//	int ANSWER(1, 100);
//	printf("answer1 = %d\n", answer1);
//	return 0;
//}

//#include<stdio.h>
//#define MAX 100
//#undef MAX
//#define MAX 10
//int main()
//{
//
//	int arr[MAX];
//	int i = 0;
//	for (i = 0; i < MAX; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < MAX; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
#include<stddef.h>
#if !defined(__cplusplus)
#error C++ compiler required.
#endif

int main()
{

	return 0;
}

#include <stdio.h>

#ifdef __cplusplus //c++编译器宏

#error 请使用g++,不能用gcc

#endif

int main（）

{
	；

}