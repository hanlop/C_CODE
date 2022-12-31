#include <stdio.h>
#include <string.h>

struct mankind
{
    char name[10];//人的姓名 大帅哥
	float height;//这个人的身高
	int age;//这个人的年龄	
};

int main()
{
	struct mankind p1={	"大帅哥",1.85,18};
	printf("他的姓名:%s\n",p1.name);
	printf("他的身高:%f米\n",p1.height);
	printf("他的年龄:%d岁\n",p1.age);
	
	p1.age=19;
	printf("过了生日之后他的年龄:%d岁\n",p1.age);
	
	struct mankind* pb=&p1;
	printf("%s\n",(*pb).name);
	printf("%f\n",pb->height);
	
	strcpy(p1.name,"C++");
	printf("%s\n",p1.name);
	
	return 0;
}
