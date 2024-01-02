#include<stdio.h>
int main()
{
    int t,i,j,k;
    scanf("%d
",&t);
    char s[100];
    for(i=1;i<=t;i++)
    {
        k=0;
        scanf("%s",s);
        for(j=0;s[j]!=NULL;j++)
        {
            if(s[j]>=48&&s[j]<=57)
            {
                printf("Yes
");
                k=1;
                break;
            }
        }
        if(k!=1)
        printf("No
");
    }
}