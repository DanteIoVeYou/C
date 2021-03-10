#define _CRT_SECURE_NO_WARNINGS 
#include"SeqList.h"

void SeqListTest(SeqList* ps)
{
	SeqListInit(ps);
	SeqListPrint(ps);
	SeqListPushFront(ps, 0);   //Õ∑≤Â
	SeqListPrint(ps);

	SeqListPushBack(ps,1);   //Œ≤≤Â
	SeqListPrint(ps);

	SeqListPushBack(ps, 2);   //Œ≤≤Â
	SeqListPrint(ps);

	SeqListPushBack(ps, 3);   //Œ≤≤Â
	SeqListPrint(ps);

	SeqListPushBack(ps, 4);   //Œ≤≤Â
	SeqListPrint(ps);

	SeqListPopFront(ps);   //Õ∑…æ
	SeqListPrint(ps);

	SeqListInsert(ps,3,5);   //»Œ“‚Œª÷√≤Â»Î
	SeqListPrint(ps);

	SeqListErase(ps, 4);	//»Œ“‚Œª÷√…æ≥˝
	SeqListPrint(ps);
}

int main()
{
	SeqList test;
	SeqListTest(&test);
}