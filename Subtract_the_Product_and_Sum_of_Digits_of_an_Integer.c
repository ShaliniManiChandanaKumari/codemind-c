#include<stdio.h>
int main()
{
    int a,b,c=1,d=0;
    scanf("%d",&a);
    while(a>0)
    {
       b=a%10;
       c=c*b;
       d=d+b;
       a=a/10;
    }
    printf("%d",c-d);
}