#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
        cin>>m>>n;
        int win=max(0,(n-m+1)/2); 
        int loss=m-n+2*win;
        cout<<loss<<endl;
    }
}