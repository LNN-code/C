#include<stdio.h>
//���һ������һ�����¶�ת���������¶ȵ�ȡֵ������[-1000 C��1500C ]���¶ȼ��50C��Ҫ����͵��ú��� ctof(c),�������¶�Cת���ɻ����¶�F�����㹫ʽ��F = 32 + C* 9/5��
float ctof(float c)
{
	float f;
	f=32.0+c*(9.0/5.0);
	return f;
 } 
int main()
{
	float c,f;
	for(c=-100;c<=150;c+=5)
	{
		f=ctof(c);
		printf("c=%0.0f->f=%0.0f\n",c,f);
	}
	return 0;
}
