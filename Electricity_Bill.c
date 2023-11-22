#include<stdio.h>
int main()
{
    int u,b,s,t;
    float c;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    if(u<=199)
    c=1.20;
    else if(u>=200&&u<400)
    c=1.40;
    else if(u>=400&&u<600)
    c=1.60;
    else if(u>=600&&u<800)
    c=1.80;
    else 
    {c=2.00;}
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",c*u);
    if(c*u>=400)
    {
    printf("Surcharge: %.2f
",c*u*0.15);
    printf("Total Amount: %.2f",(c*u)+(c*u*0.15));
    }
    else
    {
    printf("Surcharge: 0.00
");
    printf("Total Amount: %.2f",c*u);
    }
}