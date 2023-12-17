#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=0;
        if(a%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    b=b+1;
                }
            }
            if(b==2)
            {
                c=0;
                if(i==2||i==3||i==5)
                {
                    c=1;
                }
            }
        }
    }
    if(c==1||a==1)
    printf("Ugly Number");
    else 
    printf("Not Ugly Number");
}