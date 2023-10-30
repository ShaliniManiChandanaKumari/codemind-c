#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%b==0)
    printf("0");
    else if(a<b)
    printf("%d",b-a);
    else if(a%b!=0)
    printf("%d",b-(a%b));
}