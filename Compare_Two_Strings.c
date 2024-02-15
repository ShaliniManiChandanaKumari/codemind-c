#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	scanf("%[^
]s",s1);
	scanf(" %[^
]s",s2);
	int l1=0,l2=0,i,f;
	for(i=0;s1[i]!=NULL;i++)
	{
		l1++;
	}
	for(i=0;s2[i]!=NULL;i++)
    {
    	l2++;
	}
	i=0;
	if(l1==l2)
	{
		while(s1[i]!=NULL&&s2[i]!=NULL)
		{
			if(s1[i]!=s2[i])
			{
				f=1;
				break;
			}
			i++;
		}
		if(f==1)
		printf("Strings are not Equal");
		else
		printf("Strings are Equal");
	}
	else
	printf("Strings are not Equal");
}