#include<stdio.h>
int main()
{
    int a,b=1,i=0,c,x=0;
    scanf("%d",&a);
    while(i>=0)
    {
        c=i+b;
        if(c==a)
        {
            x=1;
            printf("True");
        }
        i=b;
        b=c;
    }
    if(x==0)
    printf("False");
}