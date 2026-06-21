#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        long long m;
        cin>>n>>m;
        long long a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long need=n+a[n-1];
        for(int i=1;i<n;i++)
        {
            need+=max(a[i],a[i-1]);
        }
        if(need<=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}