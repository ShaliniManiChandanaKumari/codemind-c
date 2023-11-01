#include<stdio.h>
int main()
{
    int a,i,b,c;
    scanf("%d",&a);
    c=a%10; 
    while(a>0)
    {
        i=a%10;
        a=a/10;
    }
    printf("%d",c+i);
}