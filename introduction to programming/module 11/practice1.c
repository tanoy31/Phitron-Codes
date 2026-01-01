#include<stdio.h>
int main()
{
    char str1[101];
    char str2[101];
    scanf("%s",&str1);
    scanf("%s",&str2);
    int i=0;
    while(1)
    {
        if(str1 [i]=='\0'&&str2[i]=='\0')
        {
            printf("%s",str1);
            break;
        }
        else if (str1[i]=='\0')
        {
            printf("%s",str1);
            break;
        }
        else if (str2[i]=='\0')
        {
            printf("%s",str2);
            break;
        }
        else if (str1[i]<str2[i])
        {
            printf("%s",str1);
            break;
        }
        else if (str1[i]>str2[i])
        {
            printf("%s",str2);
            break;
        }
        else
        {
            i++;
        }
    }
}