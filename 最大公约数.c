/*a b c
12  18 6
6   12 0*/



#include<stdio.h>
main()//输入两个整数，求其最大公约数和最小公倍数 
{
	int a,b,c,d;
	printf("请输入两位整数："); 
	scanf("%d%d",&a,&b);
		d=a*b;
	while(c==0)//计算最大公约数 
	{
		c=a%b;
		a=c;
		b=a;
	}
	d/=a;//计算最小公倍数 
	printf("最大公约数=%d 最小公倍数=%d",a,d);
} 
