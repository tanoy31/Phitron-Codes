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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool flag=false;
        for(int i=0;i<256;i++)
        {
            int ans=0;
            for(int j=0;j<n;j++)
            {
                int temp=a[j]^i;
                ans^=temp;
            }
            if(ans==0)
            {
                cout<<i<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            cout<<-1<<endl;
        }
    }
}