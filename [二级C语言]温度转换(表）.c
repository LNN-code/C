#include<stdio.h>
//输出一张摄氏一华氏温度转换表，摄氏温度的取值区间是[-1000 C，1500C ]，温度间隔50C。要求定义和调用函数 ctof(c),将摄氏温度C转换成华氏温度F，计算公式：F = 32 + C* 9/5。
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
