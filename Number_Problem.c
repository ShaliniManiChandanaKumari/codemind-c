#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("0");
    else if(a<b&&(b-a)%10==0)
    printf("%d",(b-a)/10);
    else if(a<b&&(b-a)%10!=0)
    printf("%d",((b-a)/10)+1);
    else if(a>b&&(a-b)%10==0)
    printf("%d",(a-b)/10);
    else if(a>b&&(a-b)%10!=0)
    printf("%d",((a-b)/10)+1);
}