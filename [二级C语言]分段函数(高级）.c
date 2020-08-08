#include<stdio.h>
#include<math.h>
//输入x ，计算并输出下列分段函数 f(x) 的值。可以调用数学库函数：平方根函数sqrt(),绝对值函数fabs() 和幂函数 pow()。
int main()
{
	float x,y;
	scanf("%f",&x);
	if(x<0) y=fabs(x);
	else if(x>=0&&x<2) y=sqrt(x+1.0);
	else if(x>=2&&x<4) y=pow(x+2.0,5.0);
	else y=2.0*x+5.0;
	printf("%.2f",y);
}

