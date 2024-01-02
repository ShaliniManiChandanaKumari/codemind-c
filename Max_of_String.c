#include<stdio.h>
int main()
{
    char s[100],i,m=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(m<s[i])
        {
            m=s[i];
        }
    }
    printf("%c",m);
}