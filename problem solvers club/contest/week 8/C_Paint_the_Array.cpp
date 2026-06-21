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
        int n;
        cin>>n;
        vector<long long>even,odd;
        for(int i=1;i<=n;i++)
        {
            long long x;
            cin>>x;
            if(i%2!=0)
            {
                odd.push_back(x);
            }
            else
            {
                even.push_back(x);
            }
        }
        long long G1=0,G2=0;
        for(int i=0;i<odd.size();i++)
        {
            G1=__gcd(G1,odd[i]);
        }
        for(int i=0;i<even.size();i++)
        {
            G2=__gcd(G2,even[i]);
        }
        bool flag=true;
        for(int i=0;i<odd.size();i++)
        {
            if(odd[i]%G2==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<G2<<endl;
            continue;
        }
        bool flag2=true;
        for(int i=0;i<even.size();i++)
        {
            if(even[i]%G1==0)
            {
                flag2=false;
                break;
            }
        }
        if(flag2)
        {
            cout<<G1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}