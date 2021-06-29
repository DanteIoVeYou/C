#include<stdio.h>
int check1()
{
	int i = 1;
	return *(char*)&i;
}
int check2()
{
	union check
	{
		int i;
		char c;
	}ch = {1};
	return ch.c;
}
int main()
{
	int ret = check1();
	if (ret == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;
}
