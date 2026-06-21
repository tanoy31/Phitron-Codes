#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string>v;
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}