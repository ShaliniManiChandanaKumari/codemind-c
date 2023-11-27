#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        e=i;
        c=i;
        d=0;
        while(c>0)
        {
            j=c%10;
            d=d*10+j;
            c=c/10;
        }
        if(e==d)
        printf("%d ",d);
        
    }
}