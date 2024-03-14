#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,j,n=0,a=0,p;
    for(i=0;s[i]!=NULL;i++)
    {
        n++;
    }
    if(n%2==0) p=(n/2);
    else p=(n/2);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]==s[j]) a++;
    }
    if(a==p) printf("Palindrome");
    else printf("Not Palindrome");
}