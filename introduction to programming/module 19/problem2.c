#include<stdio.h>
void num(int n)
{
    if(n==0)
    {
        return;
    }
    num(n/10);
    int last=n%10;
    printf("%d ",last);
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0");
        }
        num(n);
        printf("\n");
    }
}