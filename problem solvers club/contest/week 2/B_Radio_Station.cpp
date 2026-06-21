#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<string,string>mp1;
    map<string,string>mp2;
    for(int i=0;i<n;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp1[s2]=s1;
    }
    for(int i=0;i<m;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        string s3=s2.substr(0,s2.size()-1);
        cout<<s1<< " "<<s2<< " #"<<mp1[s3]<<endl;
    }
}