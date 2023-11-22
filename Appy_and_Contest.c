#include<stdio.h>
int main()
{
    int t,n,a,b,k,i,j,p,q;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        p=0;
        q=0;
        for(j=1;j<=n;j++)
        {
            if(j%a==0&&j%b!=0)
            p=p+1;
            else if(j%a!=0&&j%b==0)
            q=q+1;
        }
        if(p+q>=k)
        printf("Win
");
        else 
        printf("Lose
");
    }
}