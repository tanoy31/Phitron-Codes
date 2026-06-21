#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int x=m-n;
    int ans=min(x,n);
    cout<<ans<<endl;
}