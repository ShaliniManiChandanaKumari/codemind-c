#include<stdio.h>
int main()
{
    int n,i,j,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
           if((i+j)%2!=0)
           {
             d=d+1;  
           }
       }
    }
    printf("%d",d);
}