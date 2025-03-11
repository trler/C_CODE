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
//		    //break 结束循环 
//		    continue;//continue 跳过后面部分代码 直接去判断部分 进行下一次循环判断 
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
//	int ch = getchar();//获取字符对应的数 
//	//EOF;//end of file  
//	printf("%c\n", ch);//以字符的形式打印 
//	putchar(ch);//获取这个数对应的字符 

/*    int ch = 0;
	while((ch= getchar()) != EOF)
	{
		putchar(ch);
	} */

    char password[20] = {0};
    printf("请输入密码:>");
    scanf("%s",password);
    int ch = 0;
	/*while ((ch = getchar())!= '\n')
	{
		;
	 } *///这部分用于清除 空格 \n 直到读取到\n后 可以防止让下方ret直接读取到别的数据 
    
	printf("请确认密码(Y/N):>");
	
	 
	
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

 
