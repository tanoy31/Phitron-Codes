#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101];
    char str2[101];
    scanf("%s",&str1);
    scanf("%s",&str2);
    int val=strcmp(str1,str2);
    if(val<0)
    {
        printf("%s is small",str1);
    }
    else if (val>0)
    {
        printf("%s is small",str2);
    }
    else
    {
        printf("Both are equal");
    }
}