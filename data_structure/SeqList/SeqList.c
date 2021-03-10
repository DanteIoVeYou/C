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

void SeqListPushBack(SeqList* ps, SeqListType x)	//头插
{
	SeqListCheck(ps);

}
void SeqListPushFront(SeqList* ps, SeqListType x);	//尾插
void SeqListPopBack(SeqList* ps, SeqListType x);	//尾删
void SeqListPopFront(SeqList* ps, SeqListType x);	//头删
void SeqListInsert(SeqList* ps, int pos, SeqListType x); //任意位置插入
void SeqListErase(SeqList* ps, int pos, SeqListType x);//任意位置删除





