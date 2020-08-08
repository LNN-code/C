#include<stdio.h>
#include<string.h>
char search(char a[10])
{
	int i,j;
	char b[5];
	for(j=0;j<5;j++)
	{
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='a') b[j]=a[i];
			if(a[i]=='e') b[j]=a[i];
			if(a[i]=='i') b[j]=a[i];
			if(a[i]=='o') b[j]=a[i];
			if(a[i]=='u') b[j]=a[i];
		}
	}
	return b;
}
int main()
{
	int i;
	char a[10],b[5];
	scanf("%s",a);
	b[5]=search(a);
	for(i=0;i<5;i++)
	{
		printf("%s",b);
	}
	
}
