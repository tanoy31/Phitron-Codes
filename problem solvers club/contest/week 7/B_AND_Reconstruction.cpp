#include<bits/stdc++.h>
using namespace std;
const int max_N=1e5+5;
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
        int b[max_N],a[max_N];
        for(int i=1;i<n;i++)
        {
            cin>>b[i];
        }
        b[0]=b[n]=0;
        for(int i=1;i<=n;i++)
        {
            a[i]=b[i-1] | b[i];
        }
        bool flag=true;
        for(int i=1;i<n;i++)
        if((a[i] & a[i+1]) != b[i])
        {
            flag=false;
            break;
        }
        if(flag)
        {
            for (int i=1;i<=n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}