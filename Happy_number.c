#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        c=c+(b*b);
        a=a/10;
        if(a==0)
        {
            a=c;
            if(a<=9)
            {
                d=a;
                break;
            }
            c=0;
        }
    }
    if(d==1||d==7)
    printf("True");
    else
    printf("False");
}