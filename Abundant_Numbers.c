 #include<stdio.h>
 int main()
 {
     int a,n=0,i;
     scanf("%d",&a);
     for(i=1;i<a;i++)
     {
         if(a%i==0)
         {
           n=n+i;  
         }
     }
     if(n>a)
     printf("True");
     else
     printf("False");
 }