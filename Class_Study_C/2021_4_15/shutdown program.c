#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	printf("Your computer will shutdown 1 minute later.\n");
	system("shutdown -s -t 60");
	printf("Input \"Iampig\" , the process will end.\nPlease input:>");
	scanf("%s", input);
	while (1)
	{
		if (!strcmp(input, "Iampig"))
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("Input \"Iampig\" , the process will end.\nPlease input:>");
			scanf("%s", input);
		}
	}
	return 0;
}
