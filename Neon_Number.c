#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
        i=b%10;
        b=b/10;
        c=c+i;
    }
    if(c==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}