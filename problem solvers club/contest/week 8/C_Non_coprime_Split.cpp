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
        int l,r;
        cin>>l>>r;
        bool flag=false;
        for(int i=l;i<=r;i++)
        {
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    cout<<j<< " "<<i-j<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag==false)
        {
            cout<<-1<<endl;
        }
    }
}