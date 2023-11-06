#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for(b=a*2;b>0;b=b-2)
    {
        printf("%d ",b);
    }
}