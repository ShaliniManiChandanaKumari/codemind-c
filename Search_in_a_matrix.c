#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x,s=0;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(x==a[i][j])
            s=1;
        }
    }
    printf("%d",s);
}