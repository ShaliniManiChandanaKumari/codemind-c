#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d%d",&a,&b);
    c=a+b+1;
    while(c>=a+b)
    {
        d=0;
        for(i=1;i<=c;i++)
        {
            if(c%i==0)
            {
                d=d+1;
            }
        }
        if(d==2)
        {
            printf("%d",c-a-b);
            break;
        }
        c++;
    }
}