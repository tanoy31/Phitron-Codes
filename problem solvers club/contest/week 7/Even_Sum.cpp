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
        long long sum=0;
        int a[n];
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }      
        }
        if(sum%2==0 && even>0)
        {
            cout<<"YES"<<endl;
        }
        else if(sum%2!=0 && odd>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}