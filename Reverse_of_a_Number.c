#include<stdio.h>
int main()
{
    int a,b=0,i;
    scanf("%d",&a);
    while(a!=0)
    {
        i=a%10;
        b=b*10+i;
        a=a/10;
    }
    printf("%d",b);
}