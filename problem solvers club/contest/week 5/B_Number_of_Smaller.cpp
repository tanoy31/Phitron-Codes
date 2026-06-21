#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    long long a[x];
    long long b[y];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<y;i++)
    {
        cin>>b[i];
    }
    int l=0,r=0,cnt=0;
    while(r<y)
    {
        if(l<x && a[l]<b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            cout<<cnt<<" ";
            r++;
        }
    }
}