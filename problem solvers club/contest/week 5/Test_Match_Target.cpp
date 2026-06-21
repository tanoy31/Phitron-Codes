#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    int ans=x+z;
    if(ans<y)
    {
        cout<<0;
    }
    else
    {
        cout<<(ans-y)+1;
    }
}