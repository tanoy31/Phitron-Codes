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
        string s,t;
        cin>>s>>t;
        if(s==t ||s[0]=='1')
        {
            cout<<"YES"<<endl;
            continue;
        }
        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }
        if(pos!=-1)
        {
            bool flag=false;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=t[i])
                {
                    if(i<pos)
                    {
                        flag=true;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}