#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
extern int Add (int,int);// 
int main(int argc, char *argv[]) {
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a,b);
	printf("c = %d\n", c);
	return 0;
}
