#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//
//	char str[] = "abcde";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}


//Problem 1
//模拟实现库函数strlen
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	char* start = str;
//	int count = 0;
//	while (*str++);
//	return str - start - 1;
//}
//int main()
//{
//	char str[] = "abcdefg";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}

//Problem 2
//模拟实现库函数strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src && dest);
//	char* start = dest;
//	while (*dest++ = *src++)
//		;//copy src over dest
//	return (start);
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxxxxxxx";
//	char arr2[] = "helloworld";
//	printf("%s",my_strcpy(arr1,arr2));
//
//	return 0;
//}
