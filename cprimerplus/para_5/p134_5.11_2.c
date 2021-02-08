//Input a num and pirnt numbers [num,num+10]
#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	printf("Please enter a number:");
	scanf("%d",&num);
	for(i=num;i<=num+10;i++)
	{
		printf("%d ",i);
	}
		printf("\n");
	return 0;
	




}
