#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string s1="0000000";
    string s2="1111111";
    bool flag=false;
    for(int i=0;i+7<=s.size();i++)
    {
        string ans=s.substr(i,7);
        if(ans==s1 || ans==s2)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}