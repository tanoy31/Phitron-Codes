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
        int x=0;
        int y=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if(x==y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}