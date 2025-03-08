#include <stdio.h>
#include <stdlib.h>

//变量分为局部变量和全局变量
//大括号外部的变量是全局变量 内部定义的是局部变量 
//int b =20;
//int main(int argc, char *argv[]) {
//	int a = 10;  
//	
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 20; 
//	printf("%d\n",a);//局部优先 
//	return 0;
//}

//建议不要将两者写成一样的


//写一个代码 计算连个整数的和
int main()
{
	int num1 = 0;
	int num2 = 0;//初始化 
    scanf("%d %d", &num1, &num2);	//输入两个整数 scanf 输入函数
	 
    int sum=num1+num2;//	求和
	printf("%d\n",sum); //	输出 
	return 0;
 } 
// int main ()
// {
// 	printf("%d %d",&num1, &num2);
// 	printf("%d %d",&num1, &num2);
// }
//
// 
