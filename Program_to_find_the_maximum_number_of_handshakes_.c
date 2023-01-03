#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(int i=n-1;i>0;i--)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}