#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>vis(k,0);
        while (n--)
        {
            string s;
            cin>>s;
            int cnt=0,pos=-1;
            for(int i=0;i<k;i++)
            {
                if(s[i]=='1')
                {
                    cnt++;
                    pos = i;
                }
            }
            if(cnt==1)
            {
                vis[pos]=1;
            }
        }
        bool ok=true;
        for(int i=0;i<k;i++)
        {
            if(!vis[i])
            {
                ok=false;
            } 
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}