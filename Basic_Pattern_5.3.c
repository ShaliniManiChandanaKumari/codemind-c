#include<stdio.h>
int main()
{
    int n,i,j,k,a=1;
    scanf("%d",&n);
    k=n;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",i);
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