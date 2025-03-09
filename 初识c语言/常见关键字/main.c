#include <stdio.h>
#include <stdlib.h>

//语言本身内置的一些，无法被自己创建 
//auto  

//int main() 
//{
//	int a = 10;//自动创建自动销毁 自动销毁 auto 
//	break for while do while break continue 
//	switch case default if else goto 
//	char short int long float double signed有符号的 unsigned无符号的 sizeof typedef类型重命名 void 无 
//	const 常属性
//	enum 枚举 struct 结构体 union 联合体 
//    extern 声明外部变量register 寄存器  static 静态的 
//	return 函数返回值
 
//变量的命名,必须是字母数字下划线组成不能有特殊字符也不能以数字开头


//typedef 类型重命名
   /*
    typedef unsigned int unit;
    unsigned int num1 = 0;
    typedef unsigned int unit;
    unit num2 = 1;
    printf("%d\n", num2);*/
    
//static 静态 三种用法，修饰局部变量，全局变量，函数  
//    void test()
//	{
//		static int a = 1 ;//前面加一个static a不再重新创建销毁 在修饰局部变量时候,出了作用域补销毁 
//	//本质上,static修饰局部变量时,改变了变量的存储位置 ,由栈区存放局部变量 放到静态区 
//		a++;
//		printf("%d\n",a); 
//	 } 
//	int i = 0;
//	while (i <10)
//	{
//		test();
//		i++;
//	 }  
//	return 0;
//}


////全局变量 
//extern int g_2025;//声明外部符号 
//int main()
//{
//	printf("%d\n",g_2025); 
//	return 0; 
// } 
// 

//static 修饰函数

//extern int Add(int x, int y); 
//int main(){      
//	int a = 0;
//	int b = 20;
//	int z = Add(a,b); 
//	printf("%d\n",z); 
//    return 0; 
//} 


int main()
{
	//寄存器变量 
	register int num =3;//建议 放在寄存中 
	return 0;
 } 

