#include<stdio.h>
int main()
{
    char str[50];
    fgets(str,16,stdin);
    printf("%s",str);
}