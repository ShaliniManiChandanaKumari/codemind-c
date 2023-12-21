#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
        }
        k=k+1;
        printf("
");
    }
}