#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0;
    scanf("%s",s);
    if(s[0]>96)
    {
        c=c+1;
    }
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            c++;
        }
    }
    printf("%d",c);
}