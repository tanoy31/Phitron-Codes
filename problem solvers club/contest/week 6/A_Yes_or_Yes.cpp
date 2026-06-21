#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        for(char c:s)
        {
            if(c=='Y')
            {
                cnt++;
            }
        }
        if(cnt<=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}