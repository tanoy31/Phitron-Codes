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
        int n,k,x;
        cin>>n>>x>>k;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >>a;
            mp[a]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto p:mp)
        {
            pq.push({p.first,p.second});
        }
        int count=0;
        while(k--&&!pq.empty())
        {
            auto top=pq.top();
            pq.pop();
            count+=top.second;
        }
        if(count<x)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}