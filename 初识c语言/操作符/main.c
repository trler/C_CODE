#include <stdio.h>
#include <stdlib.h>
//c�����ṩ��ʮ�ַḻ�Ĳ�����

//���������� +-*/%
//int main()
//{
//	int a =7/2;
//	int b =7%2;
//	printf("%d\n",a);
//	printf("%d\n",b);//ȡģ ȡ���� 
////	�������˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и������ĳ�����
//    float c =7/2.0;
//	printf("%.1f\n",c); 
////	ȡģ������������ֻ�������� 
//	return 0;
//}
// 


//��λ������ �漰�������� ������̸


//λ������

//��ֵ������ = += -= *= /= &= ^= |= >>= <<= 
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;// ��ֵ
//	  a = a+3;//a+20
//	  a += 3;//ͬ��
//	a -= 3��
//	//...ͬ�� 
//	return 0;
//}

//��Ŀ������ ָ����ֻ��һ���������Ĳ����� 
//a + b;
//  +  //˫Ŀ������ �Ӻ�
// ���߼��������� - ȡ��  + ȡ��   &ȡ��ַ  sizeof �����������ͳ��� ���ֽ�Ϊ��λ  
// ��0��ʾ�� 
//int main ()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
// } 
// ��flag����ٶԻ�



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
////	sizeof �����������ͳ��� ���ֽ�Ϊ��λ 
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
////    int b = a++;//��ʹ�ã���++
////	// int b= a; a=a+1; 
////	printf("%d\n",a);
////	printf("%d\n",b);
//	
////	int a = 10;
////    int b = ++a;//��+����ʹ�� 
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

//��ϵ������
//�߼�������  &&�߼��� ||�߼���
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

//���������� exp1 ��exp2 ��exp3
//���1Ϊ�� 2��3 ����
//���1Ϊ�� 2 ���� 3 ��

//int main()
//{
//	int a =20;
//	int b =10;
//	int r = a>100? a :b;
//	printf("%d\n",r);
//	return 0;
// } 

//���ű��ʽ ���Ÿ�����һ�����ʽ �ص��Ǵ����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
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

//�±����ò�����

int main()
{
	int arr[10]={1,2,3,4,5,5,6,7,8,9,10 };
	arr[3]=20;//[]�����±�����Ϊ3�� �������Խ��丳ֵΪ20  �����ñ��� 
	printf("%d\n",arr[3]); 
	return 0;
 } 
 
 






