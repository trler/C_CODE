//#include <stdio.h>
//#include <stdlib.h>
////define �����ʶ������ 
////#define NUM 100
// 
//
////define �����
////�����в����� 
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

#define ADD(x, y) ((x)+(y))  // ȷ�����ź�����ΪӢ�ķ���

int main() 
{
    int a = 10;
    int b = 20;
    int c = ADD(a, b);
    printf("%d\n", c); 
    return 0;
}
