#include<stdio.h>
#include<math.h> 
//输入一个3行4列的数组，找出该数组中绝对值最大的元素、输出该元素及其两个下标值。如有多个输出行号最小的，还有多个的话输出列号最小的。
int main()
{
	int a[3][4],b[3][4],i,j,max,x,y;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=abs(a[i][j]);
		}
	 } 
	 max=b[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(b[i][j]>max) max=b[i][j],x=i,y=j;
		}
	 } 
	printf("%d %d %d",b[x][y],x+1,y+1);
	return 0;
}
