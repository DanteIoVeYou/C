#include<stdio.h>
enum operator
{
	exit,
	add,
	sub,
	mul,
	div
};

void meau()
{
	printf("==============================\n");
	printf("=======1.add   2.sub   =======\n");
	printf("=======3.mul   4.div   =======\n");
	printf("=======     0.exit     =======\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return 1.0*x / y;
}
int (*arr[5])(int x, int y) = { 0,Add,Sub,Mul,Div };

int main()
{
	int input = 0;
	do {
		meau();
		printf("Please input:>");
		scanf("%d", &input);
		if (input>=1&&input<=4)
		{
			int x = 0;
			int y = 0;
			scanf("%d%d", &x, &y);
			printf("%d\n", arr[input](x, y));
		}
		else if (input == 0)
		{
			;
		}
		else
		{
			printf("Input again!\n");
		}
	} while (input);
	return 0;
}
