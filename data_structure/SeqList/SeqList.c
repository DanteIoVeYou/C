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

void SeqListPushBack(SeqList* ps, SeqListType x)	//ͷ��
{
	SeqListCheck(ps);

}
void SeqListPushFront(SeqList* ps, SeqListType x);	//β��
void SeqListPopBack(SeqList* ps, SeqListType x);	//βɾ
void SeqListPopFront(SeqList* ps, SeqListType x);	//ͷɾ
void SeqListInsert(SeqList* ps, int pos, SeqListType x); //����λ�ò���
void SeqListErase(SeqList* ps, int pos, SeqListType x);//����λ��ɾ��





