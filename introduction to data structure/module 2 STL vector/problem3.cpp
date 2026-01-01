#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)
        {
            v[i]=INT_MAX;
        }
        if(v[i]<0)
        {
            v[i]=INT_MIN;
        }
    }
    replace(v.begin(),v.end(),INT_MAX,1);
    replace(v.begin(),v.end(),INT_MIN,2);
    for(int x: v)
    {
        cout<<x<< " ";
    }
}