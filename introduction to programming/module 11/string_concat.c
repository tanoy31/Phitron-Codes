#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101];
    char str2[101];
    scanf("%s",&str1);
    scanf("%s",&str2);
    int x=strlen(str1);
    int y=strlen(str2);
    for(int i=0;i<=y;i++)
    {
        str1[i+x]=str2[i];
    }
    printf("%s",str1);
}