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
        string s;
        cin>>s;
        string d=s;
        vector<char>r;
        sort (d.begin(),d.end());
        for(int i=0;i<n;i++)
        {
            if(i==n-1||d[i]!=d[i+1])
            {
                r.push_back(d[i]);
            }
        }
        map<char,char>mp;
        for(int i=0,j=r.size()-1;i<=j;i++,j--)
        {
            mp[r[i]]=r[j];
            mp[r[j]]=r[i];
        }
        for(int i=0;i<n;i++)
        {
            s[i]=mp[s[i]];
        }
        cout<<s<<endl;
    }
}