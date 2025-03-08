#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//变量的作用域
//局部变量的作用域是变量所在的局部范围，
//全局变量在一个工程里面可以任意使用 

//extern int a;
//int main(int argc, char *argv[]) 
//{	
//	{
//	     printf("a=%d\n",a);
//	 } 
//		 printf("a=%d\n",a);
//	return 0;
//}
//变量的生命周期 


//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n",a);
//	}//a 出了作用域结束 
//	
//  }  
// 

//常量
//1.字面常量
//int main()
//{
//	30
//	
//    return 0; 
//}

//2, const int a = 10; const 修饰的常变量 
//const 修饰a 本质上是变量 但是不能被修改 有常量的属性
//但确实是一个变量

//int main()
//{
//	const int n = 10;
//	int arr[n] = {0};//无法填入 说明是变量 
//	return 0;
// } 
// 

//3.define 定义的标识符常量
//#define MAX 100
//#define str "abcdef"
//int main()
//{
//	printf("%d\n",MAX);
//	int a = MAX;
//	printf("%d\n",a);
//	printf("%s\n",str);
//	return 0;
// } 

//4，枚举常量
enum Color
{
	RED,
	GREEN,
	BLUE
//	这三个就是枚举常量 
 }; 
int main()
{
    //	三原色
    //	Red Green Blue 
	int num = 1;
	enum Color c = RED; 
	return 0;
 } 
enum Sex
{
	MALE,
	FEMALE,
	SECRET
	RED = 10//ERR
};

 
