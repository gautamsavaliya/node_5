#include<stdio.h>
void dosum(int a,int b)
	{
		printf("\n a+b :%d",a+b);
	}
int main()
{
	int a,b;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	dosum(a,b);
}