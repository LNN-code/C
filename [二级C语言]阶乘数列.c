#include<stdio.h>
//��1+2!+3!+4!+��+30!��ѧ��������������λС���� 
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
