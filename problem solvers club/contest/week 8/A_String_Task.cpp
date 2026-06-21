#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    for(char c:s)
    {
        c=tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
            continue;
        cout << '.' << c;
    }
}