#include<stdio.h>
#include<math.h> 
//����һ��3��4�е����飬�ҳ��������о���ֵ����Ԫ�ء������Ԫ�ؼ��������±�ֵ�����ж������к���С�ģ����ж���Ļ�����к���С�ġ�
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
