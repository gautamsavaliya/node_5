#include<stdio.h>
int dosum()
{
	int a,b;	
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	return a+b;
}
int main()
{
	int sum;
	sum=dosum();
	printf("\n a+b :%d",sum);
}
