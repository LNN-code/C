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
printf("%d %d %d　%d\n",a,b,c,d);
return 0;	

}
/*
函数：

    （1）int isalpha(int ch);

            判断ch是否为字母，如果是返回非0，反之返回0；

    

    （2）int isdigit(int ch);

            判断ch是否为数字，如果是返回非0，反之返回0；



    （3）int islower(int ch);

            判断ch是否为小写字母，如果是返回非0，反之返回0；

    

    （4）int isupper(int ch);

            判断ch是否为大写字母，如果是返回非0，反之返回0；
            
            */
