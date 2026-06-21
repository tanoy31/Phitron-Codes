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
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(a[1]==a[n])
        {
            cout<<0<<endl;
        }
        else
        {
            int ans=INT_MAX;
            int count;
            for(int i=1;i<n;i++)
            {
                for(int j=i+1;j<=n;j++)
                {
                    if(a[i]==a[j])
                    {
                        count=(i-1)+(n-j);
                        ans=min(count,ans);
                    }
                }
            }
            if(ans==INT_MAX)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }
    }
}