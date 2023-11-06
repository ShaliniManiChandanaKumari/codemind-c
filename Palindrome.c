#include<stdio.h>
int main()
{
    int a,b=0,i,c;
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        i=a%10;
        b=b*10+i;
        a=a/10;
    }
    if(c==b)
    {
        printf("Palindrome");
    }
    else
    printf("Not Palindrome");
}