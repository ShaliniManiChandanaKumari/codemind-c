#include<stdio.h>
int main()
{
    int a,b,c,d=0,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=i;
        c=0;
        for(j=1;j<=b;j++)
        {
            if(b%j==0)
            {
               c=c+1; 
            }
        }
        if(c==9)
        {
            printf("%d ",b);
            d=d+1;
        }
    }
    printf("
Total=%d",d);
}