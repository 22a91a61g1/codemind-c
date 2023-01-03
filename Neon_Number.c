#include<stdio.h>
int main()
{
    int n,rev=0,sum=0;
    scanf("%d",&n);
    int a=n*n;
    while(a!=0)
    {
        int r=a%10;
        sum=sum+r;
        rev=rev*10+r;
        a=a/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }else{
        printf("Not Neon Number");
    }
}