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
		printf("��ѡ��������Ĳ���:>");
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
			//���������������
			Sortcontact(&P);
			break;
		case EXIT:
			printf("ͨѶ¼�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);

	return 0;
}