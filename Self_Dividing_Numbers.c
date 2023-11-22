#include<stdio.h>
int main()
{
    int a,b,e,f,c,d,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=i;
        e=0;
        f=0;
        while(c!=0)
        {
          d=c%10;
          if(d!=0 && i%d==0)
          {
              e=e+1;
          }
          f=f+1;
          c=c/10;
        }
        if(e==f)
        {
            printf("%d ",i);
        }
    }
}