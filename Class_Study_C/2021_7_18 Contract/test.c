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
		printf("请选择:>");
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
			printf("退出成功！\n");
			break;
		default:
			printf("无效的输入，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}