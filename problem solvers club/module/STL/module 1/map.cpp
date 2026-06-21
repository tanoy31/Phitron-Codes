#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int,int>mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        mp[x]= y;
    }
    for(auto it:mp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<< "What want to find?"<<endl;
    int f;
    cin>>f;
    auto it=mp.find(f);
    if(it !=mp.end())
    {
        cout<<it->first<<"->"<<it->second<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    auto it2=mp.lower_bound(f);
    if(it2 !=mp.end())
        cout<<it2->first<<"->"<<it2->second<<endl;
    auto it3=mp.upper_bound(f);
    if(it3 !=mp.end())
        cout<<it3->first<<"->"<<it3->second<<endl;
}