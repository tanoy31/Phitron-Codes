#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    vector<int>v3;
    for(int i=0;i<n;i++)
    {
        v3.push_back(v2[i]);
    }
    for(int i=0;i<n;i++)
    {
        v3.push_back(v[i]);
    }
    for(int x: v3)
    {
        cout<< x<< " ";
    }
}