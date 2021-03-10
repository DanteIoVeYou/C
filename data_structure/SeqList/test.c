#define _CRT_SECURE_NO_WARNINGS 
#include"SeqList.h"

void SeqListTest(SeqList* ps)
{
	SeqListInit(ps);
	SeqListPrint(ps);
	SeqListPushFront(ps, 0);   //Õ∑≤Â
	SeqListPushBack(ps,1);   //Œ≤≤Â
	SeqListPushBack(ps, 2);   //Œ≤≤Â
	SeqListPushBack(ps, 3);   //Œ≤≤Â
	SeqListPushBack(ps, 4);   //Œ≤≤Â
	SeqListPopFront(ps);   //Õ∑…æ
	SeqListInsert(ps,1,5);   //»Œ“‚Œª÷√≤Â»Î





	SeqListPrint(ps);
}

int main()
{
	SeqList test;
	SeqListTest(&test);
}