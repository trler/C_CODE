#include <stdio.h>
#include <stdlib.h>
//���ڸ��Ӷ���,c�������Զ������͵����� ������һ�ֽнṹ�� struct
//�ṹ���ǰ�һЩ��һ���� �����һ��� ����
 
//ѧ��
struct Stu
{
	//��Ա���� 
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
