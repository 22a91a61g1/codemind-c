#include<stdio.h>
int main()
{
    int x,a,b,c;
    scanf("%d%d%d",&x,&a,&b);
    c=b*2;
    if (x<=a+c)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}