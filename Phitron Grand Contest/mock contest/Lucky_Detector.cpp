#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='7')
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"Lucky";
    }
    else
    {
        cout<<"Not Lucky";
    }
}