#include<stdio.h>
#include<string.h>
//���Ƴ�������n��������n�Ӽ������룬n>0����������ǵ�ż���͡�
//2 
//1 2 
//���2 
int main()
{
	int a[100],x,i,sum=0;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 for(i=1;i<=x;i+=2)
	 {
	 	sum+=a[i];
	 }
	 printf("%d",sum);
	 return 0;
}
