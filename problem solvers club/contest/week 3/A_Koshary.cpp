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
        int a,b;
        cin>>a>>b;
        if(a%2==0 && b%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(a%2==1 && b%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(a%2==0 && b%2==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}