#include<stdio.h>
//��һ���������£�дһ��������x�����yֵ��������λС��
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
