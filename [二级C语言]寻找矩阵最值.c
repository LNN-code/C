#include<stdio.h>
//输入一个正整数n (1≤ n ≤6),再输入一个n 行n列的矩阵，找出该矩阵中绝对值最大的元素以及它的行下标和列下标。
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
