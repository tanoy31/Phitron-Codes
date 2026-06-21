#include <bits/stdc++.h>
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
        long long a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<long long>());
        bool flag=true;
        for (int i=0;i<n-2;i++)
        {
            if (a[i]% a[i+1] != a[i+2])
            {
                flag=false;
                break;
            }
        }
        if (flag)
        {
            cout<<a[0] <<" " <<a[1] <<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}