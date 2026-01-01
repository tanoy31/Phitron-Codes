#include<stdio.h>
int fun(int* x)
{
    *x=20;
}
int main()
{
    int x;
    scanf("%d",&x);
    fun(&x);
    printf("X of main function %d\n",x);
}