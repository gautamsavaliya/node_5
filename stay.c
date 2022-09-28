#include<stdio.h>
int dosum(int x,int y)
	{
		return x+y;
	}
int main()
{
	int a,b;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	printf("\n a+b :%d",dosum(a,b));
}











