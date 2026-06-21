#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[105];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr[t]=1;
    }
    int f=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]==0)
        {
            f++;
        }
    }
    if(arr[x]==1) 
    {
        f++;
    }
    cout<<f;
}