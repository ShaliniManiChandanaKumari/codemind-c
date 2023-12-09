#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);
        l=sqrt(j);
        if(l*l==j)
        printf("True
");
        else
        printf("False
");
    }
}