#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Max_Name 30
#define Max_Sex 6
#define Max_Tel 12
#define Max_Addr 20
#define Max_PeoNum 1000
enum Fun
{
	quit,
	add,
	delete,
	search,
	modify,
	show,
	sort,
	clear
};

typedef struct linkman
{
	//姓名 性别 年龄 电话 住址
	char name[Max_Name];
	char sex[Max_Sex];
	int age;
	char tel[Max_Tel];
	char addr[Max_Addr];
}linkman;

typedef struct Contract
{
	linkman data[Max_PeoNum];
	int num;
}Contract;

void InitCon(Contract* ptr);
void Add(Contract* ptr);
void ShowCon(const Contract* ptr);
int SearchConByname(const Contract* ptr);
void DeleteCon(Contract* ptr);
void ModifyCon(Contract* ptr);
void SearchCon(const Contract* ptr);
void SortCon(Contract* ptr);


