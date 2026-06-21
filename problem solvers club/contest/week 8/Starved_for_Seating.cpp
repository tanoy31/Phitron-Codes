#include<bits/stdc++.h>
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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        long long sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int p=v[i]+v[j];
                int ans=p+(sum-p)/2;
                if(ans>k)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}