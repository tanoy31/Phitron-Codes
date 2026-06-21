#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while(i < j)
    {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0)
        {
            if(palindrome(s))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            
        }
    }
}