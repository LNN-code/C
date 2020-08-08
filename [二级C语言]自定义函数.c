#include<stdio.h>
#include<math.h>
//输入一个正数x和一个正整数n，求下列算式的值。要求定义两个调用函数：fact(n)计算n的阶乘；mypow(x,n)计算x的n次幂（即xn），两个函数的返回值类型是double。
//  x - x2/2! + x3/3! + ... + (-1)n-1xn/n! 
//×输出保留4位小数。
double fact(int n)
{
	int i;
	double m=1; 
	for(i=1;i<=n;i++)
	{
		m*=i;
	}
	return m;
}
double mypow(float x,int n)
{
	double  z;
	z=pow(x,n);
	return z;
}
int main()
{
	int n,i;
	float x;
	double a,b,y,c,sum=0;
	scanf("%f %d",&x,&n);
	for(i=1;i<=n;i++)
	{
		a=fact(i);
		b=mypow(x,i);
		c=pow(-1.0,i-1);
		y=(c*(b/a));
		sum+=y;
	}
		printf("%.4f\n",sum);
		return 0;
}
