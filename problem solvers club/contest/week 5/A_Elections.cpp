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
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>ans;
        int x;
        x=max(b,c);
        if(a>x)
        {
            ans.push_back(0);
        }
        else
        {
            int y=(x-a)+1;
            ans.push_back(y);
        }
        x=max(a,c);
        if(b>x)
        {
            ans.push_back(0);
        }
        else
        {
            int y=(x-b)+1;
            ans.push_back(y);
        }
        x=max(b,a);
        if(c>x)
        {
            ans.push_back(0);
        }
        else
        {
            int y=(x-c)+1;
            ans.push_back(y);
        }
        for(auto x:ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}