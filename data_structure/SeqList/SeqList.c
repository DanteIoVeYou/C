#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListInit(SeqList* ps)	//��ʼ��
{
	assert(ps);
	ps->size = 0;
	ps->capacity = INIT_CAPACITY;
	int i = 0;
	for (i = 0; i < INIT_CAPACITY; i++)
	{
		ps->arr[i] = 0;
	}
}
void SeqListPrint(const SeqList* ps)	//��ӡ
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}
void SeqListCheck(SeqList* ps)	//����Ƿ������������������һ��
{
	assert(ps);
	if (ps->size >= ps->capacity)
	{
		SeqList* ptr = realloc(ps, sizeof(ps) * 2);
		if (ptr == NULL)
			exit(-1);
		else
			ps = ptr;
	}
}

void SeqListPushBack(SeqList* ps, SeqListType x)	//β��
{
	assert(ps);
	SeqListCheck(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SeqList* ps, SeqListType x)	//ͷ��
{
	assert(ps);
	SeqListCheck(ps);
	int i = 0;
	for ( i = 0; i < ps->size; i++)
	{
		ps->arr[ps->size - i] = ps->arr[ps->size - 1 - i];
	}
	ps->arr[0] = x;
	ps->size++;
}
void SeqListPopBack(SeqList* ps)	//βɾ
{
	assert(ps);
	ps->size--;
}

void SeqListPopFront(SeqList* ps)	//ͷɾ
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

void SeqListInsert(SeqList* ps, int pos, SeqListType x)	//����λ�ò���
{
	assert(ps);
	assert(pos <= ps->size && pos >= 0);
	SeqListCheck(ps);
	int i = 0;
	for (i = 0; i < ps->size - pos + 1; i++)
	{
		ps->arr[ps->size - i] = ps->arr[ps->size - i - 1];
	}
	ps->arr[pos - 1] = x;
	ps->size++;
}

void SeqListErase(SeqList* ps, int pos)//����λ��ɾ��
{
	assert(ps);
	assert(pos <= ps->size && pos>=0);
	int i = 0;
	for (i = 0; i < ps->size - pos; i++)
	{
		ps->arr[pos + i - 1] = ps->arr[pos + i];
	}
	ps->size--;
}

int SeqListFind(SeqList* ps, int x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
			return i;
	}
	return -1;
}





