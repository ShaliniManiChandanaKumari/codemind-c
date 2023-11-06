#include<stdio.h>
int main()
{
    int a,r=0,i;
    scanf("%d",&a);
    while(a!=0)
    {
        i=a%10;
        r=r*10+i;
        a=a/10;
    }
    printf("%d",r);
}