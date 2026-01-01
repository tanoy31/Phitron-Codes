#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char string[10001];
        scanf("%s",&string);
        int len=strlen(string);
        int capital=0,small=0,digit=0;
        for(int i=0;i<len;i++)
        {
            if(string[i]>=65 && string[i]<=90)
            {
                capital++;
            }
            if(string[i]>=97&&string[i]<=122)
            {
                small++;
            }
            if(string[i]>=48 && string[i]<=57)
            {
                digit++;
            }
        }
        printf("%d %d %d\n",capital,small,digit);
    }
}