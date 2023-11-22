#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+(i*i);
        b=b+i;
    }
    printf("%d",(b*b)-a);
}