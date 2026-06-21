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
        int count=0;
        vector<int>ans;
        if(n==3)
        {
            cout<<2<<endl;
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            auto it=find(ans.begin(),ans.end(),a[i]);
            if(it==ans.end())
            {
                count++;
                ans.push_back(a[a[i]]);
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;
    }
}