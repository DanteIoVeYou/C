#define _CRT_SECURE_NO_WARNINGS 
#include"SeqList.h"

void SeqListTest(SeqList* ps)
{
	SeqListInit(ps);
	SeqListPrint(ps);
	SeqListPushFront(ps, 0);   //ͷ��
	SeqListPushBack(ps,1);   //β��
	SeqListPushBack(ps, 2);   //β��
	SeqListPushBack(ps, 3);   //β��
	SeqListPushBack(ps, 4);   //β��
	SeqListPopFront(ps);   //ͷɾ
	SeqListInsert(ps,1,5);   //����λ�ò���





	SeqListPrint(ps);
}

int main()
{
	SeqList test;
	SeqListTest(&test);
}