#include<stdio.h>
int prime(int a)
{
    int b=0,i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            b=b+1;
        }
    }
    if(b==2)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&a);
    for(i=a+1;i>=a;i++)
    {
        b=i;
        c=0;
        if(prime(i))
        {
        while(b>0)
        {
            d=b%10;
            c=c*10+d;
            b=b/10;
        }
        if(i==c)
        {
        printf("%d",i);
        break;
        }
        }
    }
}