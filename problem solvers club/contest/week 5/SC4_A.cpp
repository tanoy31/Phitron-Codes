#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int x=min(a,b);
    if(a>b)
    {
        cout<<(x*5)+(a-x);
    }
    else
    {
        cout<<(x*5)+((b-x)*2);
    }
}