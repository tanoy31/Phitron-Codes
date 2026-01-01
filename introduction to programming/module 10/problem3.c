#include<stdio.h>
#include<string.h>
int main()
{
    char str1[11];
    char str2[11];
    scanf("%s",&str1);
    scanf("%s",&str2);
    int x=strlen(str1);
    int y=strlen(str2);
    char str3[22];
    int i,j,k;
    for(i=0;i<x;i++)
    {
        str3[i]=str1[i];
    }
    for(j=i,k=0;k<y;j++,k++)
    {
        str3[j]=str2[k];
    }
    str3[x+y]='\0';
    printf("%d ",x);
    printf("%d\n",y);
    for(int i=0;i<x+y;i++)
    {
        printf("%c",str3[i]);
    }
    printf("\n");
    char temp=str1[0];
    str1[0]=str2[0];
    str2[0]=temp;
    printf("%s ",str1);
    printf("%s",str2);
}