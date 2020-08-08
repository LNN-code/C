#include<stdio.h>
#include<string.h>
//编写一个程序，输入一个字符串（长度不超过80），然后统计出该字符串当中包含有多少个单词。例如：字符串“this  is  a  book”当中包含有4个单词。
int main()
{
	int i,s,sum=0;
	char a[100];
	gets(a);
	s=strlen(a);
	for(i=0;i<s;i++)
	{
		if(a[i]==' ') sum++;
	}
	printf("%d",sum+1);
	return 0;
}
