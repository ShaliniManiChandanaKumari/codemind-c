#include<stdio.h>
int main()
{
    int a,b,i,c=0,d=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
           c=c+i; 
        }
    }
    if(b==c)
    printf("Amicable");
    else
    printf("Not Amicable");
}