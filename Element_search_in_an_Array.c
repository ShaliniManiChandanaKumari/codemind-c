#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,e,f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(e==a[i])
        {
            f=1;
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}