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
        if(x>20)
        {
            cout<<200+(((x-20)/2)*5)<<endl;
        }
        else
        {
            cout<<x*10<<endl;
        }
    }
}