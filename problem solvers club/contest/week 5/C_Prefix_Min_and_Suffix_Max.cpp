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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>ans(n,0);
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,a[i]);
            if(a[i]==mn)
            {
                ans[i]=1;
            }
        }
        int mx=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            mx=max(mx,a[i]);
            if(a[i]==mx)
            {
                ans[i]=1;
            }
        }
        for(int x:ans)
        {
            cout<<x;
        }
        cout << endl;
    }
}