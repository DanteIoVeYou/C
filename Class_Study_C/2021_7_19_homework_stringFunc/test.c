#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdlib.h>
//#include <stdio.h>
//#include<math.h>
//#include<limits.h>
//int my_atoi(const char* str)
//{
//	int sz = 0;
//	char* tmpstr = str;
//	int flag = 1;
//	if (*tmpstr == '-')
//	{
//		flag = -1;
//		tmpstr++;
//	}
//	while (*tmpstr++)
//	{
//		sz++;
//	}
//	int i = 0;
//	int ret = 0;
//	if (*str == '-')
//		str++;
//	for (i = 0; i < sz; i++)
//	{
//		ret += pow(10, sz- i -1) * (int)(*str++ - 48);
//	}
//	return flag * ret;
//}

//"123123"
//"-213123"
//"       123123"
//"asd12312312"
//"       asd123123asdasd"
//"ajkusdg      127367812    asfadf"
//"adas     asdad       " 
//""
//NULL
//"2894790234798237489237894789234789237890789234789"
//enum State {
//	ILLEGAL,
//	LEGAL
//};
//
//int state = ILLEGAL;
//
//int my_atoi(const char* str)
//{
//	long long ret = 0;
//	int flag = 1;
//	if (str == NULL || *str == "")
//	{
//		return 0;
//	}
//	while ((*str < '0'|| *str > '0' + 9) && *str)
//	{
//		if (*str == '+')
//			flag = 1;
//		else if(*str == '-')
//			flag = -1;
//		str++;
//	}
//	if (!*str)
//	{
//		return 0;
//	}
//	while (*str >= '0' && *str <= '0' + 9)
//	{
//		ret = ret * 10 + (*str - '0') * flag;
//		str++;
//	}
//	if (ret > INT_MAX || ret < INT_MIN)
//	{
//		return 0;
//	}
//	state = LEGAL;
//	return ret;
//}
//void main(void)
//{
//	char* s; double x; int i; long l;
//
//	s = "  -2309.12E-15";    /* Test of atof */
//	x = atof(s);
//	printf("atof test: ASCII string: %s\tfloat:  %e\n", s, x);
//
//	s = "7.8912654773d210";  /* Test of atof */
//	x = atof(s);
//	printf("atof test: ASCII string: %s\tfloat:  %e\n", s, x);
//
//	s = "  -9885 pigs";      /* Test of atoi */
//	i = atoi(s);
//	printf("atoi test: ASCII string: %s\t\tinteger: %d\n", s, i);
//
//	s = "98854 dollars";     /* Test of atol */
//	l = atol(s);
//	printf("atol test: ASCII string: %s\t\tlong: %ld\n", s, l);
//	char* str = "adhajs -318378 jdhja";
//	int ret = my_atoi(str);
//	if (state == LEGAL)
//		printf("legal:%d\n", ret);
//	else
//		printf("illegal:%d\n", ret);
//}

/*

找单身狗

作业内容
一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。

编写一个函数找出这两个只出现一次的数字。


答题
( 注：编程题请贴代码+运行截图！)
*/



/*


mimic strncpy

*/
//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char* strDest, const char* strSource, size_t num)
//{
//	assert(strSource && strDest);
//	char* ret = strDest;
//	while (num&&strSource)
//	{
//		*strDest++ = *strSource++;
//		num--;
//	}
//	if (*strSource == '\0' && num > 0)
//	{
//		*strDest = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char strD[] = "dog is stupid";
//	char strS[] = "cat";
//	printf("%s\n", strD);
//	my_strncpy(strD, strS, 3);
//	printf("%s", strD);
//	return 0;
//}


// mimic strncat
//#include<stdio.h>
//#include<assert.h>
//char* my_strncat(char* strDest, const char* strSource, int count)
//{
//	assert(strDest && strSource);
//	char* ret = strDest;
//	while(*strDest)
//	{
//		strDest++;
//	}
//	while (count && *strSource)
//	{
//		*strDest++ = *strSource++;
//		count--;
//	}
//	*strDest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char strD[20] = "claisen is ";
//	char strS[] = "stupid";
//	printf("%s\n", strD);
//	my_strncat(strD, strS, 10);
//	printf("%s\n", strD);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "ajkdas";
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p != NULL)
//	{
//		;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//
//void test() 
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int)); 
//	if (NULL == p) 
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++) 
//	{
//		*(p + i) = i;//当i是10的时候越界访问 
//	} 
//	free(p);
//	p = NULL;
//}
//
//void test()
//{
//	int a = 0;
//	int* pa = &a;
//	free(a);
//}
//
//void test()
//{
//	int* ptr = (int*)malloc(100);
//	ptr++;
//	free(ptr);
//}
//
//void test()
//{
//	int* ptr = (int*)malloc(100);
//	free(ptr);
//	free(ptr);
//}
//
//void test()
//{
//	int* ptr = (int*)malloc(100);
//	//如果此时开辟失败，ptr为NULL
//	*ptr = 4;
//	free(ptr);
//}



//void GetMemory(char* p) 
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//请问运行Test 函数会有什么样的结果？

//char* GetMemory(void) 
//{
//	char p[] = "hello world"; 
//	return p;
//}
//void Test(void) {
//	char* str = NULL; 
//	str = GetMemory(); 
//	printf(str);
//}

////请问运行Test 函数会有什么样的结果？

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void) {
//	char* str = NULL; 
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
////请问运行Test 函数会有什么样的结果？

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello"); 
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
////请问运行Test 函数会有什么样的结果？

int main()
{
	Test();
	return 0;
}