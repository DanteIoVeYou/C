#define _CRT_SECURE_NO_WARNINGS 1
//1------�ַ�������---����һ���ַ������������ӡ
//#include<stdio.h>
//int my_strlen(char* pc)
//{
//	char* tmp = pc;
//	if (*tmp)
//		return 1 + my_strlen(++tmp);
//	else
//		return 0;
//}
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int len = my_strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*(left++) = *right;
//		*(right--) = tmp;
//	}
//	printf("%s", str);
//	return 0;
//}

//2------��ӡ����
//#include<stdio.h>
//int main()
//{	
//	int n = 0;
//	printf("���������ε���������������");
//	scanf("%d", &n);
//	int num = (n - 1) / 2;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num + 1; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (j >= num + 1 -i && j <= num + 1 + i)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <= num; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if(j>i+1&&j<n-i)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


/*3------����ˮ����

��ҵ����
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
*/
#include<stdio.h>
int main()
{
	int money = 20;
	int price = 1;
	int empty_bottle = money/price;
	int swap_bottle = 2;
	int sum_bottle = money/price;
	while (empty_bottle > 1)
	{
		sum_bottle += empty_bottle / 2;
		empty_bottle -= empty_bottle / 2;
	}
	printf("һ���ܺ�%dƿ��ˮ\n",sum_bottle);
	return 0;
}