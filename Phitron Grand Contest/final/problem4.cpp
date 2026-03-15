#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long a[n],b[m];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long long s;
        cin>>s;
        long long count=0;
        int sum;
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                sum=a[i]+b[j];
                if(sum==s)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}