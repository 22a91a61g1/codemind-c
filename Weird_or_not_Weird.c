#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=100)
    {
     if(a%2!=0)
     {
         printf("weird");
     }
     else if (a%2==0&&a>=2&&a<=5)
     {
         printf("not weird");
     }
     else 
     {
         printf("not weird");
     }
    }
}