#define _CRT_SECURE_NO_WARNINGS 1
#include"contract.h"
void InitCon(Contract* ptr)
{
	if (ptr == NULL)
	{
		printf("����ͨѶ¼ʧ�ܣ�\n");
		return;
	}
	else
	{
		memset(ptr, 0, sizeof(int) + sizeof(linkman) * Max_PeoNum);
	}
}
void Add(Contract* ptr)
{
	if (ptr->num == Max_PeoNum)
	{
		printf("��ϵ���������޷���ӡ�\n");
	}
	else
	{
		scanf("%s", ptr->data[ptr->num].name);
		scanf("%s", ptr->data[ptr->num].sex);
		scanf("%d", &(ptr->data[ptr->num].age));
		scanf("%s", ptr->data[ptr->num].tel);
		scanf("%s", ptr->data[ptr->num].addr);
		ptr->num++;
		printf("�����ϵ�˳ɹ�\n");
	}
}
void ShowCon(const Contract* ptr)
{
	printf("���\t����\t�Ա�\t����\tסַ\t�绰\n");
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
int SearchConByName(const Contract* ptr)//���ҵ���������ϵ����data�����е��±�
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
	printf("������Ҫ����֮�˵�����:>");
	int SearchRet = SearchConByName(ptr);
	if (SearchRet == -1)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ������%d\n", SearchRet + 1);
	}
}
void DeleteCon(Contract* ptr)
{
	printf("������Ҫɾ��֮�˵�����:>");
	int ret = SearchConByName(ptr);
	if (ret == -1)
	{
		printf("Ҫɾ������ϵ�˲����ڣ�\n");
	}
	else
	{
		int i = 0;
		printf("%d\n", ret);
		for (i = 0; i < ptr->num - ret - 1; i++)
		{
			ptr->data[ret + i] = ptr->data[ret + i + 1];
		}
		ptr->num--;
		printf("ɾ����ϵ�˳ɹ���\n");
	}
}
void ModifyCon(Contract* ptr)
{
	printf("������Ҫ�޸�֮�˵�����:>");
	int ret = SearchConByName(ptr);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲����ڣ�\n");
	}
	else
	{
		printf("����������Ϣ:>\n");
		scanf("%s", ptr->data[ret].name);
		scanf("%s", ptr->data[ret].sex);
		scanf("%d", &(ptr->data[ret].age));
		scanf("%s", ptr->data[ret].tel);
		scanf("%s", ptr->data[ret].addr);
		printf("�޸���ϵ�˳ɹ���\n");
	}
}
int SortByName(const void* e1, const void* e2)
{
	return strcmp((*(linkman*)e1).name, (*(linkman*)e2).name);
}
int SortByAge(const void* e1, const void* e2)
{
	return (*(linkman*)e1).age - (*(linkman*)e2).age;
}
void SortCon(Contract* ptr)
{
	int choose = 0;
	printf("1.������������\n2.������������\n");
	printf("��ѡ������ʽ:>");
	scanf("%d", &choose);
	switch (choose)
	{
	case 1:
		qsort(ptr->data, ptr->num, sizeof(ptr->data[0]), SortByName);
		printf("����ɹ���\n");
		break;
	case 2:
		qsort(ptr->data, ptr->num, sizeof(ptr->data[0]), SortByAge);
		printf("����ɹ���\n");
		break;
	default:
		printf("��������\n");
		break;
	}
}

