#include<stdio.h>
int pal(int a)
{
    int i,b,c=0;
    i=a;
    while(a>0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(i==c)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b,c,d,e,i,j;
    scanf("%d",&a);
    for(b=a+1;b>=a;b++)
    {
        if(pal(b))
        {
           c=b;
           break;
        }
    }
    for(d=a-1;d<=a;d--)
    {
        if(pal(d))
        {
            e=d;
            break;
        }
    }
    if(c-a==a-e)
    printf("%d %d",e,c);
    else if(c-a<a-e)
    printf("%d",c);
    else
    printf("%d",e);
}