#define _CRT_SECURE_NO_WARNINGS 1
#include "stdfunc.h"
//1.ģ��ʵ��strlen
//(1)������
size_t my_strlen_count(const char* str)
{
	assert(str);
	int count = 0;
	while (*str++)
		count++;
	return count;
}
//(2)�ݹ�
size_t my_strlen_re(const char* str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	return 1 + my_strlen_re(str + 1);
}
//(3)ָ��-ָ��
size_t my_strlen_p(const char* str)
{
	assert(str);
	char* end = str;
	while (*end++);
	return end - str;
}

//2.ģ��ʵ��strcpy
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	int ret = dest;
	while (*dest++ = *src++);
	return ret;
}

//3.ģ��ʵ��strcmp
int my_strcmp(
	const char* str1, 
	const char* str2
	)
{
	assert(str1 && str2);
	int ret = 0;
	while ((ret = (*str1 - *str2)) == 0 && *str1)
		{
			str1++;
			str2++;
		}
	return -(ret < 0) + (ret > 0);
}


//4.ģ��ʵ��strcat
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++);
	dest--;
	while (*dest++ = *src++);
	return ret;
}

//5.ģ��ʵ��strstr
bool my_strstr(const char* dest, const char* src)
{
	while (*dest)
	{
		const char* cpd = dest;
		const char* cps = src;
		while (*cpd == *cps && *cps && *cpd)
		{
			cpd++;
			cps++;
		}
		if (*cps == '\0')
			return true;
		if (*cpd == '\0')
			return false;
		dest++;
	}
	return false;
}