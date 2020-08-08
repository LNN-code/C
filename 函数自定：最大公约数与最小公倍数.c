#include<stdio.h>
int gcd(int a,int b)
{
	if(a%b==0) return b;
	else gcd(b,a%b);
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b); 
}
main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	c=gcd(a,b);
	d=lcm(a,b);
	printf("%d %d",c,d);
}
