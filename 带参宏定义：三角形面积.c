#include<stdio.h>
#include<math.h>
#define S (a+b+c)/2;
#define area sqrt(s*(s-a)*(s-b)*(s-c))
int main()
{
	 int a,b,c,s;
	 float x;
	 scanf("%d %d %d",&a,&b,&c);
	 s=S;x=area;
	 printf("%.3f",x);
	 
	 
 } 
