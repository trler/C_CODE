#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//������������
//�ֲ��������������Ǳ������ڵľֲ���Χ��
//ȫ�ֱ�����һ�����������������ʹ�� 

//extern int a;
//int main(int argc, char *argv[]) 
//{	
//	{
//	     printf("a=%d\n",a);
//	 } 
//		 printf("a=%d\n",a);
//	return 0;
//}
//�������������� 


//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n",a);
//	}//a ������������� 
//	
//  }  
// 

//����
//1.���泣��
//int main()
//{
//	30
//	
//    return 0; 
//}

//2, const int a = 10; const ���εĳ����� 
//const ����a �������Ǳ��� ���ǲ��ܱ��޸� �г���������
//��ȷʵ��һ������

//int main()
//{
//	const int n = 10;
//	int arr[n] = {0};//�޷����� ˵���Ǳ��� 
//	return 0;
// } 
// 

//3.define ����ı�ʶ������
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

//4��ö�ٳ���
enum Color
{
	RED,
	GREEN,
	BLUE
//	����������ö�ٳ��� 
 }; 
int main()
{
    //	��ԭɫ
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

 
