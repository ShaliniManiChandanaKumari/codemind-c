#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,j;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        printf("%c",s[i]+32);
        else
        printf("%c",s[i]);
    }
}