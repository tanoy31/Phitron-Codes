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
        int n,k;
        cin>>n>>k;
        vector<long long>v(n+1);
        int j=0;
        while(true)
        {
            if(j==0)
            {
                for(int i=1;i<=n;i++)
                {
                    if(k>0)
                    {
                        v[i]+=k;
                        k--;
                    }
                }
                j=n+1;
            }
            else if(j==n+1)
            {
                for(int i=n;i>=1;i--)
                {
                    if(k>0)
                    {
                        v[i]+=k;
                        k--;
                    }
                }
                j=0;
            }
            if(k==0)
            {
                break;
            }
        }
        long long mx=LLONG_MIN;
        for(auto x:v)
        {
            mx=max(mx,x);
        }
        cout<<mx<<endl;
    }
}