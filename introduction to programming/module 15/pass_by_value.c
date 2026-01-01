#include<stdio.h>
int fun(int x)
{
    x=20;
    printf("X of fun function %d\n",x);
    printf("Address of fun function X %p\n",&x);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("X of main function %d\n",x);
    printf("Address of main function X %p\n",&x);
    fun(x);
}