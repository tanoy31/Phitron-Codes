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
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int count=0,l=0,r=0;
        long long sum=0;
        while(r<n)
        {
            if(r>0 && b[r-1]%b[r]!=0)
            {
                l=r;
                sum=0;
            }
            sum+=a[r];
            while(l<=r && sum>k)
            {
                sum-=a[l];
                l++;
            }
            count=max(count,r-l+1);
            r++;
        }
        cout<<count<<endl;
    }
}