#include<stdio.h>
int main()
{
    int m,n,i,a=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        {
           a=a+1; 
        }
    }
    printf("%d",a);
}