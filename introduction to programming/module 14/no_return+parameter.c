#include<stdio.h>
int sub(int x,int y)
{
    int ans=x-y;
    printf("%d",ans);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int val=sub(a,b);
}