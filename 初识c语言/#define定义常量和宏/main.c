//#include <stdio.h>
//#include <stdlib.h>
////define 定义标识符常量 
////#define NUM 100
// 
//
////define 定义宏
////宏是有参数的 
//
//#define ADD(x,y) ((x)+(y))
//int main() 
//{
////	printf("%d\n",NUM);
////	int n = NUM ;
////	printf("%d\n",NUM);
////	int arr[NUM]={0}; 
//    int a = 10;
//	int b = 20;
//	int c = ADD(a,b);
//	printf("%d\n",c); 
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

#define ADD(x, y) ((x)+(y))  // 确保逗号和括号为英文符号

int main() 
{
    int a = 10;
    int b = 20;
    int c = ADD(a, b);
    printf("%d\n", c); 
    return 0;
}
