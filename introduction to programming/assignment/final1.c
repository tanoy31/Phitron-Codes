#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c;
        long long m;
        scanf("%lld",&m);
        scanf("%d%d%d",&a,&b,&c);
        if(m==0)
        {
            printf("0\n");
        }
        else
        {
            long long mul=a*b*c;
            if(m%mul==0)
            {
                printf("%lld\n",m/mul);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
}