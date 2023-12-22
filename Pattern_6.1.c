#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i-1;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("* ");
        }
        printf("
");
        k++;
    }
}