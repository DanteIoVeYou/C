#define _CRT_SECURE_NO_WARNINGS 1
#include"contract.h"
void InitCon(Contract* ptr)
{
	memset(ptr, 0, sizeof(int) + sizeof(linkman) * Max_PeoNum);
}
void Add(Contract* ptr)
{
	scanf("%s", ptr->data[ptr->num].name);
	scanf("%s", ptr->data[ptr->num].sex);
	scanf("%d", &(ptr->data[ptr->num].age));
	scanf("%s", ptr->data[ptr->num].tel);
	scanf("%s", ptr->data[ptr->num].addr);
	ptr->num++;
	printf("添加联系人成功\n");
}
void ShowCon(const Contract* ptr)
{
	int i = 0;
	for (i = 0; i < ptr->num; i++)
	{
		printf("%s\t", ptr->data[ptr->num].name);
		printf("%s\t", ptr->data[ptr->num].sex);
		printf("%d\t", (ptr->data[ptr->num].age));
		printf("%s\t", ptr->data[ptr->num].tel);
		printf("%s", ptr->data[ptr->num].addr);
		printf("\n");
	}
}

