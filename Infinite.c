#include<stdio.h>
int main()
{
   int a;
   while(1)
   {
       scanf("%d",&a);
       if(a==-1) break;
       printf("%d
",a*a);
   }
}