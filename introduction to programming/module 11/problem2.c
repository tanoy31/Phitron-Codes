#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    int fre[n];
    for(int i=1;i<=n;i++)
    {
        fre[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        fre[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",fre[i]);
    }
}