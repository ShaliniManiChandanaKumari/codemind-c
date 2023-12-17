#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,i;
    scanf("%d",&a);
    i=a;
    while(a>0)
    { 
        b=a%10;
        c=a/10;
        while(c>0)
        {
            d=c%10;
            //printf("%d%d ",b,d);
            if(b==d)
            {
               e=1;
               break;
            }
            c=c/10;
        }
        a=a/10;
    }
    if(e==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}