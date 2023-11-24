#include<stdio.h>
int main()
{
    int a,b,c,d,t,i,j;
    scanf("%d",&t);
    for(d=1;d<=t;d++)
    {
        scanf("%d%d",&a,&b);
        j=0;
    for(i=a;i<=b;i++)
    {
       c=i%10;
       if(c==2||c==3||c==9)
       {
         j=j+1;
       }
    }
    printf("%d
",j);
    }
}