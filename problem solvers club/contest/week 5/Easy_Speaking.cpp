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
        int count=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
            {
                count++;
                ans=max(ans,count);
            }
            else
            {
                count=0;
            }
        }
        if(ans>=4)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}