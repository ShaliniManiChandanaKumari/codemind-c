#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,i,j=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        j=j+sqrt(i);
    }
    printf("%.2f",j);
}