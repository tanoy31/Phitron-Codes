#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ll first=a;
            ll second=a*b;
            ll third=first+second;
            cout<<first<< " "<<second<< " "<<third<<endl;
        }
    }
}