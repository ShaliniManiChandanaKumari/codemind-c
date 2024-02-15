#include<stdio.h>
int main()
{
    char s[100];
    int i,a=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            a++;
        }
    }
    printf("%d",a);
}