#include<stdio.h>
#include<string.h>
//��дһ����������һ���ַ��������Ȳ�����80����Ȼ��ͳ�Ƴ����ַ������а����ж��ٸ����ʡ����磺�ַ�����this  is  a  book�����а�����4�����ʡ�
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
