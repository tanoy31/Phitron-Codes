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
        int mx=INT_MIN;
        int mn=INT_MAX;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(a[i],mx);
            mn=min(a[i],mn);
        }
        cout<<mx-mn+1<<endl;
    }
}