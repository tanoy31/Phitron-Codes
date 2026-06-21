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
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        bool flag=false;
        for(int i=2;i<n;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i-1<<" "<<i<<" "<<i+1<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
    }
}