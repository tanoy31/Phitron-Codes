#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
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
                if(i+j!=r-1)
                {
                    if(a[i][j]==0)
                    {
                        continue;
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        if(f==0)
        {
            printf("Diagonal matrix\n");
        }
        else
        {
            printf("Not diagonal matrix");
        }
    }
    else
    {
        printf("Not diagonal matrix");
    }
}