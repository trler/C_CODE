#include <stdio.h>
#include <stdlib.h>


//int main() 
//{
//	while(1)
//	{
//		printf("hehe\n");
//	} 
//	return 0;
//} 

//int main()
//{
//	int i = 0;
//	while(i <= 10)
//	{
//		if(5 == i)
//		    //break ����ѭ�� 
//		    continue;//continue �������沿�ִ��� ֱ��ȥ�жϲ��� ������һ��ѭ���ж� 
//		    
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
// } 

int main()
{
//	int ch = 0;
//	while ( getchar());
//	int ch = getchar();//��ȡ�ַ���Ӧ���� 
//	//EOF;//end of file  
//	printf("%c\n", ch);//���ַ�����ʽ��ӡ 
//	putchar(ch);//��ȡ�������Ӧ���ַ� 

/*    int ch = 0;
	while((ch= getchar()) != EOF)
	{
		putchar(ch);
	} */

    char password[20] = {0};
    printf("����������:>");
    scanf("%s",password);
    int ch = 0;
	/*while ((ch = getchar())!= '\n')
	{
		;
	 } *///�ⲿ��������� �ո� \n ֱ����ȡ��\n�� ���Է�ֹ���·�retֱ�Ӷ�ȡ��������� 
    
	printf("��ȷ������(Y/N):>");
	
	 
	
	int ret = getchar(); 
    if('Y' == ret)
	{
		printf("Yes\n");
	} 
	 else
	{
		printf("No\n");
	}
	
	 
	return 0; 
 } 

 
