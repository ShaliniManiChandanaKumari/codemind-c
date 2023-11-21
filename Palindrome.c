#include<stdio.h>
int main()
{
    int a,b=0,c,i;
    scanf("%d",&a);
    c=a;
    while(a>0)
    {
       i=a%10;
       b=b*10+i;
       a=a/10;
    }
    if(c==b)
    printf("True");
    else
    printf("False");
}