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
        long long n,k,x;
        cin>>n>>k>>x;
        long long mn=0,mx=0;
        mn=((k+1)*k)/2;
        long long total_sum=(n*(n+1))/2;
        long long target=n-k;
        long long target_sum=(target*(target+1))/2;
        mx=total_sum-target_sum;
        if(x>=mn && x<=mx)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}