#include<stdio.h>
int main()
{
    char s[100],t;
    scanf("%[^
]s",s);
    int i,j,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0,j=c-1;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    printf("%s",s);
}