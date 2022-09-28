#include<stdio.h>
int main()
{
	int i,j,k,n=5,x=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
		   printf("*");
		}
	for(k=1;k<2*i;k++)
	{
		if(k<=i)
		{
			printf("%d",x-(i-k));
		}
		else
		{		
			printf("%d",x+(i-k));
		}
	}
	for(j=1;j<=n-i;j++)
	{
		printf("*");
	}
	x=x+2;
	printf("\n");
	}
	return 0;
}