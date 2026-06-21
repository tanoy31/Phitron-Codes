#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        int flag=true;
        while(true)
        {
            if(flag==true && mp['0']>0 && mp['1']>0)
            {
                flag=false;
                mp['0']--;
                mp['1']--;
            }
            else if(flag==false && mp['0']>0 && mp['1']>0)
            {
                flag=true;
                mp['0']--;
                mp['1']--;
            }
            else
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }
    }
}