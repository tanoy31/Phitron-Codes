#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        if(k==0 && n%4==0)
        {
            cout<<"Off"<<endl;
        }
        else if(k==0 && n%4!=0)
        {
            cout<<"On"<<endl;
        }
        else if(k==1 && n%4==0)
        {
            cout<<"On"<<endl;
        }
        else if(k==1 && n%4!=0)
        {
            cout<<"Ambiguous"<<endl;
        }
    }
}