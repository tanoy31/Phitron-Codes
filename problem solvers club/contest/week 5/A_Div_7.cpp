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
        int x;
        cin>>x;
        if(x%7==0)
        {
            cout<<x<<endl;
        }
        else
        {
            int y=x%7;
            int z=x-y;
            if(z<=9)
            {
                cout<<z+7<<endl;
            }
            else
            {
                cout<<z<<endl;
            }
        }
    }
}