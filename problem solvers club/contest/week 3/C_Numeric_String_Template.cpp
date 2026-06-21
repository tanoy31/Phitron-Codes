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
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int q;
        cin>>q;
        while(q--)
        {
            string s;
            cin>>s;
            if(s.size()!=n)
            {
                cout<<"NO"<<endl;
                continue;
            }
            map<char,long long>mp1;  
            map<long long, char> mp2; 
            bool flag=false;
            for(int i=0;i<n;i++)
            {
                char c=s[i];
                long long num=v[i];
                if(mp1.count(c))
                {
                    if(mp1[c]!=num)
                    {
                        flag=true;
                        break;
                    }
                }
                else
                {
                    mp1[c]=num;
                }
                if(mp2.count(num))
                {
                    if(mp2[num]!=c)
                    {
                        flag=true;
                        break;
                    }
                }
                else
                {
                    mp2[num]=c;
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
}