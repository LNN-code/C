#include<stdio.h>
#include<string.h>
//����һ�е籨���֣�����ĸ�������һ��ĸ���硯a����ɡ�b��������z����ɡ��ᡯ�����ַ����䣩�� 
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
