#include <stdio.h>
#include <stdlib.h>
//对于复杂对象,c语言有自定义类型的能力 其中有一种叫结构体 struct
//结构体是把一些单一类型 组合在一起的 做法
 
//学生
struct Stu
{
	//成员变量 
	char name[20];
	int age;
	char sex[10];
	char tele[12];
}; 

void printf(struct Stu* ps)
{
	
 } 
int main()
{
//	char* pc;
//	int* p2;
//	 int *p,p2,p3 
    struct Stu s = {"zhangsan",20,"nan","123123123"
	};
	 
	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);

	return 0;
}
