#include<stdio.h>
int main()
{
    int a,i,d=0;
    scanf("%d",&a);
    while(a!=0)
    {
    i=a%10;
    d=d+1;
    a=a/10;
    }
printf("%d
",d);    
}