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
        int j=0;
        vector<int>ans;
        ans.push_back(0);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                j=j+1;
                auto it=find(ans.begin(),ans.end(),j);
                if(it==ans.end())
                {
                    ans.push_back(j);
                }
            }
            if(s[i]=='L')
            {
                j=j-1;
                auto it=find(ans.begin(),ans.end(),j);
                if(it==ans.end())
                {
                    ans.push_back(j);
                }
            }
        }
        cout<<ans.size()<<endl;
    }
}