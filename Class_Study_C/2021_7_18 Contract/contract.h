#pragma once

#include<stdio.h>
#include<string.h>

#define Max_Name 30
#define Max_Sex 6
#define Max_Tel 12
#define Max_Addr 20
#define Max_PeoNum 1000
enum Fun
{
	exit,
	add,
	delete,
	search,
	modify,
	show
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
void ShowCon(Contract* ptr);


