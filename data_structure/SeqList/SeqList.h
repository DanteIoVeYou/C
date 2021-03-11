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

void SeqListPushBack(SeqList* ps, SeqListType x);   //头插
void SeqListPushFront(SeqList* ps, SeqListType x);	//尾插
void SeqListPopBack(SeqList* ps);	//尾删
void SeqListPopFront(SeqList* ps);	//头删
void SeqListInsert(SeqList* ps, int pos, SeqListType x); //任意位置插入
void SeqListErase(SeqList* ps, int pos);//任意位置删除
void SeqListInit(SeqList* ps);
void SeqListPrint(const SeqList* ps);
void SeqListCheck(SeqList* ps);
int SeqListFind(SeqList* ps, int x);	//查找一个数 x


