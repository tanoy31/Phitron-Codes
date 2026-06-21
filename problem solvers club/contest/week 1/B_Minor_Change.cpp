#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int count=0;
    int x=s.size();
    for(int i=0;i<x;i++)
    {
        if(s[i]!=t[i])
        {
            count++;
        }
    }
    cout<<count;
}