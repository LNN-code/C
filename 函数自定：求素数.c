#include<stdio.h>
int shusu(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(i%a==0) return 0;
		else return 1;
	}
	
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=shusu(a);
	if(b==1) printf("prime");
	else printf("not prime");	
	return 0;
}
