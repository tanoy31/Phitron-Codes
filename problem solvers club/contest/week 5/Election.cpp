#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    if(((x/2)+1)<=y)
    {
        cout<<0;
    }
    else
    {
        cout<<((x/2)+1)-y;
    }
}