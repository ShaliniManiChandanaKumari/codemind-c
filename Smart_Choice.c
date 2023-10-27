#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(500-(a*2)+1000-((a+b)*4)>=1000-(b*4)+500-((a+b)*2))
    printf("%d",500-(a*2)+1000-((a+b)*4));
    else
    printf("%d",1000-(b*4)+500-((a+b)*2));
}