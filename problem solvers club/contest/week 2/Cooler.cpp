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
        int x,y;
        cin>>x>>y;
        int sum=0;
        while(x!=y)
        {
            int c=x;
            sum+=c;
            x--;
        }
        cout<<sum<<endl;
    }
}