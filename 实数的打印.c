#include<stdio.h>
int main()
{
	float x;
	int i,j;
	scanf("%f",&x);
	for(i=1;i<4;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%6.2f",x);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
