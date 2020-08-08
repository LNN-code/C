#include<stdio.h>
#include<string.h>
//将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。
int main()
{
	int i;
	char str[100]; 
    gets(str);
	for(i=strlen(str)-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
