#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        int b[n];
        for(int i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        for(int i =0;i<n-1;i++) 
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(b[j]>b[j+1])
                {
                    int temp=b[j];
                    b[j]=b[j+1];
                    b[j + 1]=temp;
                }
            }
        }
        int c[n];
        for(int i=0;i<n;i++)
        {
            c[i]=a[i]-b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(c[i]<0)
            {
                c[i]*=-1;
            }
            printf("%d ",c[i]);
        }
        printf("\n");
    }
}