#include<stdio.h>
//��д��������һ��������n����������ʽ��ֵ��Ҫ����͵��ú���fact(k)����k�Ľ׳ˣ���������ֵ��������double��
//1+1/2+ .... +1/n!
//�������5λС����
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
