#define _CRT_SECURE_NO_WARNINGS 1
#include"contract.h"
void InitCon(Contract* ptr)
{
	ptr->data = (linkman*)malloc(3 * sizeof(linkman));
	if (ptr->data == NULL)
	{
		perror("InitCon");
		return;
	}
	else
	{
		ptr->capacity = ININUM;
		ptr->num = 0;
	}
}
void AddCon2(Contract* ptr)
{
	FILE* pf = fopen("contract.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	if (ptr->num == ptr->capacity)
	{
		linkman* tmpptr = (linkman*)realloc(ptr->data, sizeof(linkman) * (ptr->capacity + ININUM));
		if (tmpptr != NULL)
		{
			ptr->data = tmpptr;
			ptr->capacity += ININUM;
			tmpptr = NULL;
		}
		else
		{
			perror("AddCon");
			printf("�����ϵ��ʧ�ܣ�\n");
			return;
		}
	}
	scanf("%s", ptr->data[ptr->num].name);
	scanf("%s", ptr->data[ptr->num].sex);
	scanf("%d", &(ptr->data[ptr->num].age));
	scanf("%s", ptr->data[ptr->num].tel);
	scanf("%s", ptr->data[ptr->num].addr);
	fwrite(&(ptr->data[ptr->num]), sizeof(linkman), 1, pf);
	ptr->num++;
	printf("�����ϵ�˳ɹ�\n");
	fclose(pf);
	pf = NULL;
}
void AddCon(Contract* ptr)
{
	CheckCapacity(ptr);
	scanf("%s", ptr->data[ptr->num].name);
	scanf("%s", ptr->data[ptr->num].sex);
	scanf("%d", &(ptr->data[ptr->num].age));
	scanf("%s", ptr->data[ptr->num].tel);
	scanf("%s", ptr->data[ptr->num].addr);
	ptr->num++;
	printf("�����ϵ�˳ɹ�\n");
}
void ShowCon2(const Contract* ptr)
{
	FILE* pf = fopen("contract.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	printf("���\t����\t�Ա�\t����\tסַ\t�绰\n");
	int i = 0;
	for (i = 0; i < ptr->num; i++)
	{
		fread(&(ptr->data[i]), sizeof(linkman), 1, pf);
	}
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
	fclose(pf);
	pf = NULL;
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
void DestroyCon(Contract* ptr)
{
	free(ptr->data);
	ptr->data = NULL;
	ptr->capacity = 0;
	ptr->num = 0;
}
void SaveCon(Contract* ptr)
{
	FILE* pf = fopen("contract.txt", "w");
	if (pf == NULL)
	{
		perror(fopen);
		return;
	}
	int i = 0;
	for (i = 0; i < ptr->num; i++)
	{
		fwrite(&ptr->data[i], sizeof(linkman), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}

void LoadCon(Contract* ptr)
{
	FILE* pf = fopen("contract.txt", "r");
	if (pf == NULL)
	{
		perror(fopen);
		return;
	}
	linkman tmplinkman = { 0 };
	while (fread(&tmplinkman,sizeof(linkman),1,pf))
	{
		CheckCapacity(ptr);
		ptr->data[ptr->num] = tmplinkman;
		ptr->num++;
	}
	fclose(pf);
	pf = NULL;
}
void CheckCapacity(Contract* ptr)
{
	if (ptr->capacity == ptr->num)
	{
		linkman* tmpptr = (linkman*)realloc(ptr->data, (ptr->capacity + INCNUM) * sizeof(linkman));
		if (tmpptr != NULL)
		{
			ptr->data = tmpptr;
			ptr->capacity += INCNUM;
			tmpptr = NULL;
		}
		else
		{
			perror("AddCon");
			printf("�����ϵ��ʧ�ܣ�\n");
			return;
		}
	}
}