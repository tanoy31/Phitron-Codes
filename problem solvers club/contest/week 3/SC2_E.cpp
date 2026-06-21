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
        long long x,y;
        cin>>x>>y;
        long long left,right;
        left=pow(x,4)+4*pow(y,2);
        right=4*x*x*y;
        if(left==right)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}