#include<stdio.h>
int main()
{
    int a,b,x,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=12;i++)
    {
    x=a*i;
    printf("%d x %d = %d
",a,i,x);
    }
}