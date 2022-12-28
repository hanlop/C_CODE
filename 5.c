#include <stdio.h>
void br(void);
void ic(void);
int main()
{
	printf("Brazil, Russia,");
	ic();
	br();
	return 0;
}
void br(void)
{
	printf("Brazil, Russia");
}
void ic(void)
{
	printf(" India, China\n");
	printf("India, China\n");
}

