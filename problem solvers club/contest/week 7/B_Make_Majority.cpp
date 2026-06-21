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
        int one=0,cnt=0;
        for(char x:s)
            if(x=='1')
            {
                one++;
            }
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0' && (i == 0 || s[i-1] != '0'))
            {
                cnt++;
            }
        }
        if(one>cnt)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}