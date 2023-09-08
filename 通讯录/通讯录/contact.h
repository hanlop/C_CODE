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

struct Contact//����һ��ͨѶ¼�Ľṹ��
{
	struct PeInfo date[MAX];
	int size;//��¼ͨѶ¼�д��������Ϣ
};
//��ϵ�˳�ʼ��
void Inticontact(struct Contact *Ps);
//������ϵ��
void Addcontact(struct Contact* Ps);
//��ʾ��ϵ�˵���Ϣ
void Showcontact(const struct Contact* Ps);
//ɾ����ϵ�˵���Ϣ
void Delcontact(struct Contact* Ps);
//Ѱ����ϵ�˵���Ϣ
void Searchcontact(const struct Contact* Ps);
//�޸���ϵ�˵���Ϣ
void Modifycontact(struct Contact* Ps);
//��������������
void Sortcontact(struct Contact* Ps);
