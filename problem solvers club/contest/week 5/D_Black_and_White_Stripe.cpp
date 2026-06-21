#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0,ans=0;
        for(int l=0,r=0;r<n;r++)
        {
            if(s[r]=='B')
            {
                cnt++;
            }
            if(r-l+1==k)
            {
                ans=max(ans,cnt);
                if(s[l]=='B')
                {
                    cnt--;
                }
                l++;
            }
        }
        cout<<k-ans<<endl;
    }
}