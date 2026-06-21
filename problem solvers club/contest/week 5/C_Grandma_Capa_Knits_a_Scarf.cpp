#include<bits/stdc++.h>
using namespace std;
#define ll long long;
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
        int ans=2e5;
        for(char c='a';c<='z';c++)
        {
            int l=0,r=n-1;
            int count=0;
            bool flag=true;
            while(l<r)
            {
                if(s[l]==s[r])
                {
                    l++,r--;
                }
                else if(s[l]==c)
                {
                    count++;
                    l++;
                }
                else if(s[r]==c)
                {
                    count++;
                    r--;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                ans=min(ans,count);
            }
        }
        if(ans==(int)2e5)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}