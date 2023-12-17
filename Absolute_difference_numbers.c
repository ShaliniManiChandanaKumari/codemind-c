#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,a,b=0,c;
    scanf("%d%d",&n,&x);
    a=n;
    while(n>0)
    {
        b=b+1;
        n=n/10;
    }
    c=pow(10,x);
    int d=a%c,e,f;
    e=pow(10,b-x);
    f=a/e;
    if(d>f)
    printf("%d",d-f);
    else
    printf("%d",f-d);
}