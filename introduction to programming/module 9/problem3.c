#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i=0;
    int j=n-1;
    int f=0;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            break;
            f=0;
        }
        i++;
        j--;
        f++;
    }
    if(f==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}