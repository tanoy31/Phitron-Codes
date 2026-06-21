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
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long sum=0;
        long long count=0;
        bool flag=false;
        for(long long i=0;i<n;i++)
        {
            sum+=abs(a[i]);
            if(a[i]<0)
            {
                if(!flag)
                {
                    count++;
                    flag=true;
                }
            }
            else if(a[i]>0)
            {
                flag=false;
            }
        }
        cout<<sum<<" "<<count<<endl;
    }
}