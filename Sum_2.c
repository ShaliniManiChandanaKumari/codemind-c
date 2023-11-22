#include<stdio.h>
int main()
{
    int a,b,x,y,i,j=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(i=a;i<=b;i++)
    {
        if(i%x==0&&i%y!=0)
        j=j+i;
    }
    printf("%d",j);
}