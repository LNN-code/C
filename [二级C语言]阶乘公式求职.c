#include<stdio.h>
//编写程序，输入一个正整数n，求下列算式的值。要求定义和调用函数fact(k)计算k的阶乘，函数返回值的类型是double。
//1+1/2+ .... +1/n!
//输出保留5位小数。
double fact(int k)
{
	int i;
	double m=1;
	for(i=1;i<=k;i++)
	{
		m*=i;
	}
	return m;
}
int main()
{
	int n,i;
	double sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=1/fact(i);
	}
	printf("sum=%.5lf\n",sum);
	return 0;
}
