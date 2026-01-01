#include<stdio.h>
int sum(int x,int y)
{
    int ans=x+y;
    return ans;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int val=sum(a,b);
    printf("%d",val);
}