#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d",&a);
    i=a;
    while(a>0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    int p=c*c,q,r=0;
    while(p>0)
    {
        q=p%10;
        r=r*10+q;
        p=p/10;
    }
    if(i*i==r)
    printf("True");
    else
    printf("False");
}