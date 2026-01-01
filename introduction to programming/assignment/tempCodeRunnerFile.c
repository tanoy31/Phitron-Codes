#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,y;
    for(int i=0;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i]%3==0)||arr[i]%2==0)
        {
            x++;
        }
        else if (arr[i]%3==0)
        {
            y++;
        }
    }
    printf("%d %d",x,y);    
}