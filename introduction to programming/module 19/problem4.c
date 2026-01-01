#include<stdio.h>
long long fac(int n)
{
    if(n==1)
    {
        return 1;
    }
   long long mul=fac(n-1);
    return mul*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long ans=fac(n);
    printf("%lld",ans);
}