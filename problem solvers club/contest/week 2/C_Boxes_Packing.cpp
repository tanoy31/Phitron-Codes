#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        mp[val]++;
    }
    int mx=INT_MIN;
    for(auto[val,count]:mp)
    {
        mx=max(count,mx);
    }
    cout<<mx;
}