#include <bits/stdc++.h>
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
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(mp[k-x]>0)
            {
                ans++;
                mp[k-x]--;
            }
            else
            {
                mp[x]++;
            }
        }
        cout<<ans<<endl;
    }
}