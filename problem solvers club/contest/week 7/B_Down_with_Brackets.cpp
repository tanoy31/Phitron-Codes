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
        string s;
        cin>>s;
        int n=s.size();
        bool flag =true;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!='(')
            {
                flag=false;
                break;
            }
        }
        for(int i=n/2;i<n;i++)
        {
            if(s[i]!=')')
            {
                flag=false;
                break;
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
}