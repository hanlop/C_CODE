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
//增加联系人
void Addcontact(struct Contact* Ps)
{
	if (Ps->size == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", Ps->date[Ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(Ps->date[Ps->size].age));
		printf("请输入地址:>");
		scanf("%s", Ps->date[Ps->size].addres);
		printf("请输入性别:>");
		scanf("%s", Ps->date[Ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", Ps->date[Ps->size].tel);
		printf("添加成功\n");
		Ps->size++;
	}
}
//显示通讯录
void Showcontact(const struct Contact* Ps)
{
	if (Ps->size == 0)
	{
		printf("通讯录为空，无法显示\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-15s\t%-4s\t%-15s\n", "姓名", "年龄", "地址", "性别", "电话");
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
	printf("请输入要删除的联系人的名字:>");
	scanf("%s", name);
	//查找是否有此人
	int pos = Findcontact(name, Ps);

	if (-1 == pos)
	{
		printf("没有这个联系人，无法删除\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < Ps->size-1; j++)
		{
			Ps->date[j] = Ps->date[j + 1];
		}
		printf("删除成功\n");
		Ps->size--;
	}

}
void Searchcontact(const struct Contact* Ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的联系人的名字:>");
	scanf("%s", name);
	//查找是否有此人
	int pos = Findcontact(name, Ps);
	if (-1 == pos)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-15s\t%-4s\t%-15s\n", "姓名", "年龄", "地址", "性别", "电话");
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
	printf("请输入要查找的联系人的名字:>");
	scanf("%s", name);
	int pos = Findcontact(name, Ps);
	if (-1 == pos)
	{
		printf("没有记录此人的相关信息，无法修改\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", Ps->date[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(Ps->date[pos].age));
		printf("请输入地址:>");
		scanf("%s", Ps->date[pos].addres);
		printf("请输入性别:>");
		scanf("%s", Ps->date[pos].sex);
		printf("请输入电话:>");
		scanf("%s", Ps->date[pos].tel);
		printf("修改成功\n");
	}
}
//根据年龄进行排序
int cmp_stu_age (const void* e1, const void* e2)
{
	return ((struct PeInfo*)e1)->age - ((struct PeInfo*)e2)->age;
}
void Sortcontact(struct Contact* Ps)
{
	qsort(Ps->date, Ps->size, sizeof(Ps->date[0]), cmp_stu_age);
	printf("按年龄排序成功\n");
}