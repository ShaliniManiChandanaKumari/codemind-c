#include<stdio.h>
int main()
{
    int n,i,a=1,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char s[10];
        scanf("%s",s);
        if(s[a]=='+') x++;
        else if(s[a]=='-') x--;
    }
    printf("%d",x);
}