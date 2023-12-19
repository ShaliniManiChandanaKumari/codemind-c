#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,d;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            d=i;
        }
    }
    printf("%d",d);
}