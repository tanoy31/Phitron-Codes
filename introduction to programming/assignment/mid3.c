#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--) 
    {
        int m,n,d;
        scanf("%d%d%d",&m,&n,&d);
        int sum=m+n;
        int ans=(m*d)/sum;
        int total=d-ans;
        printf("%d\n",total);
    }
}