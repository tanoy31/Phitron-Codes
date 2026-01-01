#include<stdio.h>
int main()
{
    long long a;
    long long b;
    double c;
    char d;
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lf",&c);
    scanf(" %c",&d);
    printf("%lld\n",a);
    printf("%lld\n",b);
    printf("%.2lf\n",c);
    printf("%c",d);
}