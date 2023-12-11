#include<stdio.h>
int main()
{
	int a,b=0,c,d,e=0,f=0,i,j;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		b=b+1;
	}
	if(b==2)
	{
		while(a!=0)
		{
			c=a%10;
			d=0;
			f=f+1;
			a=a/10;
			for(j=1;j<=c;j++)
			{
				if(c%j==0)
				d=d+1;
			}
			if(d==2)
			e=e+1;
		}
		if(e==f)
	    printf("Mega Prime");
	    else
	    printf("Not Mega Prime");
	}
	else
	printf("Not Mega Prime");
}
