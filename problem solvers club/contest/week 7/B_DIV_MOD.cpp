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
        long long l,r,a;
        cin>>l>>r>>a;
        long long ans=LLONG_MIN;
        for(long long i=l;i<=r;i++)
        {
            long long x=(i/a)+(i%a);
            ans=max(x,ans);
        }
        cout<<ans<<endl;
    }
}