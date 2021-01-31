/*
This program is to finish functions of the fonction of "strlen"
*/

/*
#include<stdio.h>
int main()
{		
	int my_strlen(char* arr);
	char arr[]="claisen";
	int num=my_strlen(arr);
	printf("%d",num);
	return 0;
}
int my_strlen(char* arr)
{	
	int count=0;
	while(*arr !='\0')
	{
		count++;
		*arr++;
	}
	return count;

}
*/


#include<stdio.h>
int main()
{	
	int my_strlen(char* str);	
	char arr[]="williamson";
	int num=my_strlen(arr);
	printf("len = %d\n",num);
	return 0;
}

int my_strlen(char* str)
{
	if(*str != '\0')
	return 1+my_strlen(str+1);
	else
	return 0;
}
