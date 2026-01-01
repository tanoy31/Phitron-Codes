#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d", &r, &c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r==c)
    {
        int f=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==j||i+j==r-1)
                {
                    if(a[i][j]!=1)
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    if(a[i][j]!=0)
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
}
