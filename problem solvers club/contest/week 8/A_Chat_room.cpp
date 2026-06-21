#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string t="hello";
    int j=0;
    for (char c:s) 
    {
        if(c==t[j])
        {
            j++;
        }
        if (j==5)
        {
            break;
        }
    }
    if(j==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}