#include<stdio.h>
#include<math.h>
//����x �����㲢������зֶκ��� f(x) ��ֵ�����Ե�����ѧ�⺯����ƽ��������sqrt(),����ֵ����fabs() ���ݺ��� pow()��
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

