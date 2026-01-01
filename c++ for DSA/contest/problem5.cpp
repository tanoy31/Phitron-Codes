#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.length();
    int left=0;
    int right=0;
    int digit;
    for(int i=0;i<x;i++)
    {
        digit=s[i]-'0';
        if(i%2==0)
        {
            right+=digit;
        }
        else
        {
            left+=digit;
        }
    }
    int div=right-left;
    if(div%11==0)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
}