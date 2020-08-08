#include<stdio.h>
//编写程序，输入一批学生的成绩，遇0或负数则输入结束，要求统计并输出优秀（大于85）、通过（60～84）和不及格（小于60）的学生人数。
int main()
{
	int a[100],i;
	int j=0,x=0,y=0,z=0;
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		j++;
		if(a[i]<=0) break;
	}
	for(i=0;i<j-1;i++)
	{
		if(a[i]>=85) x++;
		if(a[i]>=60&&a[i]<=84) y++;
		if(a[i]<60) z++;
	}
	printf(">=85:%d\n60-84:%d\n<60:%d",x,y,z);
	return 0;
 } 
