#include<stdio.h>
int oddoreven()
{
	int num;
	printf("enter num:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("num is even");
	}
	else
	{
		printf("num is odd");
	}
}
int main()
{
	oddoreven();
}