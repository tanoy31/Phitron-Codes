#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    scanf("%s",&str);
    int len=strlen(str);
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=str[i]-48;
    }
    printf("%d",sum);
}