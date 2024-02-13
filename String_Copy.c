#include<stdio.h>
int main()
{
    char s[100],p[100];
    int i=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        p[i]=s[i];
    }
    printf("%s",p);
}