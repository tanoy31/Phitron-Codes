#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int x=strlen(s);
    int f=1;
    for(int i=0,j=x-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            f=0;
            break;
        }
    }
    if(f==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char s[1001];
    scanf("%s",&s);
    int a=is_palindrome(s);
    if(a==0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}