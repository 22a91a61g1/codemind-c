#include<stdio.h>
int main()
{
 int n,p=1,s=0,i,x;
 scanf("%d",&n);
 for (;n>0;)
 {
     i=n%10;
     s=s+i;
     p=p*i;
     n=n/10;
 }
 x=p-s;
 printf("%d",x);
}