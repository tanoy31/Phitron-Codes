#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll mn=a[0];
        vector<ll>multiple;
        for(ll i=1;i<n;i++)
        {
            if(a[i]%mn==0)
            {
                multiple.push_back(a[i]);
            }
        }
        ll gc=0;
        for(auto x:multiple)
        {
            gc=__gcd(x,gc);
        }
        if(gc==mn)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}