#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],s=0,i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    printf("%d",s);
}