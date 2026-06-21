#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<string>c;
    while(t--)
    {
        string s;
        cin>>s;
        auto it=find(c.begin(),c.end(),s);
        if(it==c.end())
        {
            cout<<"NO"<<endl;
            c.push_back(s);
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}