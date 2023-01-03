#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
    }else{
        c=b;
    }
    for(int i=c;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}