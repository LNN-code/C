#include<stdio.h>
main()
{
	int i,j,sum;
	for(i=1;i<100;i++)
	{
		sum=0;
		for(j=i;j<100;j++)
		{
			sum+=j;
			if(sum==236) printf("%d",i);
		}
	}
}
