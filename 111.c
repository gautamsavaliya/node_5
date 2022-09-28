#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
    {
        if(j==1||i==1||i==n||(i>n/2&&j==n)||(i==(n/2+1)&&j>n/2))
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
    }
    return 0;
}