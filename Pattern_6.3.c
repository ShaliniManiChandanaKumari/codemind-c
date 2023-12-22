#include<stdio.h>
int main()
{
    int n,i,j,k,p;
    scanf("%d",&n);
    p=n;
    for(i=n;i>=1;i--)
    {
        for(j=i-1;j>=1;j--)
        {
            printf(" ");
        }
        for(k=i;k<=n;k++)
        {
        	printf("%d ",k);
		}
        printf("
");
    }
}