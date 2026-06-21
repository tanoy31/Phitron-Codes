#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long> a(n + 1);
        vector<long long> pref(n+1);
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        string s;
        cin>>s;
        pref[1]=a[1];
        for(int i=2;i<=n;i++)
        {
            pref[i]=pref[i-1]+a[i];
        }
        int l=0;
        int r=n-1;
        long long ans=0;
        while (l<r)
        {
            while(l<n && s[l]!='L')
            {
                l++;
            }
            while(r>=0 && s[r]!='R')
            {
                r--;
            }
            if(l<r)
            {
                ans+=pref[r+1]-pref[l];
                l++;
                r--;
            }
        }
        cout<<ans<<endl;
    }
}