#include<stdio.h>
//求1+2!+3!+4!+…+30!科学计数法，保留两位小数。 
double jc(int n)
{
	int i;
	double m=1; 
	for(i=1;i<=n;i++)
	{
		m*=i;
	}
	return m;
 } 
 int main()
 {
 	int i;
	double j,sum=0.0; 
 	for(i=1;i<=30;i++)
 	{
 		j=jc(i);
 		sum+=j;
	 }
	 printf("%.2e\n",sum);
	 return 0;
 }
