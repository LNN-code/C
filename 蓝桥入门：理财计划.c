#include<stdio.h>
int main()
{
	int k,n,i;
	float p;
	float sum,sum1,sum2=0;
	scanf("%d %d %f",&k,&n,&p);
	sum1=k;
	for(i=1;i<=n;i++)
	{
		sum=sum1*p;sum2+=sum; 
		sum1=sum+sum1+k;
	 } 
	 printf("%.2lf",sum2);
	 return 0;
}
