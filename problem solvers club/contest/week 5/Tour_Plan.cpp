#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    int a=z-50;
    if(a<0)
    {
        cout<<x;
    }
    else
    {
        cout<<x+(a*y);
    }
}