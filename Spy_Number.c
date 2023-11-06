#include<stdio.h>
int main()
{
    int a,b=0,c=1,i;
    scanf("%d",&a);
    while(a!=0)
    {
        i=a%10;
        a=a/10;
        b=b+i;
        c=c*i;
    }
    if(b==c)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}