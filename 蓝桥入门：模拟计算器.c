#include<stdio.h>
//ʹ��Switch����дһ��ģ��򵥼������ĳ���������������������һ���ַ������ÿո�������������  ����һ����+�������ӡ�ͣ�������ַ���һ����-�������ӡ�������ַ���һ����*��,���ӡ����������ַ��ǡ�/�������ӡ�̣�������ַ���һ��  ��%�������ӡ��������ӡ��������һ�����С� 
int main()
{
	int x,y;
	char z;
	scanf("%d %d %c",&x,&y,&z);
	switch(z)
	{
		case '+' : printf("%d ",x+y);break;
		case '-' : printf("%d ",x-y);break;
		case '*' : printf("%d ",x*y);break;
		case '/' : printf("%d ",x/y);break;
		case '%' : printf("%d ",x%y);break;
	}
	return 0;
}
