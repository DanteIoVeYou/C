#define _CRT_SECURE_NO_WARNINGS 1
#include"contract.h"
void meau()
{
	printf("***********************************************\n");
	printf("***********         Contact          **********\n");
	printf("***********1.Add             2.Delete**********\n");
	printf("***********3.Search          4.Modify**********\n");
	printf("***********5.Show            6.Sort  **********\n");
	printf("***********0.Exit                    **********\n");
	printf("***********************************************\n");

}
int main()
{
	Contract contract;
	InitCon(&contract);
	int input = 0;
	do {
		meau();
		int SearchRet = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			Add(&contract);
			break;
		case delete:
			DeleteCon(&contract);
			break;
		case search:
			SearchCon(&contract);
			break;
		case modify:
			ModifyCon(&contract);
			break;
		case show:
			ShowCon(&contract);
			break;
		case sort:
			break;
		case exit:
			printf("�˳��ɹ���\n");
			break;
		default:
			printf("��Ч�����룬���������룡\n");
			break;
		}
	} while (input);
	return 0;
}