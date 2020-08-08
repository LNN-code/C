#include<stdio.h>
#include<string.h>
//独立实现标准字符串库的strcmp函数，即字符串比较函数，从键盘输入两个字符串，按字典序比较大小，前者大于后者输出1，前者小于后者输出-1，两者相等输出0。 
int main()
{
	int k;
	char a[100],b[100];
		scanf("%s",a);
		scanf("%s",b);
			k=strcmp(a,b);
	if(k>0) printf("1");
	else if(k==0) printf("0");
	else printf("-1") ;
	return 0; 
}


/*
{
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	printf("%d\n",strcmp(a,b));
	return 0;
}*/


