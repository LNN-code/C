#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)  break;
			else printf("%d\n",i); 
		}
}
}
