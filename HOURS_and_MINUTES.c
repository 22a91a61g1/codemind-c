#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y=n/60;
    int x=n%60;
    printf("%d Hour(s) %d Minute(s)",y,x);
}