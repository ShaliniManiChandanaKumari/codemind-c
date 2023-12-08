#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        d=0;
        c=i;
        for(j=1;j<=c;j++)
        {
            if(c%j==0)
            {
             d=d+1;   
            }
        }
        if(d==2)
        printf("%d
",i);
    }
}