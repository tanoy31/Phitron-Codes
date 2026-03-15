#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            a[i]=arr[i];
        }
        sort(a,a+n);
        long long x=a[n-1];
        long long y=a[n-2];
        int p,q;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                p=i;
            }
            if(arr[i]==y)
            {
                q=i;
            }
        }
        long long z=min(p,q);
        long long b=max(p,q);
        cout<<z<< " "<<b<<endl;
    }
}