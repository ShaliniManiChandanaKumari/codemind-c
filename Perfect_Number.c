#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    for(b=1;b<a;b++)
    {
        if(a%b==0)
        {
           c=c+b; 
        }
    }
    if(c==a)
    printf("True");
    else
    printf("False");
}