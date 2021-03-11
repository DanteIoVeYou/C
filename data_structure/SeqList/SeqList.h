#pragma once
#define INIT_CAPACITY 10

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SeqListType;	//make elements in SeqList easy to modify
typedef struct{
	SeqListType arr[INIT_CAPACITY];
	size_t size;
	size_t capacity;
}SeqList;					//Define a sequnece-list.

void SeqListPushBack(SeqList* ps, SeqListType x);   //ͷ��
void SeqListPushFront(SeqList* ps, SeqListType x);	//β��
void SeqListPopBack(SeqList* ps);	//βɾ
void SeqListPopFront(SeqList* ps);	//ͷɾ
void SeqListInsert(SeqList* ps, int pos, SeqListType x); //����λ�ò���
void SeqListErase(SeqList* ps, int pos);//����λ��ɾ��
void SeqListInit(SeqList* ps);
void SeqListPrint(const SeqList* ps);
void SeqListCheck(SeqList* ps);
int SeqListFind(SeqList* ps, int x);	//����һ���� x


