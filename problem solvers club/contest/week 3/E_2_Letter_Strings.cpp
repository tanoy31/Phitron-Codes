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
        int n;
        cin>>n;
        map<pair<char,char>,int>mp;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            char a=s[0];
            char b=s[1];
            for(char c='a';c<='k';c++)
            {
                if(c!=a)
                {
                    ans+=mp[{c, b}];
                }
                    
            }            
            for(char c='a';c<='k';c++)
            {
                if(c!=b)
                {
                    ans += mp[{a,c}];
                }
            }
            mp[{a,b}]++;
        }
        cout <<ans<<endl;
    }
}