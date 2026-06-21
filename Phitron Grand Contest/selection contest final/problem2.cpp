#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int> mp;
    for(auto x:s)
    {
        mp[x]++;
    }
    vector<pair<int,char>>odd;
    vector<pair<int,char>>even;
    for(auto p:mp)
    {
        if(p.second %2==0)
            even.push_back({p.second,p.first});
        else
            odd.push_back({p.second,p.first});
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    for(auto p:odd)
    {
        for(int i=0;i<p.first;i++)
        {
            cout<<p.second;
        }
    }    
    for(auto p:even)
    {
        for(int i=0;i<p.first;i++)
        {
            cout<<p.second;
        }
    }
}