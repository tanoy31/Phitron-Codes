#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(auto c:s)
        {
            mp[c]++;
        }
        int odd=0;
        for(auto x:mp)
        {
            if(x.second % 2!=0)
            {

                odd++;
            }
        }
        if(odd>k+1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}