#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,avg,f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        f=1;
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}