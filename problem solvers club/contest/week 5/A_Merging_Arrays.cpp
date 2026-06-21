#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    multiset<int>ml;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ml.insert(a);
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        ml.insert(a);
    }
    for(auto it:ml)
    {
        cout<<it<<" ";
    }
}