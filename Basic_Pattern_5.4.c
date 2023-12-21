#include<stdio.h>
int main()
{
    int n,i,j,k,a=1;
    scanf("%d",&n);
    k=n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        if(k<n)
        {
           for(j=1;j<a;j++)
        {
            printf("*");
        }
        }
        printf("
");
        a++;
        k--;
    }
}