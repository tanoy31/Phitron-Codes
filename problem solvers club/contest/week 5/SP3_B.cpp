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
        int n,k;
        cin>>n>>k;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            pq.push(x);
        }
        int sum=0;
        while(k--)
        {
            int x=pq.top();
            sum+=x;
            pq.pop();
        }
        cout<<sum<<endl;
    }
}