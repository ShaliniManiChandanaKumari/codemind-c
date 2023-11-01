#include<stdio.h>
int main()
{
    int a,i,b=0;
    scanf("%d",&a);
    while(a!=0)
    {
        i=a%10;
        b=b+i;
        a=a/10;
    }
    printf("%d",b);
}