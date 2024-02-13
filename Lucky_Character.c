#include<stdio.h>
int main()
{
    char s[10];
    scanf("%[^
]s",s);
    int i,a=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(a==6)
        {
            printf("%c",s[i]);
            break;
        }
        a++;
    }
}