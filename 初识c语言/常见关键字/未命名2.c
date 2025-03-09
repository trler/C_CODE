#include <stdio.h>
#include <stdlib.h>
//全局变量  
static int g_2025 =0;//全局变量是有外部链接属性的  static修饰全局变量的时候,全局变量的外部链接属性就变成了内存丽娜属性,其他源文件就不能再次使用这个全局变量了
static int Add(int x,int y)
{
	return x+y; 
 } 
 
 
