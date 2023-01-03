#include<stdio.h>
int main()
{
 int n,s=0,p=1,i;
 scanf("%d",&n);
 for (;n>0;)
 {
     i=n%10;
     s=s+i;
     p=p*i;
     n=n/10;
 }
 if (s==p)
 {
     printf("Spy Number");
 }
 else 
 {
     printf("Not Spy Number");
 }
}