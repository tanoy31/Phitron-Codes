#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    double x=ceil(double(n)/5);
    double y= ceil(double(n+1)/5);
    if(x==y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}