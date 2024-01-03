#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,j=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            j++;
        }
    }
    printf("%d",j);
}