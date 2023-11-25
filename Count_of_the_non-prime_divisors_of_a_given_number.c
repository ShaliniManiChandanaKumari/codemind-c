#include<stdio.h>
int main()
{
    int a,b,c=0,i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//8
    {
        a=0;
        b=0;
        if(n%i==0)//1 2 4 8
        {
            for(j=1;j<=i;j++)//
            {
                if(i%j==0) 
                {
                  a=a+1;  
                }
            }
            if(a==2)
           {
            b=b+1;
           }
           else
           {
             c=c+1;  
           }
        }
    }
    printf("%d",c);
}