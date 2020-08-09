#include<stdio.h>
main()
{ 
float a,b,sum=0.0;
 while(scanf("%f %f",&a,&b)!=0)
 { 
	sum+=a*b;
	printf("%f %f\n",a*b,sum);
	} 
	
}
