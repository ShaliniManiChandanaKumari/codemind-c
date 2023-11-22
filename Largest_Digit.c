#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d",&a);
    b=a%10;
    while(a>0)
    {
      i=a%10;
      if(b<i)
      {
          b=i;
      }
      a=a/10;
    }
    printf("%d",b);
}