#include<stdio.h>
#include<string.h>
//输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。 
int main()
{
	char a[100];
	int i; 
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		if((a[i]>='a'&&a[i]<'z')||(a[i]>='A'&&a[i]<'Z')) a[i]=a[i]+1; 
		if(a[i]=='z') a[i]='a';
		if(a[i]=='Z') a[i]='A';
	}
		for(i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]);
	}
	
}
