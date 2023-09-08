#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("**************************************\n");
	printf("***   1.add                2.del  ****\n");
	printf("***   3.search          4.modify  ****\n");
	printf("***   5.show             6.sort   ****\n");
	printf("***           0.exit              ****\n");
	printf("**************************************\n");
}

int main()
{
	int input = 0;
	struct Contact P;
	Inticontact(&P);
	do
	{
		menu();
		printf("请选择你所需的操作:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&P);
			break;
		case DEL:
			Delcontact(&P);
			break;
		case SEARCH:
			Searchcontact(&P);
			break;
		case MODIFY:
			Modifycontact(&P);
			break;
		case SHOW:
			Showcontact(&P);
			break;
		case SORT:
			//根据年龄进行排序
			Sortcontact(&P);
			break;
		case EXIT:
			printf("通讯录退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}