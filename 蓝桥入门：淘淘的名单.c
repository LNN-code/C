#include<stdio.h>
#include<string.h>
/*�����õ���һ���������������������ֽ��д�������һЩ��������֣�����������æ��
  ���Թ�ע�������֣�
  �����������ǡ�WYS������ϣ����ĳ��������KXZSMR����
  �����������ǡ�CQ������ϣ����ĳ��������CHAIQIANG����
  �����������ǡ�LC������ϣ����ĳ��������DRAGONNET����
  �����������ǡ�SYT����SSD����LSS����LYF������ϣ����ĳ��������STUDYFATHER����
  �����������������������ֶ�����ͬ����ϣ����ĳ��������DENOMINATOR����
  ���ݹ�ģ��Լ��
  ����  100%  ���ݣ�N  < =  10000���������ɴ�д��ĸ��ɣ����Ȳ�����5��
*/ 

int main()
{
	int x,i;
	char a[10000][5];
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<x;i++)
	{
		if(strcmp(a[i],"WYS")==0) printf("KXZSMR\n");
		else if(strcmp(a[i],"CQ")==0) printf("CHAIQIANG\n");
		else if(strcmp(a[i],"LC")==0) printf("DRAGONNET\n");
		else if(strcmp(a[i],"SYT")==0) printf("STUDYFATHER\n");
		else if(strcmp(a[i],"SSD")==0) printf("STUDYFATHER\n");
		else if(strcmp(a[i],"LSS")==0) printf("STUDYFATHER\n");
		else if(strcmp(a[i],"LYF")==0) printf("STUDYFATHER\n");
		else printf("DENOMINATOR\n");
	}
	return 0;
}
