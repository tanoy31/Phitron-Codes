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
        long long n,k,q;
        cin>>n>>k>>q;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<long long>cnt;
        long long count=0;
        for(long long i=0;i<n;i++)
        {
            if(a[i]<=q)
            {
                count++;
            }
            else
            {
                cnt.push_back(count);
                count=0;
            }
        }
        if(count>0)
        {
            cnt.push_back(count);
        }
        long long ans=0;
        for(auto x:cnt)
        {
            if(x>=k)
            {
                long long y=x-k+1;
                ans+=(y*(y+1))/2;
            }
        }
        cout<<ans<<endl;
    }
}