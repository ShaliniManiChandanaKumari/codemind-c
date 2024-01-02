#include<stdio.h>
int main()
{
	int a,b,i,j,n,c,d;
	scanf("%d",&n);
	c=n-1;
	for(i=1;i<=(n/2)+1;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		printf("%d ",i);
		for(j=c;j>1;j--)
		{
			printf(" ");
		}
		c=c-2;
		j=i;
		if(j<=(n/2))
		{
			printf("%d ",i);
		}
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		printf("
");
	}
	c=2;
		for(i=(n/2)+2;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		printf("%d ",i);
		for(j=1;j<c;j++)
		{
			printf(" ");
		}
		c=c+2;
		j=i;
		if(j>=(n/2)+2)
		{
			printf("%d ",i);
		}
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		printf("
");
	}
}