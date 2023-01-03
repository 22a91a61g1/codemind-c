#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int n,rev=0;
        scanf("%d",&n);
        int temp=n;
        while(n!=0)
        {
            int r=n%10;
            rev=rev*10+r;
            n=n/10;
        }if(rev==temp)
        {
            printf("True
");
        }else{
            printf("False
");
        }t--;
    }
}