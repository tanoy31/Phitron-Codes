#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.size();
    int f=0;
    for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(s[i]==s[j])
            {
                f++;
                break;
            }
        }
        if(f==0)
        {
            cout<<s[i];
            break;
        }
        f=0;
    }
    
}