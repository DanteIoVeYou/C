#define _CRT_SECURE_NO_WARNINGS 
#include"SeqList.h"

void SeqListTest(SeqList* ps)
{
	SeqListInit(ps);
	SeqListPrint(ps);
	SeqListPushFront(ps, 0);   //ͷ��
	SeqListPrint(ps);

	SeqListPushBack(ps,1);   //β��
	SeqListPrint(ps);

	SeqListPushBack(ps, 2);   //β��
	SeqListPrint(ps);

	SeqListPushBack(ps, 3);   //β��
	SeqListPrint(ps);

	SeqListPushBack(ps, 4);   //β��
	SeqListPrint(ps);

	SeqListPopFront(ps);   //ͷɾ
	SeqListPrint(ps);

	SeqListInsert(ps,3,5);   //����λ�ò���
	SeqListPrint(ps);

	SeqListErase(ps, 4);	//����λ��ɾ��
	SeqListPrint(ps);
}

int main()
{
	SeqList test;
	SeqListTest(&test);
}