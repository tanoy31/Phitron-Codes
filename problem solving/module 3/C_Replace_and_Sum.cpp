#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        vector<int>b(n);
        for(auto &i:a) 
            cin>>i;
        for(auto &i:b) 
            cin>>i;
        for(int i=0;i<n;i++)
        {
            if(b[i]>a[i])
                a[i]=b[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
                a[i]=a[i+1];
        }
        vector<long long>pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l=l-1;
            r=r-1;
            long long sum;
            if(l==0)
            {
                sum=pre[r];
            }
            else
            {
                sum=pre[r]-pre[l-1];
            }
            cout<<sum<< " ";
        }
        cout<<endl;
    }
}