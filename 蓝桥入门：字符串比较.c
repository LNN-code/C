#include<stdio.h>
#include<string.h>
//����ʵ�ֱ�׼�ַ������strcmp���������ַ����ȽϺ������Ӽ������������ַ��������ֵ���Ƚϴ�С��ǰ�ߴ��ں������1��ǰ��С�ں������-1������������0�� 
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


