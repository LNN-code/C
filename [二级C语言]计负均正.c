#include<stdio.h>
//�Ӽ�����������20����������ͳ�����еĸ���������������������ƽ��ֵ��������λС��
int main()
{
	int a[20],i,b=0,sum=0;
	float sum1;
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<20;i++)
	{
		if(a[i]<0) 
		{
			b++;
		}
		else sum+=a[i];
	}
	sum1=sum/(float)(20-b);
	printf("%d\n",b);
	printf("%.2lf",sum1);
	return 0;
 }
