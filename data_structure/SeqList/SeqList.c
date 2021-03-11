#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListInit(SeqList* ps)	//初始化
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
void SeqListPrint(const SeqList* ps)	//打印
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}
void SeqListCheck(SeqList* ps)	//检查是否存满，若存满，扩大一倍
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

void SeqListPushBack(SeqList* ps, SeqListType x)	//尾插
{
	assert(ps);
	SeqListCheck(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SeqList* ps, SeqListType x)	//头插
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
void SeqListPopBack(SeqList* ps)	//尾删
{
	assert(ps);
	ps->size--;
}

void SeqListPopFront(SeqList* ps)	//头删
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

void SeqListInsert(SeqList* ps, int pos, SeqListType x)	//任意位置插入
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

void SeqListErase(SeqList* ps, int pos)//任意位置删除
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





