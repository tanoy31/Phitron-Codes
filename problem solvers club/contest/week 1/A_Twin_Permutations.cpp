#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        vector<int>v2(n);
        int val=n;
        for(int i=0;i<n;i++)
        {
            v2[v[i].second]=val--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
}