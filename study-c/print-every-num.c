/*this program is to print every num of a number
  scanf 1234
  printf 1 2 3 4
*/

/*
#include<stdio.h>
int main()
{
	void print(int a);
	int a=0;
	printf("Please enter an interger:");
	scanf("%d",&a);
	if(a<10) printf("%d",&a);
	else
	{
       	while(a>=10)
       		{
		print(a);
		a=a/10;
		}
	
	}
	printf("%d\n",a);
	return 0;
}

void print(int a)
{
	printf("%d ",a%10);
}
*/

#include<stdio.h>
void print(int a)
{
	if(a>=10)
	print(a/10);
	printf("%d ",a%10);
}
int main()
{
	void print(int a);
	int a;
	printf("Please enter a number:");
	scanf("%d",&a);
	print(a);
	return 0;
}
