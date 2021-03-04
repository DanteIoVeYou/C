#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest,const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "abcrurj";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}
