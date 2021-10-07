#define _CRT_SECURE_NO_WARNINGS 1
#include "stdfunc.h"
int main()
{
	char str[30] = " ";
	char str2[] = " a";
	/*printf("my_strlen_cpunt:%u\n", my_strlen_re(str));
	printf("my_strlen_re:%u\n", my_strlen_re(str));
	printf("my_strlen_pointer:%u\n", my_strlen_re(str));*/
	//printf("%s", my_strcpy(str, str2));
	/*int ret = my_strcmp(str, str2);
	if (ret > 0)
		printf("str > str2\n");
	else if(ret<0)
		printf("str < str2\n");
	else
		printf("str = str2\n");*/
	//printf("%s", my_strcat(str, str2));
	bool ret = my_strstr(str, str2);
	if (ret == true)
		printf("yes\n");
	else
		printf("no\n");
	return 0;

}