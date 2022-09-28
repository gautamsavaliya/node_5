#include<stdio.h>
int cnt=1;
int rec(int n)
{
    printf("winding phase:%d\n,n")
    if(n<3)
    {
        ++cnt;
        rec(n+1);
    }
    else
        return o;
        printf("unwinding phase:%d\n",n);
}
int main()
{
    int n=rec(1);
    printf("\n n:%d",n);
    return 0;
}