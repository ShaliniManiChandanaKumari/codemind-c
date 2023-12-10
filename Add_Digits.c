#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        c=c+b;
        a=a/10;
        if(a==0)
        {
            a=c;
            c=0;
            if(a<=9)
            break;
        }
    }
    printf("%d",a);
}