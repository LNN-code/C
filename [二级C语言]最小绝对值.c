#include<stdio.h>
#include<math.h>
//输入10个数，找出其中绝对值最小的数，将它和最后一个数交换，然后输出这10个数。
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
