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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=0;
        bool flag=false;
        int x;
        for(int i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                int z=max(a[i-1],a[i+1]);
                x=z-a[i];
                a[i]+=x;
            }
        }
    }
}