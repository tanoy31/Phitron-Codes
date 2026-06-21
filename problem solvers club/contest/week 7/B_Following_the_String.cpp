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
        vector<pair<int,char>>v;
        char c='a';
        for(int i=1;i<=26;i++)
        {
            v.push_back({0,c});
            c++;
        }
        vector<char>ans;
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            for(auto &p:v)
            {
                if(p.first==x)
                {
                    ans.push_back(p.second);
                    p.first++;
                    break;
                }
            }
        }
        for(auto s:ans)
        {
            cout<<s;
        }
        cout<<endl;
    }
}