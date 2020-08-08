#include<stdio.h>
//使用Switch语句编写一个模拟简单计算器的程序。依次输入两个整数和一个字符，并用空格隔开。如果该字  符是一个“+”，则打印和；如果该字符是一个“-”，则打印差；如果该字符是一个“*”,则打印积；如果该字符是“/”，则打印商；如果该字符是一个  “%”，则打印余数。打印结果后输出一个空行。 
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
