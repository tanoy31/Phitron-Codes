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
        map<int,int>mp;
        for(auto x:s)
        {
            mp[x-'0']++;
        }
        int mx,mn;
        mx=mp[0]/2+mp[1]/2;
        mn=(max(mp[0],mp[1])-(n/2));
        if(k>=mn && k<=mx && (k - mn) % 2 == 0 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}