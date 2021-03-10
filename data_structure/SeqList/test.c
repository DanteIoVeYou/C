#define _CRT_SECURE_NO_WARNINGS 
#include"SeqList.h"

void SeqListTest(SeqList* ps)
{
	SeqListInit(ps);
	SeqListPrint(ps);

	//SeqListPushBack(ps,1);   //Í·²å
	//SeqListPrint(ps);
}

int main()
{
	SeqList test;
	SeqListTest(&test);
}