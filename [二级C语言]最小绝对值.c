#include<stdio.h>
#include<math.h>
//����10�������ҳ����о���ֵ��С���������������һ����������Ȼ�������10������
int main()
{
	int a[10],i,min,box,temp;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=fabs(a[0]);
	for(i=0;i<10;i++)
	{
		if(min>fabs(a[i]))
		{
			min=fabs(a[i]);
			box=a[9];
			a[9]=a[i];
			a[i]=box;
		 } 
	}	
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 
