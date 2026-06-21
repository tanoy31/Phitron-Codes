#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}