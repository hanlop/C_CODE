#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	//int i = 0;
	//scanf("%d", &i);

	//switch (i)
	//{
	//    case 1:
	//	case 2:
	//	case 3:
	//	case 4:
	//	case 5:
	//		printf("今天是工作日\n");
	//		break;
	//	case 6:
	//	case 7:
	//		printf("今天是休息日\n");
	//		break;
	//	default:
	//		printf("输出错误\n");
	//}
	int ah = 0;
	char password[20] = { 0 };
	scanf("%s", password);
	printf("%s\n", password);
	ah = getchar();
	putchar(ah);

	return 0;
}