#include <stdio.h>
#include <stdlib.h>
//求两个任意整数的和

int Add(int x, int y)// int 函数的返回类型 Add函数名 函数体 定义函数 
{
	int z=0;
	z = x +y;
	return z;
	
} 
int main(int argc, char *argv[]) 
{
	int n1 = 0;	 
	int n2 = 0;	
	scanf("%d %d", &n1, &n2);
	int sum =Add(n1,n2);
	printf("%d\n", sum);
	return 0; 
}
