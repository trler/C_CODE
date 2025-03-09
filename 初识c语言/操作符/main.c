#include <stdio.h>
#include <stdlib.h>
//c语言提供了十分丰富的操作符

//算数操作符 +-*/%
//int main()
//{
//	int a =7/2;
//	int b =7%2;
//	printf("%d\n",a);
//	printf("%d\n",b);//取模 取余数 
////	除号两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法，
//    float c =7/2.0;
//	printf("%.1f\n",c); 
////	取模操作符的两端只能是整数 
//	return 0;
//}
// 


//移位操作符 涉及到二进制 后面再谈


//位操作符

//赋值操作符 = += -= *= /= &= ^= |= >>= <<= 
//int main()
//{
//	int a = 0;//初始化
//	a = 20;// 赋值
//	  a = a+3;//a+20
//	  a += 3;//同上
//	a -= 3；
//	//...同理 
//	return 0;
//}

//单目操作符 指的是只有一个操作数的操作符 
//a + b;
//  +  //双目操作符 加号
// ！逻辑反操作， - 取负  + 取正   &取地址  sizeof 操作数的类型长度 以字节为单位  
// 非0表示真 
//int main ()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
// } 
// 将flag的真假对换



//int main ()
//{
///*	int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}*/
//	/*int a = -10;
//	int b = -a;
//	printf("%d\n",b);*/
//
////	sizeof 操作数的类型长度 以字节为单位 
//	/*int a = 10;
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof a);*/
//	
///*	int arr[10]= {0};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr[0]));
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));*/
//	
//// ++ --
////    int a = 10;
////    int b = a++;//先使用，后++
////	// int b= a; a=a+1; 
////	printf("%d\n",a);
////	printf("%d\n",b);
//	
////	int a = 10;
////    int b = ++a;//先+，后使用 
////	// int b= a; a=a+1; 
////    printf("%d\n",a);
////	printf("%d\n",b);
//
////    int a =12;
////    int b = --a;
////    printf("%d\n",a);
////	printf("%d\n",b);
//    
//	int a =(int)3.14;
//	printf("%d\n",a);
//	return 0;
//	
// } 
// 

//关系操作符
//逻辑操作符  &&逻辑或 ||逻辑与
//
//int main()
//{
//	int a =10;
//	int b =20;
//	if (a && b)
//
//		printf("hehe\n");
//
//	else 
//	    printf("fuck\n");
//	return 0;
// } 
// 

//条件操作符 exp1 ？exp2 ：exp3
//表达1为真 2算3 不算
//表达1为假 2 不算 3 算

//int main()
//{
//	int a =20;
//	int b =10;
//	int r = a>100? a :b;
//	printf("%d\n",r);
//	return 0;
// } 

//逗号表达式 逗号隔开的一串表达式 特点是从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a= 10;
//	int b= 22;
//	int c= 0;
//	int d =(c=a-2,a=b+c,c-3);
//	printf("%d\n",d);
//	
//	return 0;
//	
// } 

//下标引用操作符

int main()
{
	int arr[10]={1,2,3,4,5,5,6,7,8,9,10 };
	arr[3]=20;//[]就是下标引用为3的 数，可以将其赋值为20  可以用变量 
	printf("%d\n",arr[3]); 
	return 0;
 } 
 
 






