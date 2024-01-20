#include<stdio.h>
int main()
{
    int n,s,k,a,i,j;
    scanf("%d",&n);
    k=n*(n+1)/2;
    scanf("%d",&s);
    a=s+k-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || j==n-1 || i==0)
            {
              printf("%d ",a);  
              a--;
            }
            else if(i>j)
            {
                printf("  ");
            }
            else
            { 
                printf("  ");
                a--;
            }
        }
        printf("
");
    }
}