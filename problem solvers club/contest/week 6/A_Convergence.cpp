#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans =INT_MAX;
        for(int i=0;i<n;i++)
        {
            ll x=a[i];
            int l=0,r=0;
            for(int j=0;j<n;j++)
            {
                if(a[j]<x)
                {
                    l++;
                }
                else if(a[j]>x)
                {
                    r++;
                }
            }
            int z=max(l,r);
            ans=min(ans,z);
        }
        cout<<ans<<endl;
    }
}