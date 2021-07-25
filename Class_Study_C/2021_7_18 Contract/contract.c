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
	printf("序号\t姓名\t性别\t年龄\t住址\t电话\n");
	int i = 0;
	for (i = 0; i < ptr->num; i++)
	{
		printf("%d\t", i + 1);
		printf("%s\t", ptr->data[i].name);
		printf("%s\t", ptr->data[i].sex);
		printf("%d\t", (ptr->data[i].age));
		printf("%s\t", ptr->data[i].tel);
		printf("%s", ptr->data[i].addr);
		printf("\n");
	}
}
int SearchConByName(const Contract* ptr)//若找到，返回联系人在data数组中的下标
{
	char name[Max_Name] = { 0 };
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ptr->num; i++)
	{
		if (strcmp(name, ptr->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void SearchCon(const Contract* ptr)
{
	printf("请输入要查找之人的名字:>");
	int SearchRet = SearchConByName(ptr);
	if (SearchRet == -1)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，序号是%d\n", SearchRet + 1);
	}
}
void DeleteCon(Contract* ptr)
{
	printf("请输入要删除之人的名字:>");
	int ret = SearchConByName(ptr);
	if (ret  == -1)
	{
		printf("要删除的联系人不存在！\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < ptr->num - ret - 2; i++)
		{
			ptr->data[ret + i] = ptr->data[ret + i + 1];
		}
		ptr->num--;
		printf("删除联系人成功！\n");
	}
}
void ModifyCon(Contract* ptr)
{
	printf("请输入要修改之人的名字:>");
	int ret = SearchConByName(ptr);
	if (ret == -1)
	{
		printf("要修改的联系人不存在！\n");
	}
	else
	{
		scanf("%s", ptr->data[ret].name);
		scanf("%s", ptr->data[ret].sex);
		scanf("%d", &(ptr->data[ret].age));
		scanf("%s", ptr->data[ret].tel);
		scanf("%s", ptr->data[ret].addr);
		printf("修改联系人成功！\n");
	}
}
