#include<stdio.h>
#include<math.h>
//����һ������x��һ��������n����������ʽ��ֵ��Ҫ�����������ú�����fact(n)����n�Ľ׳ˣ�mypow(x,n)����x��n���ݣ���xn�������������ķ���ֵ������double��
//  x - x2/2! + x3/3! + ... + (-1)n-1xn/n! 
//���������4λС����
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
