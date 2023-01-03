#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int a,b,sum=0;
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
        t--;
    }
}