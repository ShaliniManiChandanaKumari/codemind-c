#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,v=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                v++;
            }
        }
        
    }
    printf("%d",v);
}