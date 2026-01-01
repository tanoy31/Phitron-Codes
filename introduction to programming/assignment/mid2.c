#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    scanf("%s",&str);
    int x=strlen(str);
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("%d",x-count);
}