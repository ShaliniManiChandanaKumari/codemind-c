#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b+c)
    printf("Gryffindor");
    else if(b>c+a)
    printf("Slytherin");
    else if(c>a+b)
    printf("Hufflepuff");
    else
    printf("NOTA");
}