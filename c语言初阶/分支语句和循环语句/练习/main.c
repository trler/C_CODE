#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//写代码:
//先想到办法+写代码按照语法形式去写
//编程思维:如何利用计算机语言的思维去解决问题 
//计算n的阶乘 
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

//计算1!+2!+...+10!
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

//3.在一个有序数组中 查找具体的某个数字 n 二分查找 折半查找

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
		int mid = (left+right)/2;// 若会溢出则改写 为 left+(right-left)/2 则不会溢出 
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
			printf("找到了,下标是%d\n ", mid);
			break; 
		}	
	}
	if (left>right)
	{
		printf("找不到");
	} 
	
	 
	
	return 0;
}
*/


//编写代码,实现让 多个字符从两端移动,向中间汇聚
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
 
 
 //5.模拟用户登录情景，并且只能登录三次，（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则推出程序、
 
/*int main()
 {
 	int i = 0;
 	char password[20]={ 0 };
 	for ( i= 0; i <3;i++)
 	{
 		printf("请输入密码:>");
 		scanf("%s",password);
 		if (strcmp(password , "abcdef")==0)//比较两个字符串是否相同不能用== 要用库函数strcmp 
 		{
 			printf("登录成功\n");
 			break; 
		 }	 
	 }
	 if(i==3)
	 {
	 	printf("登录失败,拒绝登录请联系网站管理员"); 
	 } 
 	return 0;
  } */
  
//6,猜数字游戏 实现
//电脑产生一个随机数,范围为1~100  猜数字,如果猜的数字大,则反馈大了,若小了 ,则反馈猜小了 知道猜对了 

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
		printf("请选择:>`");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
				printf("猜数字\n"); 
				break; 
			case 0:
				printf("猜数字\n"); 
				break; 
			default:
				printf("选择错误,重新选择!\n"); 
		 } 
	 } while (input);
	
	return 0; 
 } 


  
 
