#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        long long a[n+1];
        long long pref[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        pref[0]=0;
        for(int i=1;i<=n;i++)
        {
            pref[i]=a[i]+pref[i-1];
        }
        while(q--)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            long long ans=pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
            if(ans%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}