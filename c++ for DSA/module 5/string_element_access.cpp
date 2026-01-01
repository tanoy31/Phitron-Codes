#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
    cout<<s.front()<<endl;
    cout<<s.back()<<endl;
}