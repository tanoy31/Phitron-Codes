#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    map<int,int> mp; 
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        int need=x-a;
        if(mp.count(need))
        {
            cout<<mp[need]<<" "<<i;
            return 0;
        }
        mp[a]=i;
    }
    cout <<"IMPOSSIBLE";
}