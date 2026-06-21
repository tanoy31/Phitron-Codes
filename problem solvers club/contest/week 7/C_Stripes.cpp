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
        char c[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>c[i][j];
            }
        }
        bool flag=false;
        for(int i=0;i<8;i++)
        {
            int cnt=0;
            for(int j=0;j<8;j++)
            {
                if(c[i][j]=='R')
                {
                    cnt++;
                }
            }
            if(cnt==8)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"R"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
}