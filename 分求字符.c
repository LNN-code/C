#include<stdc++.h> 
int main(void)
{
	int i=0,a=0,b=0,c=0,d=0;
	char str[100];
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(isalpha(str[i])) a++;
		else if(isdigit(str[i])) b++;
		else if(str[i]==' ') c++;
		else d++;
	}
printf("%d %d %d��%d\n",a,b,c,d);
return 0;	

}
/*
������

    ��1��int isalpha(int ch);

            �ж�ch�Ƿ�Ϊ��ĸ������Ƿ��ط�0����֮����0��

    

    ��2��int isdigit(int ch);

            �ж�ch�Ƿ�Ϊ���֣�����Ƿ��ط�0����֮����0��



    ��3��int islower(int ch);

            �ж�ch�Ƿ�ΪСд��ĸ������Ƿ��ط�0����֮����0��

    

    ��4��int isupper(int ch);

            �ж�ch�Ƿ�Ϊ��д��ĸ������Ƿ��ط�0����֮����0��
            
            */
