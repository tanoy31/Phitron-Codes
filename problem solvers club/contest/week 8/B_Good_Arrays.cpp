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
        long long sum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]==1)
            {
                count++;
            }
        }
        if(sum>=count+n && n>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}