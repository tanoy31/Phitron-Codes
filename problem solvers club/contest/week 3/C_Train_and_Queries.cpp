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
        int n,m;
        cin>>n>>m;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            if(mp.find(x)==mp.end() || mp.find(y)==mp.end())
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int l=*mp[x].begin();
                int r=*mp[y].rbegin();
                if(l<r)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}