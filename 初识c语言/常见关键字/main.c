#include <stdio.h>
#include <stdlib.h>

//���Ա������õ�һЩ���޷����Լ����� 
//auto  

//int main() 
//{
//	int a = 10;//�Զ������Զ����� �Զ����� auto 
//	break for while do while break continue 
//	switch case default if else goto 
//	char short int long float double signed�з��ŵ� unsigned�޷��ŵ� sizeof typedef���������� void �� 
//	const ������
//	enum ö�� struct �ṹ�� union ������ 
//    extern �����ⲿ����register �Ĵ���  static ��̬�� 
//	return ��������ֵ
 
//����������,��������ĸ�����»�����ɲ����������ַ�Ҳ���������ֿ�ͷ


//typedef ����������
   /*
    typedef unsigned int unit;
    unsigned int num1 = 0;
    typedef unsigned int unit;
    unit num2 = 1;
    printf("%d\n", num2);*/
    
//static ��̬ �����÷������ξֲ�������ȫ�ֱ���������  
//    void test()
//	{
//		static int a = 1 ;//ǰ���һ��static a�������´������� �����ξֲ�����ʱ��,�������������� 
//	//������,static���ξֲ�����ʱ,�ı��˱����Ĵ洢λ�� ,��ջ����žֲ����� �ŵ���̬�� 
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


////ȫ�ֱ��� 
//extern int g_2025;//�����ⲿ���� 
//int main()
//{
//	printf("%d\n",g_2025); 
//	return 0; 
// } 
// 

//static ���κ���

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
	//�Ĵ������� 
	register int num =3;//���� ���ڼĴ��� 
	return 0;
 } 

