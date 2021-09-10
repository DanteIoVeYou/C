#define _CRT_SECURE_NO_WARNINGS 1

/*
作业标题
字符串左旋

作业内容
实现一个函数，可以左旋字符串中的k个字符。

例如：

ABCD左旋一个字符得到BCDA

ABCD左旋两个字符得到CDAB
*/

//#include<stdio.h>
//#include<string.h>
//void Reverse(char* str, size_t k)
//{
//	char* left = str;
//	char* right = str + k - 1;
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void LeftRotate(char* str, size_t k, size_t sz)
//{
//	Reverse(str, k);
//	Reverse(str + k, sz - k);
//	Reverse(str, sz);
//}
//int main()
//{
//	char str[] = "abcdef";
//	size_t sz = strlen(str);
//	printf("左旋前：%s\n", str);
//
//	size_t k = 0;
//	scanf("%d", &k);
//
//	LeftRotate(str, 2, sz);
//	printf("左旋%d个字符后：%s\n", k, str);
//
//	return 0;
//}

/*字符串旋转结果

作业内容
写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。



例如：给定s1 =AABCD和s2 = BCDAA，返回1

给定s1=abcd和s2=ACBD，返回0.



AABCD左旋一个字符得到ABCDA

AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void MyStrDouble(char* str, size_t sz)
{
	char* begin = str + sz;
	while (sz--)
	{
		*begin++ = *str++;
	}
	*begin = '\0';
}

bool MyStrstr(char* str, char* str1)
{
	char* cur = NULL;
	while (*str)
	{
		cur = str;
		char* tmpstr1 = str1;
		int flag = 1;
		while (*tmpstr1)
		{
			if (*cur++ != *tmpstr1)
			{
				flag = 0;
				break;
			}
			tmpstr1++;
		}
		if (flag == 1)
			return true;
		str++;
	}
	return false;
}
int main()
{
	char str[20] = "abcdef";
	size_t len = strlen(str);
	char str1[20] = { 0 };
	scanf("%s", str1);
	MyStrDouble(str,len);
	bool ret = MyStrstr(str, str1);
	printf("是否是左旋后的字符串：%d\n",ret);
	return 0;
}
