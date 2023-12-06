#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {    
        e=0;
        scanf("%d",&n);
        d=n;
        while(n!=0)
        {
            c=1;
            a=n%10;
            for(b=1;b<=a;b++)
            {
              c=c*b; 
            }
            e=e+c;
            n=n/10;
        }
        if(e==d)
        printf("Strong
");
        else
        printf("Not Strong
");
    }
}