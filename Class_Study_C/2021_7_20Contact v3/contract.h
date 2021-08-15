#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Max_Name 30
#define Max_Sex 6
#define Max_Tel 12
#define Max_Addr 20
#define Max_PeoNum 1000

#define ININUM 3
#define INCNUM 2
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
	char name[Max_Name];
	char sex[Max_Sex];
	int age;
	char tel[Max_Tel];
	char addr[Max_Addr];
}linkman;

typedef struct Contract
{
	linkman* data;
	int num;
	int capacity;
}Contract;

void InitCon(Contract* ptr);

void AddCon(Contract* ptr);
void AddCon2(Contract* ptr);

void ShowCon(const Contract* ptr);
void ShowCon2(const Contract* ptr);

int SearchConByname(const Contract* ptr);
void DeleteCon(Contract* ptr);
void ModifyCon(Contract* ptr);
void SearchCon(const Contract* ptr);
void SortCon(Contract* ptr);
void DestroyCon(Contract* ptr);
void SaveCon(Contract* ptr);
void LoadCon(Contract* ptr);
void CheckCapacity(Contract* ptr);