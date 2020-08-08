#include<stdio.h>
//输入一个华氏温度，要求输出摄氏温度，保留两位小数 
int main()
{
	float c,f;
	scanf("%f",&f);
	c=(f-32.0)*(5.0/9.0);
	printf("%.2f",c);
	return 0;
 } 
