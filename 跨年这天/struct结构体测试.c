#include <stdio.h>
#include <string.h>

struct mankind
{
    char name[10];//�˵����� ��˧��
	float height;//����˵����
	int age;//����˵�����	
};

int main()
{
	struct mankind p1={	"��˧��",1.85,18};
	printf("��������:%s\n",p1.name);
	printf("�������:%f��\n",p1.height);
	printf("��������:%d��\n",p1.age);
	
	p1.age=19;
	printf("��������֮����������:%d��\n",p1.age);
	
	struct mankind* pb=&p1;
	printf("%s\n",(*pb).name);
	printf("%f\n",pb->height);
	
	strcpy(p1.name,"C++");
	printf("%s\n",p1.name);
	
	return 0;
}
