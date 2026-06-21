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
        long long n;
        cin>>n;
        long long x=1,a,b;
        while((x<<1)<=n)
        {
            x<<=1;
        }
        b=x;
        a=n^x;
        cout << a<< " "<< b<<endl;
    }
}