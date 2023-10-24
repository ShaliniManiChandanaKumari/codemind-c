#include<stdio.h>
int main()
{
    int  a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((b-a)%(2*c)==0)
    printf("YES");
    else
    printf("NO");
}