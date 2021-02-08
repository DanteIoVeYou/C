//Enter days and convert days to xxx weeks,xxx days
#include<stdio.h>
int main()
{
	int days = 1;
	while(1)
	{
		printf("Please enter days:");
		scanf("%d",&days);
		if(days<=0) break;
		printf("%d days are %d weeks , %d days.\n",days,days/7,days%7);
	}
	return 0;
}
