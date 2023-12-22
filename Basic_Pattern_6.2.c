#include<stdio.h>
int main()
{
    int n,i,j,k=1,a;
    scanf("%d",&n);
    a=n;
    for(i=n;i>=1;i--)
    {
        for(j=i-1;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("%d ",a);
        }
        printf("
");
        a--;
        k++;
    }
}