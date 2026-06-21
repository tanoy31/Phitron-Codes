#include<bits/stdc++.h>
using namespace std;
const int B=30;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,K;
        cin>>n>>K;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int bits[B+1];
        memset(bits, 0, sizeof(bits));
        for(int i=0;i<n;i++)
        {
            for(int k=B;k>=0;k--)
            {
                if((a[i]>>k)&1)
                {
                    bits[k]++;
                }
            }
        }
        long long ans=0;
        for(int k=B;k>=0;k--)
        {
            if(bits[k]==n)
            {
                ans+=(1LL<<k);
            }
            else
            {
                int need=n-bits[k];
                if(need<=K)
                {
                    ans+=(1LL<<k);
                    K-=need;
                }
            }
        }
        cout<<ans<<endl;
    }
}