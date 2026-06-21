#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;
ll power(ll n,ll x)
{
    ll ans=1%MOD;
    while (x)
    {
        if(x&1)
        {
            ans=(ans % MOD * n % MOD) % MOD;
        }
        n=1LL * n * n % MOD;
        x>>=1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        cout<<power(n,x)<<endl;
    }
}