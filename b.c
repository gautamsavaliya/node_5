#include<stdio.h>
int sq(int n)
	{
	return n*n;
	}
int cu(int n)
	{
	return n*n*n;
	}
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	printf("\n squre is:%d",sq(n));
	printf("\n cube is:%d",cu(n));
}