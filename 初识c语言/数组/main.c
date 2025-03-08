#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 2;
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};//会有数组下标从 0开始
	int i =0;
	while (i<10)
	{
		printf("%d",arr[i])
;		i= i +1; 
	}
	printf("%d\n",arr[8]); 
	
	
	
	 
	
	return 0;
}
