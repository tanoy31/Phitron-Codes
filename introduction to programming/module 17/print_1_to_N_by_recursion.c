#include<stdio.h>
void hello(int i,int n)
{
    if(i==n+1)
    {
        return;
    }
    printf("%d\n",i);
    hello(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    hello(i,n);
}