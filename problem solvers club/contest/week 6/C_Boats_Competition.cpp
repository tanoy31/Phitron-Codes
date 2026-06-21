#include <bits/stdc++.h>
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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int ans=0;
        for(int s=2;s<=100;s++)
        {
            map<int,int>temp=mp;
            int cnt=0;
            for(int x:a)
            {
                int y=s-x;
                if((temp[x]==0) || (temp[y]==0) || (x == y && temp[x] < 2))
                {
                    continue;
                }
                temp[x]--;
                temp[y]--;
                cnt++;
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
}