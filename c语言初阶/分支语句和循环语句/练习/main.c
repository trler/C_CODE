#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//д����:
//���뵽�취+д���밴���﷨��ʽȥд
//���˼ά:������ü�������Ե�˼άȥ������� 
//����n�Ľ׳� 
/*int main() 
{
	int n = 0;
	int z = 1; 
	scanf("%d",&n);
	for(int i = n ; i > 0 ; i--)
		z=i*z;
	printf("%d\n",z);
	return 0;
}*/

//����1!+2!+...+10!
/*int main() 
{
	int n = 0;
	int sum = 0 ;
	scanf("%d",&n);
	for (int e = n; e > 0 ; e--)
	{
		int z = 1; 
		for(int i = e ; i > 0 ; i--)
		    z*=i;
	    sum += z;
 	}
	printf("%d\n",sum);
	return 0;
}
*/

//3.��һ������������ ���Ҿ����ĳ������ n ���ֲ��� �۰����

/*
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k = 8;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz -1;
	
	while( left <= right )
	{
		int mid = (left+right)/2;// ����������д Ϊ left+(right-left)/2 �򲻻���� 
		if (arr[mid] < k)
		{
			left = mid + 1 ;
		}
		else if (arr[mid]> k)
		{ 
		   	right = mid -1;
		}
		else 
		{
			printf("�ҵ���,�±���%d\n ", mid);
			break; 
		}	
	}
	if (left>right)
	{
		printf("�Ҳ���");
	} 
	
	 
	
	return 0;
}
*/


//��д����,ʵ���� ����ַ��������ƶ�,���м���
//welcome to bit!!! 
//###################
//w#################!
//we###############!!
//...
//welcome to bit!!!
 
/*int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr1)-1;
	do
	{
	
		
		arr2[left] = arr1[left]; 
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000); 
		system("cls");
		right--;
		left++;
	}
	while(left <= right);

	
	
	return 0;
	 
 } */
 
 
 //5.ģ���û���¼�龰������ֻ�ܵ�¼���Σ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������Ƴ�����
 
/*int main()
 {
 	int i = 0;
 	char password[20]={ 0 };
 	for ( i= 0; i <3;i++)
 	{
 		printf("����������:>");
 		scanf("%s",password);
 		if (strcmp(password , "abcdef")==0)//�Ƚ������ַ����Ƿ���ͬ������== Ҫ�ÿ⺯��strcmp 
 		{
 			printf("��¼�ɹ�\n");
 			break; 
		 }	 
	 }
	 if(i==3)
	 {
	 	printf("��¼ʧ��,�ܾ���¼����ϵ��վ����Ա"); 
	 } 
 	return 0;
  } */
  
//6,��������Ϸ ʵ��
//���Բ���һ�������,��ΧΪ1~100  ������,����µ����ִ�,��������,��С�� ,������С�� ֪���¶��� 

void menu()
{
	printf("*****************************\n"); 
	printf("********* 1.play ************\n"); 
	printf("********* 0.exit ************\n"); 
	printf("*****************************\n"); 
 } 
int main()
{
	int input=0; 
	do
	{
		
		menu(); 
		printf("��ѡ��:>`");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
				printf("������\n"); 
				break; 
			case 0:
				printf("������\n"); 
				break; 
			default:
				printf("ѡ�����,����ѡ��!\n"); 
		 } 
	 } while (input);
	
	return 0; 
 } 


  
 
