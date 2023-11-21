#include<stdio.h>
int main()
{
    int a,b=1,i=0,c,x=0;
    scanf("%d",&a);
    printf("%d %d ",i,b);
    while(i>=0&&x<=(a-3))
    {
        c=i+b;
        printf("%d ",c);
        i=b;
        b=c;
        x=x+1;
    }
}