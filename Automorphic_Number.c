#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0,c,i;
    scanf("%d",&a);
    int j=a;
    while(a>0)
    {
        b=b+1;
        a=a/10;
    }
   c=pow(10,b);
   if((j*j)%c==j)
   printf("Automorphic Number");
   else
   printf("Not an Automorphic Number");
    
}