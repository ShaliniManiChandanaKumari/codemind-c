#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        for(j=k-1;j>=1;j--)
        {
            printf("*");
        }
        k--;
        printf("
");
    }
}