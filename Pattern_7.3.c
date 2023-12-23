#include<stdio.h>
int main()
{
    int n,i,j,k,a;
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=a;j>=1;j--)
        {
            printf("%d ",j);
        }
        a--;
        printf("
");
    }
}