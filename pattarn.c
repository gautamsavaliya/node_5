#include<stdio.h>
int main()
{
	int i=1,j,k,sp=10;
	while(i<=5)
	{
		k=1;
		while(k<=sp)
		{
			printf(" ");
			k++;
		}
		j=1;
		while(j<=1)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		sp--;
	}
}