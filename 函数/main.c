#include <stdio.h>
#include <stdlib.h>
//���������������ĺ�

int Add(int x, int y)// int �����ķ������� Add������ ������ ���庯�� 
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
