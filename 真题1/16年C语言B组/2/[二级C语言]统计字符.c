#include<stdio.h>
#include<string.h>
//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
int main()
{
	char str[100];
	int a,b,c,d,i;
	a=0;b=0;c=0;d=0;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z') a++;
		else if(str[i]>='0'&&str[i]<='9') b++; 
		else if(str[i]==' ') c++;
		else d++;
	}
	printf("%d\n",a);
	printf("%d\n",c);
	printf("%d\n",b);
	printf("%d\n",d);
	return 0;
}
