#include<stdio.h>
int main()
{
    int a,b,ans=1;
    scanf("%d%d",&a,&b);
    int i=2;
    int x=a>b?a:b;
    while(i<x)
    {
        if(a%i==0&&b%i==0)
        {
            ans=ans*i;
            a=a/i;
            b=b/i;
        }else{
            i++;
        }
    }
    int lcm=ans*a*b;
    printf("%d",lcm);
}