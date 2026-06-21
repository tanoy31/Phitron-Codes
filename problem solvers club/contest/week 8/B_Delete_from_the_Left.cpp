#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    int x=s.size();
    int y=t.size();
    int z=x+y;
    int count=0;
    int n=min(x,y);
    for(int i=x-1,j=y-1;i>=0 && j>=0;i--,j--)
    {
        if(s[i]==t[j])
        {
            count+=2;
        }
        else
        {
            break;
        }
    }
    cout<<z-count;
}