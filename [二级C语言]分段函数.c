#include<stdio.h>
//有一个函数如下，写一程序，输入x，输出y值。保留两位小数
int main()
{
	int x;
	float y;
	scanf("%d",&x);
	if(x<1) y=x;
	if(x>=1||x<10) y=2*x-1;
	if(x>=10) y=3*x-11;
	printf("%.2f",y);
	return 0;
}
