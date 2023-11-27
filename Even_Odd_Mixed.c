#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,n,i;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        if(i%2==0)
        {
           b=b+1; 
        }
        if(i%2==1)
        {
            d=d+1;
        }
        c=c+1;
        n=n/10;
    }
    if(b==c)
    printf("Even");
    else if(d==c)
    printf("Odd");
    else
    printf("Mixed");
    
}