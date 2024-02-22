#include<stdio.h>
int main()
{
    char s[100],a;
    scanf("%[^
]s",s);
    scanf("
%c",&a);
    int i,x,f=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==a)
        {
            x=i;
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("True
");
        printf("%d",x);
    }
    else
    printf("False");
}