#include <stdio.h>
#include <stdlib.h>
//�ڴ� 
//�ڴ�Ữ��Ϊһ�������ڴ浥Ԫ ÿ���ڴ浥Ԫ����һ�����  һ���ڴ浥Ԫ�Ĵ�С��1byte
//32λ����,32����ַ��;���в����������2^32���η� ,���������ô��Ĵη�, ���Թ��� 4096mb 4gb���ڴ�ռ��С
//�ڴ浥Ԫ�ı�ž��ǵ�ַ,��ַҲ����Ϊָ��,���ָ���ַ�ı�������ָ����� 
 
//int main()
//{
//	int a =20;
//	&a; 
//	printf("%p\n",&a);
//	int* p = &a;//p����ָ����� 
//	*p;//�����ò����� , ��˼���� ͨ��p�д�Ź��ĵ�ַ,���ҵ�p��ָ��Ķ��� *p����pָ��Ķ���
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
