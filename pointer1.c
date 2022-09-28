#include<stdio.h>
int i,j[5],*p=NULL;
int re()
{
	for(i=0;i<5;i++)
	{
		printf("\n enter number :");
		scanf("%d",&j[i]);
	}
	p=j;
	//return p;
}
int main()
{
	int *p1;
	//p1=re(p);
	for(i=0;i<5;i++)
	{
		printf("\n%d",(*(p1+i))*(*(p1+i)));
	}
}