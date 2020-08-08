#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[15];
	scanf("%s",a);
	for(i=strlen(a);i>=0;i--)
	{
		printf("%c",a[i]);
	}
	
 } 
