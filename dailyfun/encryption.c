#include<stdio.h>
#include<windows.h>
int main()
{	int judge,void1;
	printf("===============================================\n");
	printf("Hey,guy!Welcome to use claisen's encryption software of version 0.1 !\n");
	printf("Enter \"1\" to encrypt.\n");
	printf("Enter \"0\" to decode.\n");
	printf("===============================================\n");
	while(1)
	{
		printf("Select:\t");
		scanf("%d",&judge);
		scanf("%c",&void1);
		if(void1=='\n')
		{
			printf("Enter:\t");
			if(judge==1)
			{
				char c;
				c = getchar();
				printf("Result:\t");
				while(c!='\n')
				{		if(c==32) printf(" ");
						else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
						{
							if((c>='a'&&c<'w')||(c>='A'&&c<'W'))		
								c+=4;
							else
								c-=22;
							printf("%c",c);
						}
						else printf("%c",c);
						c=getchar();	
				}
					printf("\n");
			}
			else
			{
				char c;
				c = getchar();
				printf("Result:\t");
				while(c!='\n')
				{		if(c==32) printf(" ");
						else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
						{
							if((c>'d'&&c<='z')||(c>'D'&&c<='Z'))		
								c-=4;
							else
								c+=22;
							printf("%c",c);
						}
						else printf("%c",c); 
						c=getchar();	
			}
				printf("\n");	
			}
		}
		printf("\n"); 
	}
	system("pause");
	return 0;
} 