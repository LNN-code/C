#include<stdio.h>
//����һ��������n (1�� n ��6),������һ��n ��n�еľ����ҳ��þ����о���ֵ����Ԫ���Լ��������±�����±ꡣ
int main()
{
	int a[100][100];
	int i,j,x,max;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	max=a[0][0];
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if(a[i][j]>max) max=a[i][j];
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if(a[i][j]==max) printf("%d %d %d",max,i+1,j+1);
		}
	}
	return 0;
 } 
