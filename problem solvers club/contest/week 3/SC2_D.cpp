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
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool flag=false;
            if(a<b)
            {
                while(a<b)
                {
                    a*=2;
                    if(a==b)
                    {
                        flag=true;
                        break;
                    }
                }
            }
            else
            {
                while(a>b)
                {
                    b*=2;
                    if(b==a)
                    {
                        flag=true;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}