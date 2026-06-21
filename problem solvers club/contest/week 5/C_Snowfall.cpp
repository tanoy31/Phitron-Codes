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
        int n;
        cin>>n;
        vector<int>only2,only3,both,none;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0 && x%3!=0)
            {
                only2.push_back(x);
            }
            else if(x%3==0 && x%2!=0)
            {
                only3.push_back(x);
            }
            else if(x%2!=0 && x%3!=0)
            {
                none.push_back(x);
            }
            else
            {
                both.push_back(x);
            }
        }
        for(auto x:only2)
        {
            cout<<x<<" ";
        }
        for(auto x:none)
        {
            cout<<x<<" ";
        }
        for(auto x:only3)
        {
            cout<<x<<" ";
        }
        for(auto x:both)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}