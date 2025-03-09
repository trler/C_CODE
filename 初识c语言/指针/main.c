#include <stdio.h>
#include <stdlib.h>
//内存 
//内存会划分为一个个的内存单元 每个内存单元都有一个编号  一个内存单元的大小是1byte
//32位电脑,32根地址线;所有产生的组合有2^32个次方 ,如果真有这么多的次方, 可以管理 4096mb 4gb的内存空间大小
//内存单元的编号就是地址,地址也被称为指针,存放指针地址的变量就是指针变量 
 
//int main()
//{
//	int a =20;
//	&a; 
//	printf("%p\n",&a);
//	int* p = &a;//p就是指针变量 
//	*p;//解引用操作符 , 意思就是 通过p中存放过的地址,来找到p所指向的对象 *p就是p指向的对象
//	printf("%d\n",a); 
//	return 0;
//}
int main ()
{
	//int* p;
	char* p2;
	printf("%d\n",sizeof(char*)); 
	printf("%d\n",sizeof(float*)); 
	printf("%d\n",sizeof(int*)); 
	printf("%d\n",sizeof(float*)); 
	printf("%d\n",sizeof(double*)); 
	return 0; 
 } 
