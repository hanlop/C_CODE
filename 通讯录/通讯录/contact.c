#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void Inticontact(struct Contact* Ps)
{
	memset(Ps->date, 0, sizeof(Ps->date));
	Ps->size = 0;
}
static int Findcontact(char* name,const struct Contact* Ps)
{
	int i = 0;
	for (i = 0; i < Ps->size; i++)
	{
		if (0 == strcmp(Ps->date[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
//������ϵ��
void Addcontact(struct Contact* Ps)
{
	if (Ps->size == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", Ps->date[Ps->size].name);
		printf("����������:>");
		scanf("%d", &(Ps->date[Ps->size].age));
		printf("�������ַ:>");
		scanf("%s", Ps->date[Ps->size].addres);
		printf("�������Ա�:>");
		scanf("%s", Ps->date[Ps->size].sex);
		printf("������绰:>");
		scanf("%s", Ps->date[Ps->size].tel);
		printf("��ӳɹ�\n");
		Ps->size++;
	}
}
//��ʾͨѶ¼
void Showcontact(const struct Contact* Ps)
{
	if (Ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ʾ\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-15s\t%-4s\t%-15s\n", "����", "����", "��ַ", "�Ա�", "�绰");
		int i = 0;
		for (i = 0; i < Ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-15s\t%-4s\t%-15s\t\n", Ps->date[i].name,
				Ps->date[i].age,
				Ps->date[i].addres,
				Ps->date[i].sex,
				Ps->date[i].tel);
		}
	}
}

void Delcontact(struct Contact* Ps)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ������ϵ�˵�����:>");
	scanf("%s", name);
	//�����Ƿ��д���
	int pos = Findcontact(name, Ps);

	if (-1 == pos)
	{
		printf("û�������ϵ�ˣ��޷�ɾ��\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < Ps->size-1; j++)
		{
			Ps->date[j] = Ps->date[j + 1];
		}
		printf("ɾ���ɹ�\n");
		Ps->size--;
	}

}
void Searchcontact(const struct Contact* Ps)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ���ϵ�˵�����:>");
	scanf("%s", name);
	//�����Ƿ��д���
	int pos = Findcontact(name, Ps);
	if (-1 == pos)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-15s\t%-4s\t%-15s\n", "����", "����", "��ַ", "�Ա�", "�绰");
		printf("%-20s\t%-4d\t%-15s\t%-4s\t%-15s\t\n", Ps->date[pos].name,
			Ps->date[pos].age,
			Ps->date[pos].addres,
			Ps->date[pos].sex,
			Ps->date[pos].tel);
	}
}
void Modifycontact(struct Contact* Ps)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = Findcontact(name, Ps);
	if (-1 == pos)
	{
		printf("û�м�¼���˵������Ϣ���޷��޸�\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", Ps->date[pos].name);
		printf("����������:>");
		scanf("%d", &(Ps->date[pos].age));
		printf("�������ַ:>");
		scanf("%s", Ps->date[pos].addres);
		printf("�������Ա�:>");
		scanf("%s", Ps->date[pos].sex);
		printf("������绰:>");
		scanf("%s", Ps->date[pos].tel);
		printf("�޸ĳɹ�\n");
	}
}
//���������������
int cmp_stu_age (const void* e1, const void* e2)
{
	return ((struct PeInfo*)e1)->age - ((struct PeInfo*)e2)->age;
}
void Sortcontact(struct Contact* Ps)
{
	qsort(Ps->date, Ps->size, sizeof(Ps->date[0]), cmp_stu_age);
	printf("����������ɹ�\n");
}