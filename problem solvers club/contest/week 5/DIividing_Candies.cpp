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
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%x==0)
            {
                if(a[i]>ans)
                {
                    ans=a[i];
                }
            }
        }
        cout<<ans<<endl;
    }
}