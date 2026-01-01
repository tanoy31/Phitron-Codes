#include<stdio.h>
int main()
{
    int n=1999;
    int x;
    while (scanf("%d",&x))
    {
        if(x==n)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
}