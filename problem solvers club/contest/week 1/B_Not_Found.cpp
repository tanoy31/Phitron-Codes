#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    char c='a';
    bool flag=false;
    vector<char>v;
    for(auto x:s)
    {
        if(find(v.begin(),v.end(), x)==v.end())
        {
            v.push_back(x);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=c)
        {
            break;
        }
        c++;
    }
    if(c<='z')
    {
        cout<<c;
    }
    else
    {
        cout<<"None";
    }
}