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
        string s;
        cin>>s;
        char a[5]={'T','i','m','u','r'};
        if(n!=5)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool found = false;
            for(int i=0; i<5; i++)
            {
                if(s.find(a[i]) == string::npos)
                {
                    found = true;
                    break;
                }
            }
            if(!found)
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