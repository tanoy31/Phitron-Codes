#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    scanf("%s",&str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=92 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i]=' ';
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
}