#include <bits/stdc++.h>
using namespace std;

int GCD(int x,int y)
{
    return __gcd(x,y);
}

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
        int pos[1001];
        memset(pos,-1,sizeof(pos));
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            pos[x]=i;
        }
        int ans=-1;
        for(int i=1;i<=1000;i++)
        {
            for(int j=1;j<=1000;j++)
            {
                if (pos[i]!=-1 && pos[j]!=-1 && GCD(i,j)==1)
                {
                    ans=max(ans,pos[i] + pos[j]);
                }
            }
        }
        cout<<ans<<endl;
    }
}