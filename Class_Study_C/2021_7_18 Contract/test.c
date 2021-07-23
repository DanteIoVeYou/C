#define _CRT_SECURE_NO_WARNINGS 1
#include"contract.h"
void meau()
{
	printf("***********************************************\n");
	printf("***********         Contact          **********\n");
	printf("***********1.Add             2.Delete**********\n");
	printf("***********3.Search          4.Modify**********\n");
	printf("***********5.Show            0.Exit  **********\n");
	printf("***********************************************\n");
}
int main()
{
	Contract contract;
	Contract* ptr = &contract;
	InitCon(&contract);
	int input = 0;
	do {
		meau();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			Add(&contract);
			break;
		case delete:
			break;
		case search:
			break;
		case modify:
			break;
		case show:
			ShowCon(&contract);
			break;
		case exit:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}