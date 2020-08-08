#include<stdio.h>
#include<string.h>
//编制程序，输入n个整数（n从键盘输入，n>0），输出它们的偶数和。
//2 
//1 2 
//输出2 
int main()
{
	int a[100],x,i,sum=0;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 for(i=1;i<=x;i+=2)
	 {
	 	sum+=a[i];
	 }
	 printf("%d",sum);
	 return 0;
}
