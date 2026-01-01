#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",&str);
    int n=strlen(str);
    int i=0;
    int j=n-1;
    int f=1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            f=0;
            break;
        }
        i++;
        j--;
        f++;
    }
    if(f==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}