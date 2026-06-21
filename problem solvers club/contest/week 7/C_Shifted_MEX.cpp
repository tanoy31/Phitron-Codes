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
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        vector<int>v;
        v.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                v.push_back(a[i]);
            }
        }
        int ans=1,cur=1;
        for(int i=1;i <v.size();i++)
        {
            if(v[i]==v[i-1]+1)
            {
                cur++;
            }
            else
            {
                cur = 1;
            }
            ans=max(ans,cur);
        }
        cout<<ans<<endl;
    }
}