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
        long long a,b,n;
        cin>>a>>b>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long sec=b;
        for(int i=0;i<n;i++)
        {
            sec+=min(a-1,arr[i]);
        }
        cout<<sec<<endl;
    }
}