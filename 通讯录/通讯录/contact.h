#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_TEL 15
#define MAX_ADDRES 20
#define MAX_SEX 5
enum contact
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeInfo
{
	char name[MAX_NAME];
	int age;
	char tel[MAX_TEL];
	char addres[MAX_ADDRES];
	char sex[MAX_SEX];
};

struct Contact//创建一个通讯录的结构体
{
	struct PeInfo date[MAX];
	int size;//记录通讯录中存入多少信息
};
//联系人初始化
void Inticontact(struct Contact *Ps);
//增加联系人
void Addcontact(struct Contact* Ps);
//显示联系人的信息
void Showcontact(const struct Contact* Ps);
//删除联系人的信息
void Delcontact(struct Contact* Ps);
//寻找联系人的信息
void Searchcontact(const struct Contact* Ps);
//修改联系人的信息
void Modifycontact(struct Contact* Ps);
//根据年龄来排序
void Sortcontact(struct Contact* Ps);
