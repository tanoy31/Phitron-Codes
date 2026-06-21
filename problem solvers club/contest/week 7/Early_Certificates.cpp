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
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int mn=min(n,m);
        vector<char>v;
        for(int i=0;i<mn;i++)
        {
            if(s1[i]==s2[i])
            {
                v.push_back(s1[i]);
            }
            else
            {
                break;
            }
        }
        for(auto x:v)
        {
            cout<<x;
        }
        cout<<endl;
    }
}