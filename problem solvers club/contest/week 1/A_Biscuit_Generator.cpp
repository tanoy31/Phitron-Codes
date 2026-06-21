#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int count =0;
    while(t!=0)
    {
        if(a<=t)
        {
            count+=b;
            t=t-a;
        }
        else
        {
            break;
        }
    }
    cout<<count;
}