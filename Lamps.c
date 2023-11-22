#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(y<=x)
    printf("%d",(x*k)+((n-k)*y));
    else
    printf("%d",x*n);
}