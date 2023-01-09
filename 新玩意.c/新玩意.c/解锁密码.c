#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char password[6] = "0";
	printf("ÇëÊäÈëÃÜÂë>:");
	
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("ÃÜÂëÕýÈ·\n");
			break;
		}
	}
	if (i = 3)
	{
		printf("Èý´ÎÃÜÂë´íÎó£¬Í¨¹ýÊ§°Ü\n");
	}

	return 0;
}