#define _CRT_SECURE_NO_WARNINGS 1

/*
��ҵ����
�ַ�������

��ҵ����
ʵ��һ�����������������ַ����е�k���ַ���

���磺

ABCD����һ���ַ��õ�BCDA

ABCD���������ַ��õ�CDAB
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
//	printf("����ǰ��%s\n", str);
//
//	size_t k = 0;
//	scanf("%d", &k);
//
//	LeftRotate(str, 2, sz);
//	printf("����%d���ַ���%s\n", k, str);
//
//	return 0;
//}

/*�ַ�����ת���

��ҵ����
дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����



���磺����s1 =AABCD��s2 = BCDAA������1

����s1=abcd��s2=ACBD������0.



AABCD����һ���ַ��õ�ABCDA

AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC*/
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
	printf("�Ƿ�����������ַ�����%d\n",ret);
	return 0;
}
