#include<stdio.h>
int main()
{
   int x,b,c,a;
   scanf("%d%d%d",&a,&b,&c);
   x=b*c;
   if(x<a)
   {
       printf("NO");
   }
   else 
   {
       printf("YES");
   }
}