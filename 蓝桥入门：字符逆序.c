#include<stdio.h>
#include<string.h>
//��һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ���
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
