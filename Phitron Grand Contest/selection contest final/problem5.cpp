#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=0;
    int y=k-1;
    while(y<=n-1)
    {
        long long mx=LLONG_MIN;
        for(int i=x;i<=y;i++)
        {
            mx=max(a[i],mx);
        }
        cout<<mx<<" ";
        x++;
        y++;
        mx=LLONG_MIN;
    }
}